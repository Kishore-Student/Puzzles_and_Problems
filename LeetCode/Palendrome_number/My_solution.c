bool isPalindrome(int x) {
    int c,a[100],top=-1,l,i=0;
    bool check=1;
    c=x;
    if(c<0)
        return 0;

    while(c!=0)
    { 
      l=c%10;
      a[++top]=l;
      c=c/10;
    }  
    for(i=0;i<=top;i++)
    {
      if(a[i]==a[top-i])
            continue;
      else
         check=0;
    }  
    return check;
}