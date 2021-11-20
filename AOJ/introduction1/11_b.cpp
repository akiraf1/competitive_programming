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
  int get_east();
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

int Dice::get_east()
{
  return faces[2];
}


int main()
{
  int numbers[6];
  int n;
  int upper_num;
  int south_num;
  string order;
  Dice d;

  for (int i = 0; i < 6; i++) {
    cin >> numbers[i];
  }
  d.set_numbers(numbers);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> upper_num >> south_num;

    int count = 0;
    while(d.get_upper() != upper_num) {
      if (count < 4) {
        d.roll_east();
        count++;
      } else {
        d.roll_north();
      }
    }

    while(d.get_south() != south_num) {
      d.roll_crockwise();
    }

    cout << d.get_east() << endl;
  }
}
