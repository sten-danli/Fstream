//文本文件的读写方式永远的四部曲重点：
//1.第一步先定义文件对象。
//2.第二部亦相应的方式打开文件。
//3.第三步用相应的方式读取文件。
//4.第四步关闭文件流。
#include <iostream>
#include <fstream>
using namespace std;

//通过二进制方法把数据写入Test2.txt文件里面。
/*
int main()
{
	int ar[] = { 12,23,4,5,63,25,6,3,354 };					//1.第一步先定义文件对象。
	ofstream ofile("Test2.txt", ios::out , ios::binary);	//2.第二部亦相应的方式打开文件。
	if (!ofile)
	{
		cerr << "Open File Faild" << endl;
	}
	ofile.write((char*)ar, sizeof(ar));//参数1.找到起始位置，参数2.输出多少个字节。//3.第三步用相应的方式读取文件。
	ofile.close();											//4.第四步关闭文件流。
	return 0;
}
*/
//从二进制文件读取到屏幕方法。
int main()
{
	int ar[10];
	ifstream ifile("Test2.txt", ios::in | ios::binary);
	if (!ifile)
	{
		cerr << "Open File Faild" << endl;
		exit(1);
	}
	ifile.read((char*)ar, sizeof(ar));

	for (int i = 0; i < 10; i++)
	{
		cout << ar[i] << " " ;
	}
	ifile.close();
}
		
		
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

//将文档从Test1.txt的内容调出，显示到屏幕上。
/*
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
*/
