#pragma once
#include <iostream>

template<class T>
class Table {
	public: 
		Table(int rows, int cols) : _rows(rows), _cols(cols) {
			_arr = new T*[_rows]{};

			for (int i{}; i < _rows; ++i) {
				_arr[i] = new T[_cols]{};
			}
		};
		Table(const Table& other) {
			this->_rows = other._rows;
			this->_cols - other._cols;
			_arr = new T*[other._rows] {};

			for (int i {}; i < other._rows; ++i) {
				_arr = new T[other._cols] {};
			}

			for (int i {}; i < other._rows; ++i) {
				for (int j{}; j < other._cols; ++j) {
					_arr[i][j] = other._arr[i][j];
				}
			}
		}

		Table& operator=(const Table&) = delete; // оператор присваивания, запрещен

		~Table() {
			for (int i {}; i < _rows; ++i) {
				delete[] _arr[i];
			}
			delete[] _arr;
			std::cout << "Memory is clear";
		}

		T* operator[] (int index)
		{
			if (index >= _rows || index < 0)
			{
				throw std::out_of_range("array index is out of range");
			}
			return _arr[index];
		}

		T* operator[] (int index) const
		{
			if (index >= _rows || index < 0) throw std::out_of_range("array index is out of range");
			return _arr[index];
		}

		void get_size() const
		{
			std::cout << "This array is " << _rows << " rows and " << _cols << " cols\n";
		}

	private:
		int _rows;
		int _cols;
		T** _arr;
};