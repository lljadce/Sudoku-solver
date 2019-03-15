#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <string> 
#include <list>

#define ROW 9
#define COL 9

// THIS READS ONLY POSITIVE NUMBERS
// CREATE NOTEPAD FILE
// E.G. . . . . . . . .
/* ...|...|.7.
 * ...|.5.|8.1
 * ..6|41.|.35

 * 6.7|...|52.
 * ...|2.9|...
 * .41|...|6.9

 * 97.|.21|4..
 * 1.5|.3.|...
 * .8.|...|...
 */
 
typedef unsigned short int uint16;

class grid
{
	public:
		grid();
		~grid();
		void readFile(uint16 board[ROW][COL]);
		void sortBoard(uint16 board[ROW][COL]);
		void printBoard(uint16 board[ROW][COL]);
		
		int generateNumber();
};

grid::grid(){}

grid::~grid(){}

void grid::readFile(uint16 board[ROW][COL])
{
	std::string readLine;
	std::ifstream inFile("sudoku.txt");
	if(inFile.is_open())
	{
		int tempIndex = 0;
		while(std::getline(inFile, readLine))
		{
			std::cout << readLine << std::endl;
		}
	}
	
}

void grid::sortBoard(uint16 board[ROW][COL])
{
	int tempX = 0;
	int tempY = 0;
	for(int x = tempX; x < ROW; x++)
	{
		if(x == ROW - 1)
		{
			for(int y = tempY; y < COL; y++)
			{
				// ALGORITHM CHECK
				if(board[x][y] == 0)
				{
					board[x][y] = generateNumber();
				}
			}
		}
	}
}

void grid::printBoard(uint16 board[ROW][COL])
{
	for(int x = 0; x < ROW; x++)
	{
		for(int y = 0; y < COL; y++)
		{
			std::cout << board[x][y] << " "; 
		}
		std::cout << std::endl; 
	}
}

int grid::generateNumber(uint16 board[ROW][COL])
{
	// Generates a random number between 1 - 9
	int tempArray[ROW] = {0};
	uint16 v = (std::rand() % 9) + 1;
	for(int index = 0; index < ROW; index++)
	{
		tempArray[index] = v;
	}
		
	return v;
}

int main()
{
	grid sudokuTiles;
	uint16 board[ROW][COL] = {0};
	sudokuTiles.sortBoard(board);
	sudokuTiles.printBoard(board);
	return 0;
}