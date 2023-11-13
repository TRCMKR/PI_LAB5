#include <iostream>
#include "hanoi.h"


int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    int start_peg, destination_peg, buffer_peg, plate_quantity;
    cout << "������� ���������� ������:" << endl;
    cin >> plate_quantity;
    cout << "������� ����� ������� ��������:" << endl;
    cin >> start_peg;
    cout << "������� ����� ��������� ��������:" << endl;
    cin >> destination_peg;
    cout << "������� ����� �������������� ��������:" << endl;
    cin >> buffer_peg;
    cout << "������������������ ��������������, ����������� ��� ������� ������:" << endl;
    hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
    return 0;
}