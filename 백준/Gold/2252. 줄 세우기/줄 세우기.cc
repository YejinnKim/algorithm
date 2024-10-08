#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n >> m;

	vector< vector<int> > v(n + 1);
	vector<int> indegree(n + 1, 0);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		indegree[b]++;
	}

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int front = q.front();
		q.pop();
		cout << front << " ";
		for (int i : v[front]) {
			indegree[i]--;
			if (indegree[i] == 0)
				q.push(i);
		}
	}
	cout << "\n";

	return 0;
}
