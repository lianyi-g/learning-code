//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////多边形求面积公式：
////S = 0.5 * ( (x0*y1-x1*y0) + (x1*y2-x2*y1) + ... + (xn*y0-x0*yn) )
////其中点(x0, y0), (x1, y1), ... , (xn, yn)为多边形上按逆时针顺序的顶点。
////n个顶点就有n个多项式相加
//int main()
//{
//	int n;
//	int x[3],y[3];
//	double sum;
//	while(scanf("%d",&n),n)
//	{
//		scanf("%d%d",x,y);
//		x[2] = x[0];//存第一个顶点的值，用来计算公式最后一项
//		y[2] = y[0];
//		sum = 0.0;
//		while(--n)
//		{
//			scanf("%d%d",x+1,y+1);
//			sum += x[0]*y[1] - x[1]*y[0];
//			x[0] = x[1];//用输入的顶点，覆盖前一个顶点
//			y[0] = y[1];
//		}
//		sum += x[0]*y[2] - x[2]*y[0];//计算公式最后一项
//		sum = sum / 2.0;
//		printf("%.1f\n",sum);
//	}
//	return 0;
//}