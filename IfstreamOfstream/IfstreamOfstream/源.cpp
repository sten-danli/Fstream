//文本文件的读写方式
#include <iostream>
#include <fstream>
using namespace std;

//将二进制文件写入Test2.txt


/*
//将内容输入到Test1.txt
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

//将文档内Test1.txt的内容调出，显示到屏幕上。
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
	//打印出文档内容到屏幕上。
	for (int i = 0; i <= 10; i++)
	{
		cout << ar[i] << " ";
	}
	ifile.close();
}
