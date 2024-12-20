int strtoint(char letter)
{
    switch(letter)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default: return 0;
    }
}
int romanToInt(char* s) {
    int integer=0,count=0;
    while(s[count]!='\0')
    {
        if(s[count+1]!='\0'&&(strtoint(s[count])<strtoint(s[count+1])))
                integer-=strtoint(s[count]);
        else
            integer+=strtoint(s[count]);
        count++;
    }
    return integer;
}