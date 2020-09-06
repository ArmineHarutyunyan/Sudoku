class Sudoku
{

public:
	static const int n = 9;
	int	 board[n][n];

	void enterDigits();
	void print();
	bool solve();
private:
	void setPossibleValues(const int& digit);
	void searchPossibleValues();
	bool isPresentInBox(int startRow, int startCol, int digit);
	bool isPresentInCol(int col, int digit);
	bool isPresentInRow(int row, int digit);
	bool isValidPlace(int row,  int col,  int digit);
	bool checkEmptyPlace(int &row, int &col);

};
