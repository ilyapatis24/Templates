#include "Table.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");

	const int ROWS = 5; 
	const int COLS = 5;

	Table<int> table{ ROWS, COLS };
	table.get_size();
	try
	{
		for (int i = 0; i < ROWS; ++i)
		{
			for (int j = 0; j < COLS; ++j)
			{
				table[i][j] = (i + 1) * (j + 1);
				std::cout << table[i][j] << "\t";
			}
			std::cout << std::endl;
		}
	}
	catch (std::out_of_range& err)
	{
		std::cout << "Error! " << err.what() << std::endl;
	}
	return 0;
}