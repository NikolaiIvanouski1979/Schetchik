# include <iostream>
using namespace std;

class Counter
{
protected:
	unsigned int count;
public:
	Counter():count(0)
	{}
	Counter(int n): count(n)
	{}
	unsigned int get_count() const
	{
		return count;
	}
	Counter operator++()
	{
		return Counter(++count);
	}
	
};

class CountDn : public Counter
{
public:
	Counter operator--()
	{
		return Counter(--count);
	}
};

int main()
{
	CountDn c1;
	cout << "c1 = " << c1.get_count() << endl;
	++c1;
	++c1;
	++c1;
	cout << "c1 = " << c1.get_count() << endl;
	--c1;
	--c1;
	cout << "c1 = " << c1.get_count() << endl;

	system("pause");
	return 0;
}