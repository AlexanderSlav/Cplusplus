#include <iostream>
#include "utility"
using namespace std;

template <typename  T> class Fract{
public:
    T numenator; // числитель
    T denomanetor; // знаменатель
    Fract (T a, T b): numenator(a), denomanetor (b){};

    bool operator == (const Fract& other_fract){
        double fract_first = (double)numenator / denomanetor;
        double fract_second = (double)other_fract.numenator / other_fract.denomanetor;
        return (fract_first == fract_second);
    }






};
int main() {
   Fract <int> a(1,2);
   Fract <int > b(2,5);
   cout << (a == b);





}