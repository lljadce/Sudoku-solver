# Sudoku-solver
Initialize the .txt file with a 9x9 grid to solve for

CHANGELOG:

25/03/2018:
  - Completely changed the main.cpp
    - Reworked grid class by adding:
      - int readFile(int *board);
        - Which reads from sudoku.txt and stores the grid into an int array

      - bool checkTile(int number);
        - Checks if the available tile is free

      - bool checkRow(int *board, int comparison, int y);
        - Traverses and checks if the available ROW is occupying the 

      - bool checkCol(int *board, int comparison, int x);
        - Traverses and checks if the available COL has a to the comparison
