void main()
{
    int a[1000],i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
