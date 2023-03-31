#include <iostream>
#include <iomanip>

int main(){

  std::cout << std::fixed << std::setprecision(2);

  int x;
  std::cin >> x;

  std::cout << ((x * 86400) * 14.33) + (37.33*149598000) << '\n';
  double km = ((x * 86400) * 14.33) + (37.33*149598000);
  
  std::cout << ((x * 86400) * 8.90) + (37.33*92955800) << '\n';
  
  std:: cout << (((km * 2000)/299792458) / 3600) << '\n';

}
