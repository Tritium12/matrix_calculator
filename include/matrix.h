#ifndef MATRIX_H
#define MATRIX_H
typedef struct {
    double** data; // Указатель на двумерный массив данных
    int rows; // Количество строк в матрице
    int cols; // Количество столбцов в матрице
} Matrix;

// Создание и освобождение
Matrix create_matrix(int rows, int cols); // С выделением памяти
void free_matrix(Matrix m); // Без утечек памяти
// Базовые операции
Matrix matrix_add(Matrix a, Matrix b); // Сложение
Matrix matrix_multiply(Matrix a, Matrix b); // Умножение
// Вспомогательные
void print_matrix(Matrix m); // Вывод
Matrix matrix_from_array(double* data, int rows, int cols); // Инициализация из массив
Matrix matrix_submatrix(Matrix m, int start_row, int start_col, int rows, int cols);
#endif
