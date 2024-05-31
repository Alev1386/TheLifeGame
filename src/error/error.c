#include "error.h"

const char* process_error(int exception) {
	switch (exception) {
	case -1:
		//����� 1 ������ �� ����� ���� ������ ������ 8 ����� ������ ��� ������� ���������� �����
		return "Error: lifeCondition > 8. An impossible condition for the origin of life";
	case -2:
		//����� 1 ������ �� ����� ���� ������ ������ 0 ����� ������ ��� ������� ���������� �����
		return "Error: lifeCondition < 0. An impossible condition for the origin of life";
	case -3:
		//������ ������� ������ ���� ������ ������� ��� ����������� ����� ������
		return "Error: bottomLifeVal > topLifeVal. The boundaries for the continuation of life are set incorrectly";
	case -4:
		//������������ ������ ������� ��� ����������� ����� (������� �������)
		return "Error: bottomLifeVal > 8. Incorrect lower bound for the continuation of life";
	case -5:
		//������������ ������ ������� ��� ����������� ����� (�� ����� ���� ������ 0)
		return "Error: bottomLifeVal < 0. Incorrect lower bound for the continuation of life";
	case -6:
		//������������ ������� ������� ��� ����������� ����� (������� �������)
		return "Error: topLifeVal > 8. Incorrect upper bound for the continuation of life ";
	case -7:
		//������������ ������� ������� ��� ����������� ����� (�� ����� ���� ������ 0)
		return "Error: topLifeVal < 0. Incorrect upper bound for the continuation of life";
	case -8:
		//����� �� ������� ���� (�������� ����������)
		return "Error: out of range field. Chosen coordinate is out of range";
	case -9:
		//� ����������� ������� �� �����
		return "Error: missing digit. Set the coordinates in numbers";
	case -10:
		//������ �������������� ����� ����
		return "Error: unknown menu item. Choose an item in range ";
	case -11:
		//������������ �������� �����
		return "Error: invalid file name. Choose correct file name";
	case -12:
		//���� �����������
		return "Error: file is not found. Choose an existing file";
	case -13:
		//���� ������
		return "Error: file is empty. Fill the file";
	case -14:
		//���� �� ��������
		return "Error: file is not saved. Try again ";
	default:
		//����� ����������� ��� ������
		return "Unknown error";

	}
}