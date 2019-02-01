#include <iostream>
using namespace std;


int ** create_array2d(size_t a, size_t b){
        int ** m = new int *[a];
        for (size_t i = 0; i != a; ++i)
            m[i] = new int [b];
        for (size_t i = 0; i != a; i++)
            cout<< *m[i]<<endl;
        return m;
}

void free_array2d(int ** m, size_t a, size_t b){
    for (size_t i = 0; i != a; ++i)
        delete [] m[i];
    delete [] m;

}


int main() {
    /*
    int ** m  = new int * [5];
    for (size_t i = 0; i != 5; i++){
        m[i] = new int[4];
    }
     */
    try {

    }

}
