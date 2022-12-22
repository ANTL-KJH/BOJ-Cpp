/*
* Project Name : Problem-18108
* Program's purpose and basic function :
* - BAEKJOON Online Judge Problem-18108
* Program First Author : JH KIM
* Date of First Write : 2022.12.22
* ======================================================================================
* Source Code Modification History
* ======================================================================================
* Author				Date				Ver				Modification details
* JH KIM				2022.12.22			v1.0			First Write
*/
#include <iostream>
using namespace std;

int main(void)
{
	int king, queen, rook, knight, bishop, pawn, input_king, input_queen, input_rook, input_knight, input_bishop, input_pawn;
	king = 1;	queen = 1;	rook = 2;	bishop = 2;	knight = 2;	pawn = 8;							// init
	cin >> input_king >> input_queen >> input_rook >> input_bishop >> input_knight >> input_pawn;	// input
	
	// printout
	cout << king - input_king << " " << queen - input_queen << " " << rook - input_rook << " ";
	cout << bishop - input_bishop << " " << knight - input_knight << " " << pawn - input_pawn;
	return 0;
}