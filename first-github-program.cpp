#include <iostream>
using namespace std;

void printNum(int x);

int main() {
  int num;
  int multiplier;

  int nums[5][5];

  cin >> nums[2][3];
  printNum(nums[2][3]);

  //cout << arrayLength();

  for(int i = 0; i < 1; i++) {
    cout << "type a number: ";
    cin >> num;

    if (num > 10) {
      cout << "that's big!\n";
    }

    cout << "type a multiplier: ";
    cin >> multiplier;
    cout << "you entered: " << num * multiplier << "\n";


  }


  string happy;
  cin >> happy;
  char r = 'B';
  cout << r;

  cout << happy << "\n";
  cout << happy.find(r);



  return 0;
}

int arrayLength() {
  //return sizeof(arr)/sizeof(arr[0]);

  return 3;

}

void printNum(int x) {
  cout << x << "\n";
}
