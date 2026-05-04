#pragma once
#include <iostream>

template<typename T = int, size_t rows = 2, size_t cols = 2>
class Matrix
{
public:
	Matrix(const T& value = T());
	Matrix() = default;
	void print() const;

	template<typename T = int, size_t rows, size_t cols>
	friend std::ostream& operator<<(std::ostream& out, const Matrix<T, rows, cols>& m);
	Matrix<T, rows, cols> operator+(const T& value) const; // this + 2
	T& operator()(size_t r, size_t c);
private:
	T matrix[rows][cols]{};
};

template<typename T, size_t rows, size_t cols>
inline Matrix<T, rows, cols>::Matrix(const T& value)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			matrix[i][j] = value;
		}
	}
}

template<typename T, size_t rows, size_t cols>
inline void Matrix<T, rows, cols>::print() const
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << "\n";
	}
}

template<typename T, size_t rows, size_t cols>
inline Matrix<T, rows, cols> Matrix<T, rows, cols>::operator+(const T& value) const
{
	Matrix<T, rows, cols> result(*this); // copy ctor
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			result.matrix[i][j] += value;
		}
	}
	return result;
}

template<typename T, size_t rows, size_t cols>
inline T& Matrix<T, rows, cols>::operator()(size_t r, size_t c)
{
	static T error;
	if (r >= rows or c >= cols)
		return error;
	return matrix[r][c];
}

template<typename T, size_t rows, size_t cols>
inline std::ostream& operator<<(std::ostream& out, const Matrix<T, rows, cols>& m)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			out << m.matrix[i][j] << (j < cols - 1 ? "," : "\n");
		}
	}
	return out;
}
