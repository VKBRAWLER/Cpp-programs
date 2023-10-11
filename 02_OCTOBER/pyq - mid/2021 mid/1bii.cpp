// Write C++ programme to create a class distance with a private member as integer metre and centimetre and public function as input to read value of metre at centimetre from the user add function that inputs two objects of distance this function will take objects as arguments and return the object that contain sum of two distance a display function to display the value of metre and Centimetre
#include <iostream>
using namespace std;

class Distance {
    int metre;
    int centimetre;
    public:
        void input() {
            cout << "Enter the distance in metres: ";
            cin >> metre;
            cout << "Enter the distance in centimetres: ";
            cin >> centimetre;
        }
        void display() {
            cout << "Distance: " << metre << " metres " << centimetre << " centimetres" << endl;
        }
        Distance add(Distance d1, Distance d2) {
            Distance result;
            result.metre = d1.metre + d2.metre;
            result.centimetre = d1.centimetre + d2.centimetre;
            if (result.centimetre >= 100) {
                result.metre += result.centimetre / 100;
                result.centimetre %= 100;
            }
            return result;
        }
};
int main() {
    Distance d1, d2, d3;

    cout << "Enter the first distance:" << endl;
    d1.input();

    cout << "Enter the second distance:" << endl;
    d2.input();

    d3 = d3.add(d1, d2);

    cout << "The sum of the distances is:" << endl;
    d3.display();

    return 0;
}