//һ���֣��ı��ļ��Ķ�д��ʽ�������֣����ļ��������д��


/*��һ����
�ļ���ȡ��Զ���Ĳ����ص㣺
1.��һ���ȶ����ļ�����
2.�ڶ�������Ӧ�ķ�ʽ���ļ���
3.����������Ӧ�ķ�ʽ��ȡ�ļ���
4.���Ĳ��ر��ļ�����
*/
#include <iostream>
#include <fstream>
using namespace std;

/*
//ͨ�������Ʒ���������д��Test2.txt�ļ����档
int main()
{
	int ar[] = { 12,23,4,5,63,25,6,3,354 };					//1.��һ���ȶ����ļ�����
	ofstream ofile("Test2.txt", ios::out , ios::binary);	//2.�ڶ�������Ӧ�ķ�ʽ���ļ���
	if (!ofile)
	{
		cerr << "Open File Faild" << endl;
	}
	ofile.write((char*)ar, sizeof(ar));//����1.�ҵ���ʼλ�ã�����2.������ٸ��ֽڡ�//3.����������Ӧ�ķ�ʽ��ȡ�ļ���
	ofile.close();											//4.���Ĳ��ر��ļ�����
	return 0;
}
*/

/*
//�Ӷ������ļ���ȡ��ar[10]�ں���ʾ����Ļ������
int main()
{
	int ar[10];
	ifstream ifile("Test2.txt", ios::in | ios::binary);
	if (!ifile)
	{
		cerr << "Open File Faild" << endl;
		exit(1);
	}

	ifile.read((char*)ar, sizeof(ar));	//��ȡ��ar[10]�ڡ�
	for (int i = 0; i < 10; i++)		//��ʾ����Ļ������
	{
		cout << ar[i] << " " ;
	 }
	ifile.close();
}
*/

/*
//�������������뵽Test1.txt
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

/*
//��Test1.txt�����ݵ�������ʾ����Ļ�ϡ�
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
*/

//�����֣���test2.txt�ļ��������д������

int main()
{
	int ar[10];
	ifstream ifile("test2.txt", ios::in | ios::binary);
	if (!ifile)
	{
		cerr << "Open File Faild" << endl;
		exit(1);
	}
	ifile.read((char*)ar, sizeof(ar));
	for (int i = 0; i <= 10; i++)
	{
		ifile >> ar[i];
	}

	int pos;
	int value;
	while (1)
	{
		cout << "Position Eingeben:>";
		cin >> pos;
		cout << ar[pos] << endl;
		//ifile.seekg(pos, ios::beg);//ָ���ʲô�ط���ʼ��beg����˼�Ǵ�begin��ʼ��
		//ifile >> value;

		//cout << "value = " << value << endl;
	}
}
