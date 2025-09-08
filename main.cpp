#include <iostream>
using namespace std;

int main() {
  //Rectangle Dimensions
  const double length = 7.2;
  const double width = 1.3;

  //Calculations
  double area = length * width;
  double perimeter = 2 * (length + width);

  //Output
  cout << "Rectangle Properties: " << endl;
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;


  


}