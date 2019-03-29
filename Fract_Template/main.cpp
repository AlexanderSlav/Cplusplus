#include <iostream>
#include "utility"
using namespace std;



template <typename  T> class Fract{
public:
    T numenator; // числитель
    T denomanetor; // знаменатель
    Fract (T a, T b): numenator(a), denomanetor (b){};


    Fract& reduction(){
        T tmp = numenator;
        T tmp2 = denomanetor;
        while (tmp != tmp2){
            if (tmp > tmp2)
                tmp -= tmp2;
            else
                tmp2 -= tmp;
        }
        numenator /= tmp;
        denomanetor /= tmp;
        return *this;
    }

    bool operator == (const Fract& other_fract){
        double fract_first = (double)numenator / denomanetor;
        double fract_second = (double)other_fract.numenator / other_fract.denomanetor;
        return (fract_first == fract_second);
    }

    bool operator != (const Fract& other_fract){
        double fract_first = (double)numenator / denomanetor;
        double fract_second = (double)other_fract.numenator / other_fract.denomanetor;
        return (fract_first != fract_second);
    }

    bool operator > (const Fract& other_fract){
        double fract_first = (double)numenator / denomanetor;
        double fract_second = (double)other_fract.numenator / other_fract.denomanetor;
        return (fract_first > fract_second);
    }


    Fract& operator + ( Fract& other_fract){
        T tmp = denomanetor;
        T tmp2 = other_fract.denomanetor;
        while (tmp != tmp2){
            if (tmp > tmp2)
                tmp -= tmp2;
            else
                tmp2 -= tmp;
        }
        T common_denomenator = denomanetor * other_fract.denomanetor / tmp ;
        numenator *=  common_denomenator / denomanetor;// Приводим к общему знаменателю первую дробь
        denomanetor *=  common_denomenator / denomanetor;
        other_fract.numenator *= common_denomenator / denomanetor; // Приводим к общему знаменателю вторую дробь
        other_fract.denomanetor *= common_denomenator / denomanetor;
        numenator += other_fract.numenator;
        return *this;

    }
    Fract& operator - (const Fract& other_fract){


        return *this;
    }
    Fract& operator = (const Fract& other_fract){


        return *this;
    }



};
int main() {
   Fract <int> a(12,36);
   Fract <int > b(2,5);
   //cout << (a == b);
   //cout << (a != b);
   //cout << (a > b);
   cout << (a + b);
   a.reduction();
   cout << a.denomanetor<<endl;
   cout << a.numenator<<endl;






}