////**************************************************************************************************************************
////				最优分解问题
////**************************************************************************************************************************
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n;
//vector<int> ans;
//int main()
//{
//
//	cin >> n;
//	if (n == 0 || n == 1)
//	{
//		cout << n;
//		return 0;
//	}
//	if (2 <= n && n <= 5)
//	{
//		cout << n - 1;
//		return 0;
//	}
//
//	int cur = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		if (cur + i > n) break;
//		else {
//			cur += i;
//			ans.push_back(i);
//		}
//	}
//
//	vector<int>::iterator  iter = ans.end();
//	while (cur != 10)
//	{
//		(*--iter)++;
//		cur++;
//	}
//
//	for (iter = ans.begin();  iter != ans.end(); iter++)
//	{
//		cout << (*iter) << " ";
//	}
//	return 0;
//}

////**************************************************************************************************************************
////******			回溯   装载问题		*******************************************
////**************************************************************************************************************************
////**************************************************************************************************************************
//#include<iostream>
//#include<vector>
//using namespace std;

// C 递归回溯0
//const int N = 30;
//int n, c1, c2;
//int w[N];
//int Ans[N], bestAns[N];
//
//int x, bestx;	
//int c, cw, bestw, r;
//
//void backtrack(int i);
//
//int main()
//{
//	cin >> n >> c1 >> c2;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> w[i];
//		r += w[i];
//	}
//	
//	c = c1;
//	
//	backtrack(1);
//
//	cout << bestw << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << bestAns[i] << " ";
//	}
//	return 0;
//}
//
//void backtrack(int i)
//{
//	if (i > n)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			bestAns[j] = Ans[j];
//		}
//		bestw = cw;
//		return;
//	}
//	r -= w[i];
//	if (cw + w[i] <= c)
//	{
//		Ans[i] = 1;
//		cw += w[i];
//		backtrack(i + 1);
//		cw -= w[i];
//	}
//	if (r + cw > bestw)
//	{
//		Ans[i] = 0;
//		backtrack(i + 1);
//	}
//	r += w[i];
//}

//C++ 递归回溯
//template <class Type>
//class Loading
//{
//    template <class T>                                        //类模板中友元函数，加上，T防止重名
//    friend T MaxLoading(T*, T, int, int*);
//private:
//    void Backtrack(int t);
//    int n,                                                   //集装箱数
//        * x,                                                  //当前解
//        * bestx;                                              //当前最优解
//    Type* w,                                                 //集装箱数组，存放了每个集装箱重量
//        c,                                                  //第一艘轮船的载重量
//        cw,                                                 //当前载重量
//        bestw,                                              //当前最优载重量
//        r;                                                  //剩余集装箱重量
//};
////核心函数 对解空间树回溯搜索，求得最优值
//template <class Type>
//void Loading<Type>::Backtrack(int t)
//{
//    int j;
//    //搜索第t层结点
//    if (t > n)                                                //到达叶节点，此时x[1,n]是一个满足约束条件的可行解
//    {
//        for (j = 1; j <= n; j++)
//            bestx[j] = x[j];
//        bestw = cw;
//        return;
//    }
//    r -= w[t];
//    //搜索子树，此时，t<=n时 当前扩展结点是子集树中的内部结点
//    //该结点有x[i]=1和x[i]=0两个儿子结点
//    if (cw + w[t] <= c)  //搜索左子树x[i]=1
//    {
//        x[t] = 1;
//        cw += w[t];
//        Backtrack(t + 1);
//        cw -= w[t];
//    }
//
//    if (cw + r > bestw)
//    {
//        x[t] = 0;
//        Backtrack(t + 1);    //搜索右子树x[i]=0
//    }
//
//    r += w[t];
//}
////负责对类的私有变量初始化，调用递归函数Backtrack(1)实现回溯搜索并返回最优值
//template <class Type>
//Type MaxLoading(Type* w, Type c, int n, int* bestx)
//{
//    int i;
//    Loading<Type> X;
//    //初始化X
//    X.x = new int[n + 1];
//    X.bestx = bestx;
//    X.w = w;
//    X.c = c;
//    X.n = n;
//    X.cw = 0;
//    X.bestw = 0;
//    //初始化r
//    X.r = 0;
//    for (i = 1; i <= n; i++)
//        X.r += w[i];
//    //计算最优载重量
//    X.Backtrack(1);
//    delete[]X.x;
//    //返回最优载重量
//    return X.bestw;
//}
//const int N = 30;
//
//int main()
//{
//    int bestx[4] = {0,0,0};
//    int n = 3;
//    int w[4] = {0,3,7,5};
//    int c = 8;
//    MaxLoading(w, c, n, bestx);
//
//    for (auto i : bestx)
//    {
//        cout << i;
//    }
//    return 0;
//}


////**************************************************************************************************************************
////********** 
////**************************************************************************************************************************





/*
5 20
5 3
7 4
8 2
6 1
3 8

15
*/

//const int N = 30;
//int n, c;
//int w[N], v[N];
//
//int ans[N], best_ans[N];
//int wn, vn, vl;		//n now  l left
//int cb, vb;			//b best
//
//void trackback(int i);
//
//int main()
//{
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> w[i] >> v[i];
//		vl += v[i];
//	}
//			
//	trackback(1);
//
//	for (int i = 1;i <= n; i++)
//	{
//		cout << ans[i] << " ";
//	}
//
//	cout << endl << vb << endl;
//	return 0;
//}
//
//void trackback(int i)
//{
//	if (i > n)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			best_ans[j] = ans[j];
//		}
//		vb = vn;
//		return;
//	}
//	if (wn + w[i] <= c)
//	{		//则选择w[i]，进左子树
//		ans[i] = 1;
//		wn += w[i];
//		vn += v[i];
//		vl -= v[i];
//		trackback(i + 1);
//		wn -= w[i];
//		vn -= v[i];
//		vl += v[i];
//	}
//	else if (vn + vl >= vb)
//	{		//则不选择w[i], 进右子树
//		vl -= v[i];
//		trackback(i +  1);
//		vl += v[i];
//	}
//}

////**************************************************************************************************************************
////***********罗密欧与朱丽叶问题 回溯
////**************************************************************************************************************************


//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
//#define MAX_N 20
//class vec {
//public:
//	vec(int _x, int _y) :x(_x), y(_y) {};
//	int x;
//	int y;
//	vec operator+(const vec& t)
//	{
//		return vec(this->x + t.x, this->y + t.y);
//	}
//	bool operator==(const vec& t)
//	{
//		return this->x == t.x && this->y == t.y;
//	}
//};
//vec delta[8] = { {1,0},{0,1},{-1,0},{0,-1},		/*下 右 上 左*/
//				{1,1},{1,-1},{-1,1},{-1,-1} };	/*右下 左下 右上 左上*/
//map<int, string> to_direction = { {0,"下"}, {1,"右"},{2,"上"},{3,"左"},
//							{4,"右下"},{5,"左下"},{6,"右上"},{7,"左上"} };
//
//int m, n, num;	//m行n列 num个封闭房间
//vec Begin = { 0,0 }, End = { 0,0 };	//起始点，结束点
//int turns_n, turns_b = 0x7fffffff;
//
//vector<int> route_n;
//vector<int> route_b;
//int Map_n[MAX_N + 2][MAX_N + 2]; //当前map
//int Map_b[MAX_N + 2][MAX_N + 2]; //最佳map
//
//
//void traceback(int t, vec pos, int di, bool& flag); //从第t个位置开始走
//bool check(vec next);		//检查next位置是否可走
//
//int main()
//{
//	cin >> m >> n >> num;
//	for (int i = 0; i <= n + 1; i++)	//初始化边缘区域
//	{
//		Map_n[0][i] = -1;
//		Map_n[m + 1][i] = -1;
//	}
//	for (int i = 0; i <= m + 1; i++)
//	{
//		Map_n[i][0] = -1;
//		Map_n[i][n + 1] = -1;
//	}
//	for (int i = 0; i < num; i++)
//	{
//		int xt, yt;
//		cin >> xt >> yt;
//		Map_n[xt][yt] = -1;
//	}
//	cin >> Begin.x >> Begin.y >> End.x >> End.y;
//
//	
//	bool flag = 0;
//	Map_n[Begin.x][Begin.y] = 1;
//	traceback(1, Begin, 0, flag);
//	
//	if (flag == 0) cout << "无解" << endl;
//	else
//	{
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				printf("%3d", Map_b[i][j]);
//			}
//			cout << endl;
//		}
//	}
//
//	for (auto i : route_b)
//	{
//		cout << to_direction[i] << " ";
//	}
//
//	return 0;
//}
//bool check(vec next)
//{
//	return Map_n[next.x][next.y] == 0;
//}
//void  traceback(int t, vec pos, int di, bool& flag)
//{
//	if (t == m * n - num  && pos == End && turns_n < turns_b)	//如果 走到终点，并且转向数小于当前最佳转向数
//	{
//		
//		turns_b = turns_n;	
//		route_b = route_n;
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				Map_b[i][j] = Map_n[i][j];	
//			}
//		}
//		flag = true;
//		return ;
//	}
//	else{
//		for (int i = 0; i < 8; i++) 
//		{
//			vec nextpos(pos.x + delta[i].x, pos.y + delta[i].y);
//			
//			if (check(nextpos)) //如果下一位置能走，则走到下一位置
//			{
//				Map_n[nextpos.x][nextpos.y] = t + 1 ;
//				route_n.push_back(i);
//				if (t > 1 && di != i)
//					turns_n++;
//
//				if (turns_n <= turns_b)		//如果还可能走出最优解，则从下一位置继续走
//					traceback(t + 1, nextpos, i ,flag);
//				
//				Map_n[nextpos.x][nextpos.y] = 0;	//回溯
//				route_n.pop_back();
//				if (t > 1 && di != i)
//					turns_n--;
//			}
//		}
//	}
//}



////**************************************************************************************************************************
////***********子集和问题		回溯
////**************************************************************************************************************************
#include<iostream>

using namespace std;

#define MAX 30

int n, c;

int sum, left;
int arr[MAX];
bool ans_n[MAX], ans_b[MAX];

void traceback(int t, bool& flag)
{
	if (flag == 1) return;

	if (sum == c)
	{
		flag = 1;
		for(int i = 0; i < n; i++)
			ans_b[i] = ans_n[i];
		return;
	}
	if (sum + arr[t] <= c)
	{
		ans_n[t] = 1;
		sum += arr[t];
		traceback(t + 1, flag);
		ans_n[t] = 0;
		sum -= arr[t];
	}
}

int main()
{
	cin >> n >> c;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bool flag = 0;
	traceback(0, flag);

	if (flag)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%3d", arr[i]);
			cout << " " << ans_b[i] << " " << endl;
		}
	}
	else
		cout << "No way!" << endl;

	return 0;
}








