#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S'){
    cout << "You have received Super Ultra Rare Unit!!!" << endl;
    cout << "You have received 5 gems." << endl;
    cout << "You have received 1 gems." << endl;
    cout << "You have received 2000 coins." << endl;
    cout << "You have received very KAK items." << endl;
  }
  if(rank == 'A'){
    cout << "You have received 5 gems." << endl;
    cout << "You have received 1 gems." << endl;
    cout << "You have received 2000 coins." << endl;
    cout << "You have received very KAK items." << endl;
  }
  if(rank == 'B'){
    cout << "You have received 1 gems." << endl;
    cout << "You have received 2000 coins." << endl;
    cout << "You have received very KAK items." << endl;
  }
  if(rank == 'C'){
    cout << "You have received 2000 coins." << endl;
    cout << "You have received very KAK items." << endl;
  }
  if(rank == 'D'){
    cout << "You have received very KAK items." << endl;
  }
  return 0;
}
