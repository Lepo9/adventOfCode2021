//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//    ifstream in("input.txt");
////    int values[2010];
////    int n = 1;
//    if (!in)
//        return -1;
//    int a,b, c = 0;
//    in >> a;
//    while (in >> b) {
//        if (a < b)
//            c++;
//        a = b;
//    }
//    cout << c << endl;
//
//
//
//
//    return 0;
//}


#include <iostream>
#include <fstream>

using namespace std;

long int v[1000000];

int main() {
    ifstream in("input.txt");
//    int values[2010];
//    int n = 1;
    if (!in)
        return -1;
    int n, c = 2;
    in >> n;
    v[0] = n;
    in >> n;
    v[0] += n;
    v[1] = n;
    while (in >> n) {
        v[c] = n;
        v[c-1] += n;
        v[c-2] += n;
        c++;
    }
    int count=0;
    for (int i=1; i<c; i++) {
        if (v[i] > v[i-1])
            count++;

        //cout << v[i-1] << endl;
    }
    cout << count << endl;

    return 0;
}