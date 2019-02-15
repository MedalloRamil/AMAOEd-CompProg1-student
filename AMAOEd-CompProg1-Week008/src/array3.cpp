#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	int row = 5;
    int column = 7;
	int seat;
	int seatingChart[row][column] = {
							{1,2,3,4,5,6,7}, 
							{8, 9, 10,11,12,13,14},
							{15,16,17,18,19,20,21}, 
							{22,23,24,25,26,27,28}, 
							{29,30,31,32,33,34,35},
						};

	for (int i = 0; i < row; i++){
		for (int x = 0; x < column; x++){
			cout << setw(7) << seatingChart[i][x];
		}
		cout << endl;
	}
	cout << endl;


	do{
		cout << "Enter seat number to reserve: ";
		cin >> seat;

		
		if (seat == 1){
			seatingChart[0][0] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 2){
			seatingChart[0][1] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 3){
			seatingChart[0][2] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 4){
			seatingChart[0][3] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 5){
			seatingChart[0][4] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 6){
			seatingChart[0][5] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 7){
			seatingChart[0][6] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;						
		


		}else if (seat == 8){
			seatingChart[1][0] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 9){
			seatingChart[1][1] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 10){
			seatingChart[1][2] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 11){
			seatingChart[1][3] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 12){
			seatingChart[1][4] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 13){
			seatingChart[1][5] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 14){
			seatingChart[1][6] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;


		}else if (seat == 15){
			seatingChart[2][0] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 16){
			seatingChart[2][1] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 17){
			seatingChart[2][2] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 18){
			seatingChart[2][3] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 19){
			seatingChart[2][4] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 20){
			seatingChart[2][5] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 21){
			seatingChart[2][6] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;


		}else if (seat == 22){
			seatingChart[3][0] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 23){
			seatingChart[3][1] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 24){
			seatingChart[3][2] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 25){
			seatingChart[3][3] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 26){
			seatingChart[3][4] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 27){
			seatingChart[3][5] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 28){
			seatingChart[3][6] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;


		}else if (seat == 29){
			seatingChart[4][0] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 30){
			seatingChart[4][1] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 31){
			seatingChart[4][2] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 32){
			seatingChart[4][3] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 33){
			seatingChart[4][4] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;
		}else if (seat == 34){
			seatingChart[4][5] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;	
		}else if (seat == 35){
			seatingChart[4][6] = 0;
			cout << "Seat successfully reserved.";
			cout << endl;															
		}else{
			cout << "Invalid number";
			cout << endl;
			continue;
		}
		
		for (int row = 0; row < 5; row++){
			for (int column = 0; column < 7; column++){
				cout << setw(7) << seatingChart[row][column] << " ";

			}
			cout << endl;
		}
		cout << endl << "\n";
		



// to validate if the seat is available
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
		}else if (seat == 15){
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
			cout << "Invalid number";
			cout << endl;
			
		}
		continue;
		cout << endl;
		for (int row = 0; row < 5; row++){
			for (int column = 0; column < 7; column++){
				cout << setw(7) << seatingChart[row][column] << " ";

			}
			cout << endl;
		}
		cout << endl << "\n";
		
		
	
	}while(seat > 0);

	system("pause");
	return 0;
}
