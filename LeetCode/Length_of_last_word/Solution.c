int lengthOfLastWord(char* s) {
    int length=0,i;
    for(i=strlen(s)-1; i>=0; i--)
    {   
        if(isspace(s[i])&&length>0)
            break;
        if(isalpha(s[i]))
            length++;
    }
    return length;
}