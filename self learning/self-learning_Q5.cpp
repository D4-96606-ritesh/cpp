#include <iostream>
using namespace std;

int my_strlen(const char *str)
{
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    return len;
}

void my_strcpy(char *dest, const char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char source[100];
    char destination[100];

    cout << "Enter string: ";
    cin.getline(source,100);

    cout << "Length of string: " << my_strlen(source) << endl;

    my_strcpy(destination, source);

    cout << "Copied string: " << destination << endl;

    return 0;
}