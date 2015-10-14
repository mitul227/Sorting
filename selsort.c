void main()
{
    int a[1000],i,j,t,n,k,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}

