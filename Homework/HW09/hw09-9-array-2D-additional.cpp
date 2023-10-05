#include <iostream>

int main() {
    int rows, cols;

    // รับขนาดของอาเรย์ 2 ชุด
    std::cout << "Array1 element : ";
    std::cin >> rows >> cols;

    // สร้างอาเรย์ 2 ชุด
    int array1[rows][cols];
    int array2[rows][cols];

    // รับค่าสมาชิกในอาเรย์ 1
    std::cout << "Input Array1:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> array1[i][j];
        }
    }

    // รับข้อมูล Element ของ Array2
    std::cout << "Array2 element : " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> array2[i][j];
        }
    }

    // สร้างอาเรย์ 3 เพื่อเก็บผลรวมของอาเรย์ 1 และ 2
    int array3[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // แสดงผลลัพธ์
    std::cout << "Array1 + Array2 = Array3" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
