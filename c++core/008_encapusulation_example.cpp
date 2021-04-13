#include <iostream>
#include <string>
using namespace std;

class Cube{
    private:
        double len, width, height;
    
    public:
        void set_len(double l){
            len = l;
        }

        double get_len(){
            return len;
        }

        void set_width(double w){
            width = w;
        }

        double get_width(){
            return width;
        }

        void set_height(double h){
            height = h;
        }
    
        double get_height(){
            return height;
        }

        double getArea(){
            return 2*(len * width + len * height + width * height);
        }

        double getVolume(){
            return len * width * height;
        }

        void isSame(Cube &c1){
            if(len == c1.get_len() && width == c1.get_width() && height == c1.get_height()){
                cout << "the two cubes are the same!" << endl;
            } else {
                cout << "the two cubes are not the same!" << endl;
            }
        }
};


bool isSame(Cube &c1, Cube &c2){
    if (c1.get_len() == c2.get_len() && c1.get_width() == c2.get_width() && c1.get_height() == c2.get_height()){
        return true;
    }
    return false;
}


int main(int argc, char const *argv[])
{   

    double len, width, height;
    cout << "please key in the length, width, height: " << endl;
    cin >> len >> width >> height;

    Cube cube;
    cube.set_len(len);
    cube.set_width(width);
    cube.set_height(height);

    cout << "area is " << cube.getArea() << endl;
    cout << "volume is " << cube.getVolume() << endl;

    Cube cube2;
    cube2.set_len(1);
    cube2.set_width(2);
    cube2.set_height(3);

    bool judge = isSame(cube, cube2);

    if (judge == 1){
        cout << "the two cubes are the same" << endl;
    } else{
        cout << "the two cubes are not the same" << endl;
    }
        
    cube.isSame(cube2);
    return 0;
}
