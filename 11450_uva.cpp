#include <bits/stdc++.h>
using namespace std;

int memo[200][20];
int gList[20][20];
int ng[20];
int M, G;

int shop(int money, int curG) {
	if (money < 0) return -1;
	if (curG == G) return M - money;
	if (memo[money][curG] != -1) return memo[money][curG];

	int aux = -1;
	for (int i = 0; i < ng[curG]; i++) {
		aux = max(aux, shop(money - gList[curG][i], curG + 1));
	}

	return memo[money][curG] = aux;
}

int main() {
	int cases; cin>>cases;
	while(cases--) {
		cin>>M>>G;

		for (int i = 0; i < G; i++) {
			cin>>ng[i];
			for (int j = 0; j < ng[i]; j++) {
				cin>>gList[i][j];
			}
		}
		memset(memo, -1, 200 * 20 * 4);
		int res = shop(M, 0);

		if (res > 0)
			printf("%d\n", res);
		else
			printf("no solution\n");
	}

	return 0;
}
