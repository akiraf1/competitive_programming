#include <iostream>
#include <cstdio>
using namespace std;


class Dice
{
public:
  int faces[6];
  // 0: upper
  // 1: south
  // 2: east
  // 3: west
  // 4: north
  // 5: lower
  void set_numbers(int numbers[]);
  void roll_east();
  void roll_west();
  void roll_north();
  void roll_south();
  void roll_crockwise();
  int get_upper();
  int get_south();
  bool compare_faces(int numbers[]);
};

void Dice::set_numbers(int numbers[])
{
  for (int i = 0; i < 6; i++) {
    faces[i] = numbers[i];
  }
}

void Dice::roll_east()
{
  int tmp;
  tmp = faces[0];
  faces[0] = faces[3];
  faces[3] = faces[5];
  faces[5] = faces[2];
  faces[2] = tmp;
}

void Dice::roll_west()
{
  int tmp;
  tmp = faces[0];
  faces[0] = faces[2];
  faces[2] = faces[5];
  faces[5] = faces[3];
  faces[3] = tmp;
}

void Dice::roll_north()
{
  int tmp;
  tmp = faces[0];
  faces[0] = faces[1];
  faces[1] = faces[5];
  faces[5] = faces[4];
  faces[4] = tmp;
}

void Dice::roll_south()
{
  int tmp;
  tmp = faces[0];
  faces[0] = faces[4];
  faces[4] = faces[5];
  faces[5] = faces[1];
  faces[1] = tmp;
}

void Dice::roll_crockwise()
{
  int tmp;
  tmp = faces[1];
  faces[1] = faces[2];
  faces[2] = faces[4];
  faces[4] = faces[3];
  faces[3] = tmp;
}

int Dice::get_upper()
{
  return faces[0];
}

int Dice::get_south()
{
  return faces[1];
}

bool Dice::compare_faces(int numbers[])
{
  bool is_same = true;
  for (int i = 0; i < 6; i++) {
    if (faces[i] != numbers[i]) is_same = false;
  }
  return is_same;
}


int main()
{
  int dice_master_numbers[6];
  int dice_compare_numbers[6];
  int upper_num;
  int south_num;
  string order;
  Dice d;

  for (int i = 0; i < 6; i++) {
    cin >> dice_master_numbers[i];
  }
  for (int i = 0; i < 6; i++) {
    cin >> dice_compare_numbers[i];
  }

  upper_num = dice_master_numbers[0];
  south_num = dice_master_numbers[1];
  d.set_numbers(dice_compare_numbers); // 比較用サイコロをセット

  bool same_dice = false;
  int count = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      if (d.compare_faces(dice_master_numbers)) same_dice = true;
      d.roll_crockwise();
    }
    if (count < 3) {
      d.roll_north();
      count++;
    } else if (count == 3) {
      d.roll_east();
      count++;
    } else if (count == 4) {
      d.roll_west();
      d.roll_west();
    }
  }

  if (same_dice) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
