int map(char s) {
    switch(s) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int lengthOf(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int romanToInt(char* s) {
    int ans = 0;
    int n = lengthOf(s);

    for (int i = 0; i < n; i++) {
        int cur = map(s[i]);
        int next = (i + 1 < n) ? map(s[i + 1]) : 0;
        if (cur < next) {
            ans -=cur;
        } else {
            ans += cur;
        }
    }

    return ans;
}
