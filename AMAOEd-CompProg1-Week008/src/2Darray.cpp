#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int row = 5;
    int cols = 7;
    int seat;
    int myarray[row][cols] = {
                             {1,2,3,4,5,6,7},
                             {8,9,10,11,12,13,14},
                             {15,16,17,18,19,20,21},
                             {22,23,24,25,26,27,28},
                             {29,30,31,32,33,34,35}
                             };
    for (int i = 0; i < row; i++){
        for (int x = 0; x < cols; x++){
            cout << setw(7) << myarray[i][x];
        }
        cout << endl;
    }
    cout << endl;


    do{
        cout << "Enter seat number to reserve: ";
        cin >> seat;

        if (seat == 1){
            myarray[0][0] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 2){
            myarray[0][1] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 3){
            myarray[0][2] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 4){
            myarray[0][3] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 5){
            myarray[0][4] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 6){
            myarray[0][5] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 7){
            myarray[0][6] = 0;
            cout << "Seat successfully reserve";
            cout << endl;



        }else if (seat == 8){
            myarray[1][0] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 9){
            myarray[1][1] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 10){
            myarray[1][2] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 11){
            myarray[1][3] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 12){
            myarray[1][4] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 13){
            myarray[1][5] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 14){
            myarray[1][6] = 0;
            cout << "Seat successfully reserve";
            cout << endl;




        }else if (seat == 15){
            myarray[2][0] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 16){
            myarray[2][1] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 17){
            myarray[2][2] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 18){
            myarray[2][3] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 19){
            myarray[2][4] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 20){
            myarray[2][5] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 21){
            myarray[2][6] = 0;
            cout << "Seat successfully reserve";
            cout << endl;





        }else if (seat == 22){
            myarray[3][0] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 23){
            myarray[3][1] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 24){
            myarray[3][2] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 25){
            myarray[3][3] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 26){
            myarray[3][4] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 27){
            myarray[3][5] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 28){
            myarray[3][6] = 0;
            cout << "Seat successfully reserve";
            cout << endl;





        }else if (seat == 29){
            myarray[4][0] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 30){
            myarray[4][1] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 31){
            myarray[4][2] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 32){
            myarray[4][3] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 33){
            myarray[4][4] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 34){
            myarray[4][5] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        }else if (seat == 35){
            myarray[4][6] = 0;
            cout << "Seat successfully reserve";
            cout << endl;
        
        }else{
            cout << "Invalid seat number";
            cout << endl;
            continue;
        }

        cout << endl;
        for (int i = 0; i < row; i++){
            for (int x = 0; x < cols; x++){
                cout << setw(7) << myarray[i][x];
            }
            cout << endl;
        }
        cout << endl;


// to validate, if the seat nnumber is available.

    cout << "Enter seat number to reserve: ";
    cin >> seat;

    if (seat == 1){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 2){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 3){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 4){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 5){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 6){
        cout << "Seat is taken";
        cout << endl;



    }else if (seat == 7){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 8){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 9){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 10){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 11){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 12){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 13){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 14){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 51){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 16){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 17){
        cout << "Seat is taken";
        cout << endl;




    }else if (seat == 18){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 19){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 20){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 21){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 22){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 23){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 24){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 25){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 26){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 27){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 28){
        cout << "Seat is taken";
        cout << endl;



    }else if (seat == 29){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 30){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 31){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 32){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 33){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 34){
        cout << "Seat is taken";
        cout << endl;
    }else if (seat == 35){
        cout << "Seat is taken";
        cout << endl;
    }else{
        cout << "Invalid seat number";
    }
    cout << endl;
    for (int i = 0; i < row; i++){
        for (int x = 0; x < cols; x++){
            cout << setw(7) << myarray[i][x];
        }
        cout << endl;
    }
    cout << endl;
    }while(seat > 0);
    system("PAUSE");
    return EXIT_SUCCESS;
}