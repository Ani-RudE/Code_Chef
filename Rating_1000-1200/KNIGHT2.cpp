#include <iostream>
using namespace std;

struct cell {
	int x, y;
	int dis;
	cell() {}
	cell(int x, int y, int dis)
		: x(x)
		, y(y)
		, dis(dis)
	{
	}
};

bool isInside(int x, int y, int N)
{
	if (x >= 1 && x <= N && y >= 1 && y <= N)
		return true;
	return false;
}

int minStepToReachTarget(int knightPos[], int targetPos[],
						int N)
{
	int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
	int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

	queue<cell> q;

	q.push(cell(knightPos[0], knightPos[1], 0));

	cell t;
	int x, y;
	bool visit[N + 1][N + 1];

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			visit[i][j] = false;

	visit[knightPos[0]][knightPos[1]] = true;

	while (!q.empty()) {
		t = q.front();
		q.pop();

		if (t.x == targetPos[0] && t.y == targetPos[1])
			return t.dis;

		for (int i = 0; i < 8; i++) {
			x = t.x + dx[i];
			y = t.y + dy[i];

			if (isInside(x, y, N) && !visit[x][y]) {
				visit[x][y] = true;
				q.push(cell(x, y, t.dis + 1));
			}
		}
	}
}

int main()
{
	int N=8;
	
	int T;
	cin>>T;
	
	while (T--)
	{   
	    int knightPos[2], targetPos[2];
	    
	    for (int i=0; i<2; i++)
	    {
	        cin>>knightPos[i];
	    }
	    
	    for (int i=0; i<2; i++)
	    {
	        cin>>targetPos[i];
	    }
	    
	    int ans=minStepToReachTarget(knightPos, targetPos, N);
	    
	    if (ans%2==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}