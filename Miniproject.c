#include <stdio.h>

int Maxvaluve(int Number1, int Number2, int Number3, int Number4, int Number5);
int cancalvotes();
int chandimal();
int sadun();
int fayas();
int malsha();
int obama();
int next();


// Main fauntion for getting winner.
int main(){
	printf("=====================================================\n");
	printf("+                                                   +\n");
	printf("+ Welcome to Student ICT Club Presidential election +\n");
	printf("+                                                   +\n");
	printf("=====================================================\n");
	printf("\n");
	printf("\n");
	printf(" *******You should red the Guidelines before voting*********\n");
	printf("There are 5 applicants for a student ICT club presidential election.\nThere are 10 members in the club excluding the presidential applicants.\n");
	printf("\n");
	printf("How to vot for 5 applicants for a student ICT club presidential election?\n");
    printf("++++++YOU CAN ENTER APPLICANT'S REGISTER NUMBER INTO THIS SYSTEM++++++\n");
    printf("\n");
    printf("APPLICANT'S REGISTER NUMBER LIST\n");
    printf("Chandimal------> 01\n");
    printf("Sadun    ------> 02\n");
    printf("Fayas    ------> 03\n");
    printf("Malsha   ------> 04\n");
    printf("Obama    ------> 05\n");
    printf("=====================================================================\n");
    printf("\n");
    
	
    int c=0;
	int vot=0;
	int incresNumberMain=0;
	int maxValueMain=10;
    int case1=0,case2=0,case3=0,case4=0,case5=0;
    int winer = 0;
    int cancalvote=0;
	
   do{
   
   	int incresNumber=0; 
	int maxValue=3;  
   
    printf("Welcome to %d Voter, Now you can vote only 3 Applicant\n",incresNumberMain+1);
    printf("APPLICANT'S REGISTER NUMBER LIST\n");
    printf("Chandimal------> 01\n");
    printf("Sadun    ------> 02\n");
    printf("Fayas    ------> 03\n");
    printf("Malsha   ------> 04\n");
    printf("Obama    ------> 05\n");
    printf("=====================================================================\n");
    printf("\n");
   	
	do{
	printf("Enter Your %d Vote:\n",incresNumber+1);
    scanf("%d",&vot);
    switch(vot){
    	
    	case 1:
    		case1 = case1+1;
    		break;
    		
    	case 2:
			case2 = case2+1;
			break;
    		
    	case 3:
    		case3 = case3+1;
    		break;
    	case 4:
    		case4 = case4+1;
    		break;
    	case 5:
    		case5 = case5+1;
    		break;
    	default:
    		cancalvote++;
    		printf("Invalid Vating!!, Your vorting will be cancalled\n"); 
    		break;
    		
	}
   incresNumber++; 
}

while (incresNumber<maxValue);
    printf("Thank you for your vote: %d Member voted\n",incresNumberMain+1);
    printf("=========================\n");
    printf("\n");
    printf("\n");
     
   
   
  
    	
incresNumberMain++;
}

while (incresNumberMain<maxValueMain);

   printf("Chandimal 01: %d votes\n",case1);
   printf("Sadun     02: %d votes\n",case2);
   printf("Fayas     03: %d votes\n",case3);
   printf("Malsha    04: %d votes\n",case4);
   printf("Obama     05: %d votes\n",case5);
   
   
   winer = Maxvaluve(case1,case2,case3,case4,case5);
   
   if(cancalvote!=0){
   	if(cancalvote>1){
   		printf("*********Worming!!---There are %d cancal vote**********\n",cancalvote);
	   }else {
	   	printf("*********Worming!!---There is %d cancal vote**********\n",cancalvote);
	   }
   	
   }
   
 
	
}


//-----------------------Finding winner---------------------------
int Maxvaluve(int Number1, int Number2, int Number3, int Number4, int Number5){
	
	
	if( Number1>Number2 && Number1>Number3 && Number1>Number4 && Number1>Number5){
		chandimal();
	}else if(Number2>Number3 && Number2>Number4 && Number2>Number5 && Number2>Number1){
		 sadun();
		
	}else if(Number3>Number4 && Number3>Number5 && Number3>Number2 && Number3>Number1){
		fayas();
	}else if (Number4>Number5 && Number4>Number1 && Number4>Number2 && Number4>Number3){
		malsha();
	}else if(Number5>Number4 && Number5>Number3 && Number5>Number2 && Number5>Number1){
	    obama();	
	}else{
		 int continuenumber=0;
	     printf(".....................++No-win situation++......................\n");
	     printf("IF YOU NEED TO CONTINUE THE SYSTEM, ENTER '-1' TO CONTINUE.\n OTHERWISE YOU CAN ENTER ANY KEY TO STOP THE SYSTEM\n");
	     scanf("%d",&continuenumber);
	     if (continuenumber==-1){
	     	 next();
	     	
	     	
		 }else{
		 	printf("Thank you for using this system");
		 }
	     
	     
      }
	
	
	
	             
}





int chandimal(){
	char name[20]= "Chandimal";
    printf("Congatulation!!--->%s\n",name);
	printf("===================================================================\n"); 
	printf("+  %s was selected as a new president for the student ICT club    +\n",name);
	printf("===================================================================\n");
	
}


int sadun(){
	char name[20]= "Sadun";
	printf("Congatulation!!--->%s\n",name);
	printf("===================================================================\n"); 
	printf("+  %s was selected as a new president for the student ICT club    +\n",name);
	printf("===================================================================\n");
	
}

int fayas(){
	char name[20]= "Fayas";
	printf("Congatulation!!--->%s\n",name);
	printf("===================================================================\n"); 
	printf("+  %s was selected as a new president for the student ICT club    +\n",name);
	printf("===================================================================\n");
	
}


int malsha(){
	char name[20]= "Malsha";
	printf("Congatulation!!--->%s\n",name);
	printf("===================================================================\n"); 
	printf("+  %s was selected as a new president for the student ICT club    +\n",name);
	printf("===================================================================\n");
	
}

int obama(){
	char name[20]= "Obama";
	printf("Congatulation!!--->%s\n",name);
	printf("===================================================================\n"); 
	printf("+  %s was selected as a new president for the student ICT club    +\n",name);
	printf("===================================================================\n");
	
}






int next(){
	printf("=====================================================\n");
	printf("+                                                   +\n");
	printf("+ Welcome to Student ICT Club Presidential election +\n");
	printf("+                                                   +\n");
	printf("=====================================================\n");
	printf("\n");
	printf("\n");
	printf(" *******You should red the Guidelines before voting*********\n");
	printf("There are 5 applicants for a student ICT club presidential election.\nThere are 10 members in the club excluding the presidential applicants.\n");
	printf("\n");
	printf("How to vot for 5 applicants for a student ICT club presidential election?\n");
    printf("++++++YOU CAN ENTER APPLICANT'S REGISTER NUMBER INTO THIS SYSTEM++++++\n");
    printf("\n");
    printf("APPLICANT'S REGISTER NUMBER LIST\n");
    printf("Chandimal------> 01\n");
    printf("Sadun    ------> 02\n");
    printf("Fayas    ------> 03\n");
    printf("Malsha   ------> 04\n");
    printf("Obama    ------> 05\n");
    printf("=====================================================================\n");
    printf("\n");
    
	

	int vot=0;
	int incresNumberMain=0;
	int maxValueMain=10;
    int case1=0,case2=0,case3=0,case4=0,case5=0;
    int winer = 0;
    int cancalvote=0;
	
   do{
   
   	int incresNumber=0; 
	int maxValue=3;  
   
    printf("Welcome to %d Voter, Now you can vote only 3 Applicant\n",incresNumberMain+1);
    printf("APPLICANT'S REGISTER NUMBER LIST\n");
    printf("Chandimal------> 01\n");
    printf("Sadun    ------> 02\n");
    printf("Fayas    ------> 03\n");
    printf("Malsha   ------> 04\n");
    printf("Obama    ------> 05\n");
    printf("=====================================================================\n");
    printf("\n");
   	
	do{
	printf("Enter Your %d Vote:\n",incresNumber+1);
    scanf("%d",&vot);
    switch(vot){
    	
    	case 1:
    		case1 = case1+1;
    		break;
    		
    	case 2:
			case2 = case2+1;
			break;
    		
    	case 3:
    		case3 = case3+1;
    		break;
    	case 4:
    		case4 = case4+1;
    		break;
    	case 5:
    		case5 = case5+1;
    		break;
    	default:
    		 cancalvote++;
    		 printf("Invalid Vating!!, Your vating will be cancelled\n"); 
    		 break;
    		
	}
   incresNumber++; 
}

while (incresNumber<maxValue);
    printf("Thank you for your vote: %d Member voted\n",incresNumberMain+1);
    printf("=========================\n");
    printf("\n");
    printf("\n");
     
   
   
  
    	
incresNumberMain++;
}

while (incresNumberMain<maxValueMain);

   printf("Chandimal 01: %d votes\n",case1);
   printf("Sadun     02: %d votes\n",case2);
   printf("Fayas     03: %d votes\n",case3);
   printf("Malsha    04: %d votes\n",case4);
   printf("Obama     05: %d votes\n",case5);
   
   winer = Maxvaluve(case1,case2,case3,case4,case5);
   
   if(cancalvote!=0){
   	if(cancalvote>1){
   		printf("*********Worming!!---There are %d cancal vote**********\n",cancalvote);
	   }else {
	   	printf("*********Worming!!---There is %d cancal vote**********\n",cancalvote);
	   }
   	
   }
   
}
