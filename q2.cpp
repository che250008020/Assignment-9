#include <iostream>
using namespace std;

struct Color{
    int red;
    int blue;
    int green;
	
};
int main()
{
    Color colors[5]={{55,34,35},{67,33,57},{32,24,96},{21,20,19},{58,76,45}};
    
    for (int i = 0; i < 3; i++) {
        colors[i].red   = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue  = 255 - colors[i].blue;
    }

    cout << "New RGB values after inversion:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": "
             << "R = " << colors[i].red << ", "
             << "G = " << colors[i].green << ", "
             << "B = " << colors[i].blue << endl;
    }
}
