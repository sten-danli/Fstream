//�ı��ļ��Ķ�д��ʽ
#include <iostream>
#include <fstream>
using namespace std;

//���������ļ�д��Test2.txt


/*
//���������뵽Test1.txt
int main()
{
	int ar[] = { 12,23,4,5,63,25,6,3,354 };

	ofstream ofile("Test1.txt", ios::out);
	if (!ofile)
	{
		cerr << "Open File Faild" << endl;
	}

	for (int i = 0; i < sizeof(ar) / sizeof(int); i++)
	{
		ofile << ar[i] << " ";
	}
	ofile.close();
	return 0;
}
*/

//���ĵ���Test1.txt�����ݵ�������ʾ����Ļ�ϡ�
int main()
{
	int ar[10];
	ifstream ifile("Test1.txt", ios::in);
	if (!ifile)
	{
		cerr << "File Open Faild!" << endl;
		exit(1);
	}

	for (int i = 0; i <= 10; i++)
	{
		ifile >> ar[i];
	}
	//��ӡ���ĵ����ݵ���Ļ�ϡ�
	for (int i = 0; i <= 10; i++)
	{
		cout << ar[i] << " ";
	}
	ifile.close();
}
