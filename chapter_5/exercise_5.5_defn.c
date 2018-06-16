char * strncat(char *s,char *t,int n){
	char *r=(char *)malloc(strlen(s)+n+1);

	char *save=r;
	while(*s!='\0'){
		*r=*s;
		r++;
		s++;
	}
	while(n>=0){
		*r=*t;
		t++;
		r++;
		
		n--;	
	}
	r--;
	
	*r='\0';
	r=save;
	return r;
}

char * strncpy(char *s,char *t,int n){
	char *r=(char *)malloc(strlen(s)+n+1);
	char *save=r;
	while(n>=0){
		*r=*t;
		t++;
		r++;
		
		n--;	
	}
	r--;
	
	*r='\0';
	r=save;
	return r;
}
int strncmp(char *s,char *t,int n){

	while(n>0){
		if(*s<*t)
			return (*s-*t);
		if(*s>*t)
			return (*s-*t);	

		t++;
		s++;		
		n--;	
	}

	return 0;
}
