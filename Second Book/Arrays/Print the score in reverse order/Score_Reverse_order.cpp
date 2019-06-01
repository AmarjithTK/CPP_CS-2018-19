/* -------------------- Print the scores in reverse order --------------- */

#include <iostream>
using namespace std;
int main()
{
  int i, score[5];
  for (i = 0; i < 5; i++)
  {
    cout << "Enter the score";
    cin >> score[i];
  }
  for (i = 0; i < 5; i++)
  {
    cout << score[i];
  }

  return 0;
}
