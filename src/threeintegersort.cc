#include "threeintegersort.h"
#include <iostream>

namespace edu{
    namespace vcccd{
        namespace vc{
            namespace csv13 {

                void sort(int &a, int &b, int &c) {

                    //int a, b, c;
                    /*  cout << "int 1: ";
                    cin >> a;
                    cout << "int 2: ";
                    cin >> b;
                    cout << "int 3: ";
                    cin >> c;
                */
                    // if (int smallest)

                    if (a > b) {
                        int temp;
                        a = temp;
                        a = b;
                        b = temp;
                    }
                    if (a > c) {
                        int temp;
                        a = temp;
                        a = c;
                        c = temp;
                    }
                    if (b > c) {
                        int temp;
                        b = temp;
                        b = c;
                        c = temp;
                    }


                }
            }}}}//end sort