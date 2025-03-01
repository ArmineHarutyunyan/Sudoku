#include <iostream>

class Sudoku
{

public:
	static const int n = 9;
	int board[n][n];

	void enterDigits();
	void print() const;
	bool solve();
	bool isPresentInRow(const int& row, const int& digit) const;
	bool isPresentInCol(const int& col, const int& digit) const;
private:
	void setPossibleValues(const int& digit);
	void searchPossibleValues();		
	bool isValidPlace(const int& row, const int& col, const int& digit) const;
	bool checkEmptyPlace(int &row, int &col);
	bool isPresentInBox(const int& startRow,const int& startCol, const int& digit) const;
};
