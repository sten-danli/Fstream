#include <iostream>
#include<fstream>
using namespace std;
class Complex;
	ostream& operator<<(ostream &out,Complex &c);
class Complex
{
	friend ostream& operator<<(ostream& out, Complex& c);
public:
	Complex() :m_real(0),m_imag(0)
	{
		ifstream ifile("Data.dat", ios::in);
		if (!ifile)
		{
			cerr << "File Open Faild" << endl;
			exit(1);
		}
		ifile >> m_real >> m_imag;
		ifile.close();
	}
	Complex(int real, int imag): m_real(real),m_imag(imag)
	{
	
	}
public:
	void SetCopmlex(int real, int image)
	{
		m_real = real;
		m_imag = image;
	}
public:
	~Complex()
	{
		ofstream ofile("Data.dat", ios::out);
		if (!ofile)
		{
			cerr << "File Open Faild" << endl;
			exit(1);
		}
		ofile << m_real<<" "<< m_imag;
		ofile.close();
	}
private:
	int m_real;
	int m_imag;
};
ostream& operator<<(ostream& out, Complex& c)
{
	return out << "(" << c.m_real << "," << c.m_imag << ")" << endl;

}
int main()
{
	Complex c;
	cout << c << endl;
	c.SetCopmlex(100, 200);
	cout << c;
	
}