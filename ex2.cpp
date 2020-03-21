#include<fstream.h>
 fstream f("date.in",ios::in);
 fstream g("date.out",ios::out);
 int n,m,a[100],b[100], v[100];
 void citire()
    { int x,y,i;
      f>>n>>m;
      for(i=1;i<=m;i++)
	{ f>>x>>y;
	  a[x]++;
	  b[y]++;
	}
    }
void da()
{

    for(int i=1;i<=n;i++)
    {
        fin>>v[i];
        p[v[i]]=1;
    }
}

void afis()
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(i!=j)
    {
        if(a[i][j]==1&& p[i]!=p[j])fout<<i<<" "<<j<<endl;
    }
}
 void main()
    { citire();
      int i;
      for(i=1;i<=n;i++)
        g << a[i] << b[i];
    da();
    afis();
    }