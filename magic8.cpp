#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  cout << "MAGIC 8-BALL\n";
  srand(time(NULL));
  int answer = rand() % 20 + 1;

  switch(answer) {
  case 1:
  cout << "It is certain.";
  break;
  case 2:
  cout << "It is decidedly so.";
  break;
  case 3:
  cout << "Without a doubt.";
  break;
  case 4:
  cout << "Yes - definitely.";
  break;
  case 5:
  cout << "You may rely on it.";
  break;
  case 6:
  cout << "As I see it, yes.";
  break;
  case 7:
  cout << "Most likely.";
  break;
  case 8:
  cout << "Outlook good.";
  break;
  case 9:
  cout << "Yes.";
  break;
  case 10:
  cout << "Signs point to yes.";
  break;
  case 11:
  cout << "Reply hazy, try again.";
  break;
  case 12:
  cout << "Ask again later.";
  break;
  case 13:
  cout << "Better not tell you now.";
  break;
  case 14:
  cout << "Cannot predict now.";
  break;
  case 15:
  cout << "Concentrate and ask again.";
  break;
  case 16:
  cout << "Don't count on it.";
  break;
  case 17:
  cout << "My reply is no.";
  break;
  case 18:
  cout << "My sources say no.";
  break;
  case 19:
  cout << "Outlook not so good.";
  break;
  case 20:
  cout << "Very doubtful.";
  break;

  default:
  cout << "Cannot provide more information.";
  break;
  }
  return 0;
}
