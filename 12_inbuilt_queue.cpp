#include <iostream>
using namespace std;

#include <queue>

int main() {
	//queue<int> q;
    queue<char> q;
	
	q.push(100);
	q.push(101);
	q.push(102);
	q.push(103);
	q.push(104);
	q.push(105);

	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	cout << q.size() << endl;
	cout << q.empty() << endl;

	while(!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	
	
	}

