#include <iostream>

//using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box{
  int Height;
  int Width;
  int Length;
} Box1 , Box2;

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    std::cout << "Enter Box 1 Height : ";
    std::cin >> Box1.Height;
    std::cout << "Enter Box 1 Width : ";
    std::cin >> Box1.Width;
    std::cout << "Enter Box 1 Length : ";
    std::cin >> Box1.Length;
    
    std::cout << "Enter Box 2 Height : ";
    std::cin >> Box2.Height;
    std::cout << "Enter Box 2 Width : ";
    std::cin >> Box2.Width;
    std::cout << "Enter Box 2 Length : ";
    std::cin >> Box2.Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( Box1.Height,Box1.Width,Box1.Length ) + volume(Box2.Height,Box2.Width,Box2.Length );
    
   std::cout << "Volume of Box is " << totalVolume << std::endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  int vol ;
  vol = height * width * length ;
  return vol ;
}