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
  void print_upper();
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

void Dice::print_upper()
{
  cout << faces[0] << endl;
}


int main()
{
  int numbers[6];
  string order;
  Dice d;

  for (int i = 0; i < 6; i++) {
    cin >> numbers[i];
  }
  cin >> order;
  d.set_numbers(numbers);

  for (int i = 0; i < order.size(); i++) {
    switch (order[i]) {
      case 'E': 
        d.roll_east();
        break;
      case 'W': 
        d.roll_west();
        break;
      case 'N': 
        d.roll_north();
        break;
      case 'S': 
        d.roll_south();
        break;
    }
  }

  d.print_upper();
}
