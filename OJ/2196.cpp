#include<bits/stdc++.h>
#define ll long long
#define ld double
#define F(i, j, k) for(int i = j; i <= k; i++)
using namespace std;

bool IfPathConnection[21][21];
int NumberO_MinesInEachCellar[21], NumberO_Cellars, MaximumNumberO_MinesCanBeDug;
int OrderO_DiggingMines[21], now[21], RangeO_CurrentPath, RangeO_AnswerPath;
bool v[21];
void DepthFirstSearch(int x, int sum){
	F(i, x + 1, NumberO_Cellars)
		if(IfPathConnection[x][i]){
			RangeO_CurrentPath++;
			now[RangeO_CurrentPath] = i;
			DepthFirstSearch(i, sum + NumberO_MinesInEachCellar[i]);
			RangeO_CurrentPath--;
		}
	if(sum > MaximumNumberO_MinesCanBeDug){//jinru ANS
		MaximumNumberO_MinesCanBeDug = sum;
		F(i, 1, RangeO_CurrentPath)
			OrderO_DiggingMines[i] = now[i];
		RangeO_AnswerPath = RangeO_CurrentPath;
	}
}
int main()
{
	scanf("%d", &NumberO_Cellars);
	F(i, 1, NumberO_Cellars)
		scanf("%d", &NumberO_MinesInEachCellar[i]);
	F(i, 1, NumberO_Cellars)
		F(j, i + 1, NumberO_Cellars) 
			scanf("%d", &IfPathConnection[i][j]);
	F(i , 1, NumberO_Cellars){
		RangeO_CurrentPath++;
		now[RangeO_CurrentPath] = i;
		DepthFirstSearch(i, NumberO_MinesInEachCellar[i]);
		RangeO_CurrentPath--;
	}
	F(i, 1, RangeO_AnswerPath)
		printf("%d ", OrderO_DiggingMines[i]);
	printf("\n%d", MaximumNumberO_MinesCanBeDug);
	return 0;
}

