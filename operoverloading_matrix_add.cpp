#include <iostream>

class Matrix {
public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    int** data;
    int rows;
    int cols;
};

int main() {
    Matrix m1(2, 2);
    Matrix m2(2, 2);

    // Populate matrices with values

    Matrix result = m1 + m2; // Operator Overloading

    std::cout << "Matrix Addition Result:" << std::endl;
    result.display();

    return 0;
}
