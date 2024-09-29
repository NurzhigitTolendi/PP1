#include <iostream> // library, iostream -> input stream / output stream 
#include <cmath> // 

using namespace std; // we want use folder called std (standart)


/*
    int a = 5;
    float b = 2.5;

*/

int main() {
    // cout << "Hello, world!";

    // [a-zA-Z0-9_]
    /*
    int my; 
    int MyVar;
    int MyVar2; 
    int My_var2;

    int var;

    int ad12; 


    int a = 5;
    int b = 10; 


    int c; 

    c = 25;

    cout << a + b << endl;
    cout << c;
*/ 
    // 1, 10, 20, -25 

/*

    int number1; 
    int number2;

    cout << "Enter the number ..." << endl;

    cin >> number1 >> number2; 

    int number3 = number1 + number2;

    cout << number3 << endl; 



    int num1, num2;

    cout << "Enter some numbers ...\n";

    cin >> num1;
    cin >> num2 ;

    int result = num1 * num2;

    cout << result << endl;


    int a; 
    int b; 

    cin >> a >> b;

    int result = a % b; 

    cout << result << endl;
*/
    // 123 % 10 = 3
    // 43 % 8 = 3 

    // 35 % 3 = 2 

/*
    float a; // 4 byte 
    double b; // 8 byte 

    a = 3.6;  // 2.3 , 1123.343234, -123.434
    b = 7.7;

    cout << a + b << endl;
    

   char a = 'K';
   char b = 'B';
   char c = 'T';
   char d = 'U';


   string a1 = "Hello"; 

    cout << a1 << ", " << a << b << c << d << endl;


   int a = 435; 
   int b = 5; 

   int c = a / b;

   cout << c;

    int a = 10; 
    float b1 = sqrt(a); 
    int b = pow(a, 5);

    int c = min(2, 4);
    int d = max(2, 4);


    cout << b1 << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    // int - 4 byte
    // float - 4 byte
    // double - 8 byte 

    float a = 2.5;
    double b = 4.1;

    int t = a; // type casting 

    int r = 10;

    float q = r; 

    cout << t << endl;
    cout << q << endl; 

    double res = a * b; 

    cout << res << end

    char a = 'K';
    char b = 'B';
    char c = 'T';
    char d = 'U';

    string word1 = "Hello";
    string word2 = "World";
    string word3 = word1 + ", " + word2 + "!"; // Hello, World!
    cout << word3.size();
    bool a=true; // a = 1
    bool b = false; // b = 0
*/ 

// Data types 

   /*  int - 4 byte: 1, 2, 20, -134
       float - 4 byte: 1.2, 2.5, 32.76, -23.5
       double - 8 byte: 1.2, 2.5, 32.76, -23.5
       char - 1 byte: 'c', 'A', 'Z'
       string - (amount of chars): 'hello', 'mir'
       bool (logic value): 1/0 


    int a = 4;
    float b = 2.5;
    double c = 35.46;
    char d = 'F';
    string word = "T";
    bool isOk = false;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << word << endl;
    cout << isOk << endl;
*/

    float a1 = sqrt(16);
    float a2 = pow(16, 3);
    float a3 = min(2, 3);
    float a4 = max(2, 4);
    float a5 = min(10, max(2, 3));
    float a6 = round(2.6); 
    float a6 = ceil(2.001);
    float a7 = floor(2.999);


    float pi = 3.14; 
    float a9 = sin(90 * pi/180);
    float a10 = cos(90 * pi/180);
    float a11 = tan(90 * pi/180);


cout << a10 << endl;
cout << a11 << endl;
cout << a10 << endl;

    return 0;
}