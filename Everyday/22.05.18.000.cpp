////**************************************************************************************************************************
////				���ŷֽ�����
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
////******			����   װ������		*******************************************
////**************************************************************************************************************************
////**************************************************************************************************************************
//#include<iostream>
//#include<vector>
//using namespace std;

// C �ݹ����0
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

//C++ �ݹ����
//template <class Type>
//class Loading
//{
//    template <class T>                                        //��ģ������Ԫ���������ϣ�T��ֹ����
//    friend T MaxLoading(T*, T, int, int*);
//private:
//    void Backtrack(int t);
//    int n,                                                   //��װ����
//        * x,                                                  //��ǰ��
//        * bestx;                                              //��ǰ���Ž�
//    Type* w,                                                 //��װ�����飬�����ÿ����װ������
//        c,                                                  //��һ���ִ���������
//        cw,                                                 //��ǰ������
//        bestw,                                              //��ǰ����������
//        r;                                                  //ʣ�༯װ������
//};
////���ĺ��� �Խ�ռ��������������������ֵ
//template <class Type>
//void Loading<Type>::Backtrack(int t)
//{
//    int j;
//    //������t����
//    if (t > n)                                                //����Ҷ�ڵ㣬��ʱx[1,n]��һ������Լ�������Ŀ��н�
//    {
//        for (j = 1; j <= n; j++)
//            bestx[j] = x[j];
//        bestw = cw;
//        return;
//    }
//    r -= w[t];
//    //������������ʱ��t<=nʱ ��ǰ��չ������Ӽ����е��ڲ����
//    //�ý����x[i]=1��x[i]=0�������ӽ��
//    if (cw + w[t] <= c)  //����������x[i]=1
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
//        Backtrack(t + 1);    //����������x[i]=0
//    }
//
//    r += w[t];
//}
////��������˽�б�����ʼ�������õݹ麯��Backtrack(1)ʵ�ֻ�����������������ֵ
//template <class Type>
//Type MaxLoading(Type* w, Type c, int n, int* bestx)
//{
//    int i;
//    Loading<Type> X;
//    //��ʼ��X
//    X.x = new int[n + 1];
//    X.bestx = bestx;
//    X.w = w;
//    X.c = c;
//    X.n = n;
//    X.cw = 0;
//    X.bestw = 0;
//    //��ʼ��r
//    X.r = 0;
//    for (i = 1; i <= n; i++)
//        X.r += w[i];
//    //��������������
//    X.Backtrack(1);
//    delete[]X.x;
//    //��������������
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
//	{		//��ѡ��w[i]����������
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
//	{		//��ѡ��w[i], ��������
//		vl -= v[i];
//		trackback(i +  1);
//		vl += v[i];
//	}
//}

////**************************************************************************************************************************
////***********����ŷ������Ҷ���� ����
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
//vec delta[8] = { {1,0},{0,1},{-1,0},{0,-1},		/*�� �� �� ��*/
//				{1,1},{1,-1},{-1,1},{-1,-1} };	/*���� ���� ���� ����*/
//map<int, string> to_direction = { {0,"��"}, {1,"��"},{2,"��"},{3,"��"},
//							{4,"����"},{5,"����"},{6,"����"},{7,"����"} };
//
//int m, n, num;	//m��n�� num����շ���
//vec Begin = { 0,0 }, End = { 0,0 };	//��ʼ�㣬������
//int turns_n, turns_b = 0x7fffffff;
//
//vector<int> route_n;
//vector<int> route_b;
//int Map_n[MAX_N + 2][MAX_N + 2]; //��ǰmap
//int Map_b[MAX_N + 2][MAX_N + 2]; //���map
//
//
//void traceback(int t, vec pos, int di, bool& flag); //�ӵ�t��λ�ÿ�ʼ��
//bool check(vec next);		//���nextλ���Ƿ����
//
//int main()
//{
//	cin >> m >> n >> num;
//	for (int i = 0; i <= n + 1; i++)	//��ʼ����Ե����
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
//	if (flag == 0) cout << "�޽�" << endl;
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
//	if (t == m * n - num  && pos == End && turns_n < turns_b)	//��� �ߵ��յ㣬����ת����С�ڵ�ǰ���ת����
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
//			if (check(nextpos)) //�����һλ�����ߣ����ߵ���һλ��
//			{
//				Map_n[nextpos.x][nextpos.y] = t + 1 ;
//				route_n.push_back(i);
//				if (t > 1 && di != i)
//					turns_n++;
//
//				if (turns_n <= turns_b)		//����������߳����Ž⣬�����һλ�ü�����
//					traceback(t + 1, nextpos, i ,flag);
//				
//				Map_n[nextpos.x][nextpos.y] = 0;	//����
//				route_n.pop_back();
//				if (t > 1 && di != i)
//					turns_n--;
//			}
//		}
//	}
//}



////**************************************************************************************************************************
////***********�Ӽ�������		����
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








