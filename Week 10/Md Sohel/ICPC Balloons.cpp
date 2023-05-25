#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int solved = 0;
        int seven = 0;
        int temp = n;
        while (temp--) {
            int d;
            cin >> d;

            if (d < 8) {
                seven++;    //to truck the 1 to 7 problem solved;
            }



            if(seven > 7){
               continue;    // if we solved the target 7 problems, no need to solve the next prblems
                            // so the bellow code will no excuite if seven > 7
            }

             solved++;

             if(seven == 7){
                 seven++;     // the explaination is bellow(1.1)
             }

       }

        cout << solved << "\n";
    }

    return 0;
}

/*1.1)  After solving the seven problems, there will not come any problem that is less than 8. So, the value of the 'seven' variable will not be increased anymore. The value will remain at 7. For this, the condition (seven > 7) will not be true and the below code will be executed, and the value of the 'solved' variable will be increased. But we don't want to increase the value of the 'solved' variable after solving the (1 to 7) problems. For that, we increased the value of 'seven' when we solved the 7 problems so that the condition (seven > 7) comes true*/
