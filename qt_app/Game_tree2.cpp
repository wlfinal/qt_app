#include "Cboard.h"
void Cboard::GameTree_test() {
	int test_depth = 6,side=AIside^1;
	/*cout << MiniMax(test_depth, side)<<endl;
	cout << AlphaBeta(test_depth,side,-INF,INF) << endl;
	cout << FS_AlphaBeta(test_depth,side,-INF,INF) << endl;
	cout << NegaScout(test_depth,side,-INF,INF) << endl;
	cout << MTDf(test_depth,side,0) << endl;*/
	ll tp1, tp2,tcost;
	int val;
	for (test_depth = 4; test_depth <= 10; test_depth += 2) {
		printf("depth: %d\n", test_depth);


		/*dfs_counter = 0; tp1 = GetTickCount();
		val = MiniMax(test_depth,side);
		tcost = GetTickCount() - tp1;
		puts("MiniMax: ");
		printf("  nodes : %d     time : %d \n", dfs_counter, tcost);

		dfs_counter = 0; tp1 = GetTickCount();
		val = AlphaBeta(test_depth, side, -INF, INF);
		tcost = GetTickCount() - tp1;
		puts("AlphaBeta: ");
		printf("  nodes : %d     time : %d \n", dfs_counter, tcost);*/

		dfs_counter = 0; tp1 = GetTickCount();
		val = FS_AlphaBeta(test_depth, side, -INF, INF);
		tcost = GetTickCount() - tp1;
		puts("FS_AlphaBeta: ");
		printf("  nodes : %d     time : %d \n", dfs_counter, tcost);

		dfs_counter = 0; tp1 = GetTickCount();
		val = NegaScout(test_depth, side, -INF, INF);
		tcost = GetTickCount() - tp1;
		puts("NegaScout: ");
		printf("  nodes : %d     time : %d \n", dfs_counter, tcost);

		dfs_counter = 0; tp1 = GetTickCount();
		val = MTDf(test_depth, side,0,1000);
		tcost = GetTickCount() - tp1;
		puts("MTDf 1000: ");
		printf("  nodes : %d     time : %d \n", dfs_counter, tcost);

		dfs_counter = 0; tp1 = GetTickCount();
		val = MTDf(test_depth, side, 0, 10);
		tcost = GetTickCount() - tp1;
		puts("MTDf 10: ");
		printf("  nodes : %d     time : %d \n", dfs_counter, tcost);

		puts("");
		puts("*****************************************************************");

	}
}
int Cboard::MiniMax(int depth,int ide) {
	dfs_counter++;
	int res, val, can_num = search_width2;

	if (Wsum[1][AIside]) return INF;
	if (Wsum[1][AIside ^ 1]) return -INF;
	Get_tlist();

	if (depth == 0) return Evaluate();


	Cpos can_st[100], tmp;
	Get_cans(can_st, can_num, ide ^ 1);

	if (ide == AIside ^ 1) {
		res = -INF;
		for (int i = 1; i <= can_num; i++) {
			tmp = can_st[i];
			Put_piece(tmp.x, tmp.y);
			val = MiniMax(depth - 1, ide ^ 1);
			Revoke();
			if (val > res) res = val;
		}
	}
	else  {
		res = INF;
		for (int i = 1; i <= can_num; i++) {
			tmp = can_st[i];
			Put_piece(tmp.x, tmp.y);
			val = MiniMax(depth - 1, ide ^ 1);
			Revoke();
			if (val < res) res = val;
		}
	}
	return res;
}

int Cboard::NegaScout(int depth,int ide,int alpha,int beta) {
	dfs_counter++;
	int res, val, can_num = search_width2;

	if (Wsum[1][AIside]) return INF;
	if (Wsum[1][AIside ^ 1]) return -INF;
	Get_tlist();

	if (depth == 0) return Evaluate();


	Cpos can_st[100], tmp;
	Get_cans(can_st, can_num, ide ^ 1);

	for (int i = 1; i <= can_num; i++) {
		tmp = can_st[i];
		Put_piece(tmp.x, tmp.y);
		val = -NegaScout(depth-1,ide^1,-alpha-1,-alpha);
		Revoke();

		if (val > alpha) {
			if (val < beta) {
				Put_piece(tmp.x,tmp.y);
				val = -NegaScout(depth - 1, ide ^ 1, -beta, -val);
				Revoke();

				if (val > alpha) {
					if (val > beta) return val;
					else alpha = val;
				}
			}
			else return val;
		}
	}
	return alpha;
}

int Cboard::MTDf(int depth,int ide,int fval,int des) {
	int val, left = -INF, right = INF, beta;
	val = fval;
	while (left < right) {
		if (left == val) beta = val + des;
		else beta = val;

		val = FS_AlphaBeta(depth,ide,beta-des,beta);

		if (val < beta) right = val;
		else left = val;
	}
	return val;
}