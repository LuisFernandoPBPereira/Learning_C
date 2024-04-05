int alternateDigitSum(int n) {
    int m=n, cont=0, res=0, i=0;

    while(m>0){
        if(cont%2==0) 
            res+= m%10;
        else 
            res-= m%10;

        m/=10;
        cont++;
    }

    if(cont%2==0){
        m=n;
        cont=0;
        res=0;
        while(m>0){
            if(cont%2==0) 
                res-= m%10;
            else 
                res+= m%10;

            m/=10;
            cont++;
        }
    }

    return res;
}