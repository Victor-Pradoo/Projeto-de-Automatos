#include <stdio.h>

#define _ACEITA_ 1
#define _REJEITA_ 0

int scanner( /*argumentos */ ){
 	char c;
 	q0: /* c=getchar(); */
	 	if (c=="."){
	 		goto q1;
	 		return(_REJEITA_);
		}
 		else{
			if (c=="0"){
		  		goto q7;
	 			return(_ACEITA_);
		  	} 
	 	  	else{
	 	  		if (c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
	 	  			goto q2;
	 	  			return(_ACEITA_);
				}else{
					if (c == "-"){
						goto q5;
						return(_ACEITA_);
					} 
				}
		   	}
	 	}
		
 	q1: /* c=getchar(); */
	 	goto q1;
	 	return(_REJEITA_);
	
	q2:
		if (c=="-"){
			goto q1;
			return(_REJEITA_);
		}else{
			if (c == "."){
				goto q3;
				return(_REJEITA_);
			}
		}
		
	q3:
		if (c=="-" || c=="."){
			goto q1;
			return(_REJEITA_);
		}else{
			if (c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
				goto q4;
				return(_ACEITA_);	
			}
		}
	
	q4:
		if (c=="-"){
			goto q1;
			return(_REJEITA_);
		}else{
			if (c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
				goto q4;
				return(_ACEITA_);
			}
		}
		
	q5:
		if (c=="-" || c == "."){
			goto q1;
			return(_REJEITA_);
		}else{
			if (c == "0"){
				goto q6;
				return (_REJEITA_);
			}else{
				if (c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
					goto q2;
					return(_REJEITA_);
				}
			} 
		}
	
	q6:
		if (c=="-" || c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
			goto q1;
			return(_REJEITA_);
		}else{
			if(c=="."){
				goto q8;
				return(_REJEITA_);
			}
		}
		
	q7:
		if (c=="-" || c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
			goto q1;
			return(_REJEITA_);
		}else{
			if(c == "."){
				goto q3;
				return(_REJEITA_);
			}
		}
		
	q8:
		if (c=="1" || c=="2" ||c=="3" || c=="4" || c=="5" || c=="6" || c=="7" || c=="8" || c=="9"){
			goto q4;
			return(_ACEITA_);
		}else{
			if(c=="0"){
				goto q8;
				return(_REJEITA_);
			}
		}
		
}

int main () {
	
	return 0;
}