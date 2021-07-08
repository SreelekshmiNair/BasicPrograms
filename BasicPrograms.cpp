// BasicPrograms.cpp : Sreelekshmi S Amma
// Description : This program consists of several Basic programs that can be done in C++ organised as a menu.
//

#include <iostream>
#include<math.h>
#include<string.h>
// #include<stdlib.h>
using namespace std;

bool ValidateInput();
void HelloWorld();
void AreaofTriangle();
void SumofNaturalNumbers();
void RootsofQuadEqn();
void DistanceTravelled();
void SimpleInterest();
void VolumeofCylinder();
void DistancebtwPoints();
void SwapNumbers();
void SizeDatatypes();
void FindASCII();
void Factorial();
void BinaryToDecimal();
void FreqOfChar();
void strngcomp1();
void strngcomp2();

int main()
{
    int option;
    while (1)
    {
        
        cout << "**************Menu**************" << endl;
        cout << "  1 : Display Hello World" << endl;
        cout << "  2 : Find the Area of a Triangle" << endl;
        cout << "  3 : Find the sum of first 'N' Natural numbers" << endl;
        cout << "  4 : Find the roots of a Quadratic Equation" << endl;  
        cout << "  5 : Find the distance travelled between 2 velocities" << endl;
        cout << "  6 : Find the Simple Interest" << endl;
        cout << "  7 : Find the volume of a Cylinder" << endl;
        cout << "  8 : Find the distance between two 2-d points" << endl;
        cout << "  9 : Swap 2 numbers without using 3rd variable" << endl;
        cout << " 10 : Find the Size of Datatypes" << endl;
        cout << " 11 : Find the ASCII value of a character" << endl;
        cout << " 12 : Find the Factorial of a number " << endl;
        cout << " 13 : Convert the binary to decimal " << endl;
        cout << " 14 : Find the frequency of occurance of a character in a string " << endl;
        cout << " 15 : Compare 2 strings using builtin function : " << endl;
        cout << " 16 : Compare 2 strings without strcmp() " << endl;
//Last option for exiting
        cout << "100 : Exit the Program" << endl;
        cout << "Select the required action by their number : " << endl;
       
        cin >> option;
        bool val = ValidateInput();
   if(val==false){abort();}
        switch (option)
        {
        default:cout << "Invalid selection";
            break;
        case 1:
            HelloWorld();
            break;
        case 2:
            AreaofTriangle();
            break;
        case 3:
            SumofNaturalNumbers();
            break;
        case 4:
            RootsofQuadEqn();
            break;
        case 5:
            DistanceTravelled();
            break;
        case 6:
            SimpleInterest();
            break;
        case 7:
            VolumeofCylinder();
            break;
        case 8:
            DistancebtwPoints();
            break;
        case 9:
            SwapNumbers();
            break;
        case 10:
            SizeDatatypes();
            break;
        case 11:
            FindASCII();
            break;
        case 12:
            Factorial();
            break;
        case 13:
            BinaryToDecimal();
            break;
        case 14:
            FreqOfChar();
            break;
        case 15:
            strngcomp1();
            break;
        case 16:
            strngcomp2();
            break;
        case 100:
           abort();
        }
    }
    
}
bool ValidateInput(){
    //Section to check whether only input with correct datatype is taken
        if(!cin)
        {
            cin.clear(); 
            //cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, Program exited" << endl;
            return false;
        }
return true;
}
void HelloWorld()
{
    cout << "********************************" << endl;
    cout << "Hello World"<<endl;
    cout << "********************************" << endl;
}
void AreaofTriangle()
{
    float b, h,Area;
    cout << "********************************" << endl;
    cout << "Enter the breadth and height of the Triangle respectively : " << endl;
    cin >> b>>h;
    bool val = ValidateInput();
   if(val==false){abort();}
    Area = (b * h) / 2;
    cout << "Area of the Triangle is : "<< Area <<endl;
    cout << "********************************" << endl;
}
void SumofNaturalNumbers()
{
    int N,Sum;
    cout << "********************************" << endl;
    cout << "Enter the value of 'N': " << endl;
    cin >> N;
    bool val = ValidateInput();
   if(val==false){abort();}
    Sum = N * (N + 1) / 2;
    cout << "Sum of first " << N << " Natural numbers is " << Sum << endl;
    cout << "********************************" << endl;
}
void RootsofQuadEqn()
{
    float a, b, c; float root1,root2;
    cout << "********************************" << endl;
    cout << "Enter the 3 coefficients of the Quadratic equation in order : " << endl;
    cin >> a>> b>> c;
    bool val = ValidateInput();
   if(val==false){abort();}
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    cout << "Roots of the Quadratic equation " << a << "x2+" << b << "x+" << c << " are " << root1 << " and " << root2 << endl;
    cout << "********************************" << endl;
}
void DistanceTravelled()
{
    float u, v, a, S;
    cout << "********************************" << endl;
    cout << "Enter the initial velocity in m/s : " << endl;
    cin >> u;
    bool val = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the final velocity in m/s : " << endl;
    cin >> v;
    bool val1 = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the rate of acceleration in m/sec2 : " << endl;
    cin >> a;
    bool val2 = ValidateInput();
   if(val==false){abort();}
    S = (pow(v, 2) - pow(u, 2)) / (2 * a);
    cout << "The distance travelled is " << S << "m"<<endl;
    cout << "********************************" << endl;
}
void SimpleInterest()
{
    float P, R,SI; int N;
    cout << "********************************" << endl;
    cout << "Enter the Principal Amout : " << endl;
    cin >> P;
    bool val = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the Number of Years : " << endl;
    cin >> N;
    bool val1 = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the Rate of Interest : " << endl;
    cin >> R;
    bool val2 = ValidateInput();
   if(val==false){abort();}
    SI = (float)P * N * R / 100;
    cout << "The Simple interest is " << SI << endl;
    cout << "********************************" << endl;
}
void VolumeofCylinder()
{
    float rad, h, volume;
    cout << "********************************" << endl;
    cout << " Enter the radius of the Cylinder : " << endl;
    cin >> rad;
   bool val = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the height of the Cylinder : " << endl;
    cin >> h;
    bool val1 = ValidateInput();
   if(val==false){abort();}
    volume = 3.14 * rad * rad * h;
    cout << " Volume of Cylinder is : " << volume << endl;
    cout << "********************************" << endl;
}
void DistancebtwPoints()
{
    float x1, x2, y1, y2,dis;
    cout << "********************************" << endl;
    cout << "Enter the (x,y) of first point : " << endl;
    cin >> x1>> y1;
    bool val = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the (x,y) of last point : " << endl;
    cin >> x2 >> y2;
    bool val1 = ValidateInput();
   if(val==false){abort();}
    dis = sqrt((pow(x2 - x1, 2)) - (pow(y2 - y1, 2)));
    cout << "Distance between 2 points is " << dis;
    cout << "********************************" << endl;
}
void SwapNumbers()
{
int num1,num2;
cout << "Enter the first number : " <<endl;
cin >> num1;
 bool val = ValidateInput();
   if(val==false){abort();}
cout << "Enter the second number : " <<endl;
cin >> num2;
 bool val1 = ValidateInput();
   if(val==false){abort();}
cout << "Before swapping numbers are " << num1 << " and " << num2 << endl;
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout << "After swapping numbers are " << num1 << " and " << num2 << endl;
}
void SizeDatatypes()
{
cout << "Size of char data type is " << sizeof(char) << "bytes" << endl;
cout << "Size of int data type is " << sizeof(int) << "bytes" << endl;
cout << "Size of float data type is " << sizeof(float) << "bytes" << endl;
cout << "Size of double data type is " << sizeof(double) << "bytes" << endl;
}
void FindASCII()
{
    char charac;
cout<< "Enter a character : "<<endl;
cin>>charac;
cout<< "ASCII value of " << charac << " is " << int(charac) << endl;
}
void Factorial()
{ 
    int number,fact=1;
cout << "Enter a positive number :" <<endl;
cin >> number;
bool val = ValidateInput();
if(val==false){abort();}
for(int i=2;i<=number;i++){
fact = fact*i;
}
cout << "The Factorial of " << number << " is " << fact << endl;;
}
void BinaryToDecimal(){
    int input,dec=0;
    cout << "Enter the binary value : " <<endl;
    cin >> input;
     cout << "The decimal value of " << input << " is ";
  for(int i=0;input!=0;++i)
  {
      int rem = input%10;
      dec = dec+(rem * (pow(2,i)));
      input = input/10;
  }
  cout << dec<<endl;
}
void FreqOfChar()
{
    int count = 0;
    char str[50], ch;
    cout << "Enter the string : " << endl;
    cin >> str;
    cout << "Enter the character to be searched : " << endl;
    cin >> ch;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){count++;}
    }
if(count==0){cout<<"The character " << ch << " not found in the string " << str << endl;}
   else{cout<<"The character " << ch << " found " << count << " times in the string " << str << endl;}
}
void strngcomp1(){
    char str1[50], str2[50];
    cout << "Enter the first string : " << endl;
    cin >> str1;
    cout << "Enter the second string : " << endl;
    cin >> str2;
    if(strcmp(str1,str2)==0){
        cout << "Strings " << str1 << " and " << str2 << " are similar." <<endl;}
    else{
        cout << "Strings " << str1 << " and " << str2 << " are not similar." <<endl;}    
}
void strngcomp2(){
    char str1[50], str2[50];int flag=0;
    cout << "Enter the first string : " << endl;
    cin >> str1;
    cout << "Enter the second string : " << endl;
    cin >> str2;
    if(strlen(str1)==strlen(str2)){
        for(int i=0;str1[i]!='\0',str2[i]!='\0';i++){if(str1[i]!=str2[i]){flag=1;break;}}
    if(flag==0){cout << "Strings " << str1 << " and " << str2 << " are similar." <<endl;}
    else{cout << "Strings " << str1 << " and " << str2 << " are not similar." <<endl;} 
    }
    else{
        cout << "Strings " << str1 << " and " << str2 << " are not similar." <<endl;}    
}