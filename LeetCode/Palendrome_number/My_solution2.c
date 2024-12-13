bool isPalindrome(int x) {
    bool check=1;
    int c,i;
    char s[32];
    sprintf(s,"%d",x);
    c=strlen(s);
    for(i=0;i<c/2;i++)
    {   
        if(s[i]!=s[c-1-i]){
         check=0;
         break;
        }
    }
    return check;
}