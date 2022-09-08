using namespace std;
# include<iostream>
#include <string.h>

int main()
{
  string str = "how Many wOrds";
  int vowels = 0;
  int words = 1;
  int consonants = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'  )
            {
              vowels++;
            }
        else if (str[i] == ' ')
            {
              words++;
            }
        else
            {
              consonants++;
            }
  }
  cout << "Vowels Count is  : " << vowels <<endl;
  cout << "words Count is  : " << words <<endl;
  cout << "consonants Count is  : " << consonants <<endl;

	return 0;
}
