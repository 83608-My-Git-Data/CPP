#include <iostream>
using namespace std;

class Cylinder {
    private:
    static const double pi; 
    int radius; 
    int height;
    

    public:
    Cylinder() : radius(1), height(1) {}
    Cylinder(int r, int h) : radius(r), height(h) {}

    void calculateVolume(){
        cout<<"Volume Of Cylinder is : "<< pi * radius * radius * height<<endl;
    }

    void setRadius(int newRadius) {  radius = newRadius;}

    int getRadius()  { return radius; }

    void setHeight(int newHeight) {  height = newHeight;}

    int getHeight() { return height; }

    int getVolume () {
        return pi * radius * radius * height;
    }








    };
    const double Cylinder::pi = 3.14;

int main() {

    Cylinder c1;
    Cylinder c2(3,5);
    c1.setRadius(4);
    c1.setHeight(5);
    c1.getVolume();
    c1.calculateVolume();
    c2.calculateVolume();
    


}