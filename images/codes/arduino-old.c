toDrive=buf[2];

if((unsigned int) buf[2]>=1 && (unsigned int) buf[3]==0){
     toDrive=120;
     drive(120);
 }else if((unsigned int) buf[2]>=1 && (unsigned int) buf[3]==1){
     reverse(30);
   } else if((unsigned int) buf[2]>=1 && (unsigned int) buf[3]==0){
      driveServo.write(93); 
    }

 }  else{
   driveServo.write(93);
   } 