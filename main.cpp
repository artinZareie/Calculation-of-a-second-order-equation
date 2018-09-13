#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void Application();

int main()
{
    Application();

    getch();
    return 0;
}

void Application(){
    double a,b,c,root1,root2;
    cout << "Hello , Do you want to calculate a equation ? we'll solve it , so please enter numbers a ,b ,and c to calculating" << endl;
    cin >> a >> b >> c;
    cout << endl << endl << endl;
    double delta = (pow(b,2)) - (4*a*c);
    cout << "delta :" << delta << " , a :" << a << " , b :" << b << " , c :" << c << endl<< endl << endl;
    if (delta < 0) {
        cout << "Error :: Delta can not be fewer than 0";
    }
    else if (delta == 0) {
        root1 = ((-b) + sqrt(delta)) / (2 * a);
        cout << "Two similar answers were found : " << root1;
    }
    else {
        root1 = ((-b) + sqrt(delta)) / (2 * a);
        root2 = ((-b) - sqrt(delta)) / (2 * a);
        cout << "First answer : " << root1 << endl << "Secend answer : " << root2 << endl;
    }
}
