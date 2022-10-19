 #include <iostream>

    using namespace std;

    int a[100001], i, j, n, stor;
    int main()
    {
    	cin >> n;
    	stor = n;
    	for (i = 0; i<n; i++)
    	{
    		cin >> j;
    		a[j] = 1;
    		while (a[stor] != 0)
    			cout << stor-- << " ";
    		cout << "\n";
    	}
    }
