// BasicPrograms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
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
    bool val = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the rate of acceleration in m/sec2 : " << endl;
    cin >> a;
    bool val = ValidateInput();
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
    bool val = ValidateInput();
   if(val==false){abort();}
    cout << "Enter the Rate of Interest : " << endl;
    cin >> R;
    bool val = ValidateInput();
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
    bool val = ValidateInput();
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
    bool val = ValidateInput();
   if(val==false){abort();}
    dis = sqrt((pow(x2 - x1, 2)) - (pow(y2 - y1, 2)));
    cout << "Distance between 2 points is " << dis;
    cout << "********************************" << endl;
}
