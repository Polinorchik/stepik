#include <cstddef>
#include <iostream>
#include <ranges>

// ��������� ������� copy_n ���� � ���������
// �������:
//   1. ������� ������
//   2. ������ ��������
//   3. ���������� ���������, ������� �����
//      �����������
//
// ��� ����� ����������� ������ ������� copy_n,
// ����� �� ����� ���� ������� ���, ��� ��������
// � �������.

// put your code here

template <typename U, typename T>


void copy_n(U* from, T* to, size_t n) {

    for (size_t i = 0; i < n; i++) {

        from[i] = static_cast<U>(to[i]);
    }
}

int main() {

    int ints[] = { 1, 2, 3, 4 };
    double doubles[4] = {};
    copy_n(doubles, ints, 4); // ������ � ������� doubles ���������� �������� 1.0, 2.0, 3.0 � 4.0

 	return 0;
}