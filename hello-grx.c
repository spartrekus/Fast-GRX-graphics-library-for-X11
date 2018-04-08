 

 #include <string.h>
 #include <grx20.h>
 #include <grxkeys.h>
     
     int main()
     {
       char *message = "Hello, GRX world";
       int x, y;
       GrTextOption grt;
     
       GrSetMode( GR_default_graphics );
     
       grt.txo_font = &GrDefaultFont;
       grt.txo_fgcolor.v = GrWhite();
       grt.txo_bgcolor.v = GrBlack();
       grt.txo_direct = GR_TEXT_RIGHT;
       grt.txo_xalign = GR_ALIGN_CENTER;
       grt.txo_yalign = GR_ALIGN_CENTER;
       grt.txo_chrtype = GR_BYTE_TEXT;
     
       GrBox( 0,0,GrMaxX(),GrMaxY(),GrWhite() );
       GrBox( 4,4,GrMaxX()-4,GrMaxY()-4,GrWhite() );
     
       x = GrMaxX()/2;
       y = GrMaxY()/2;
       GrDrawString( message,strlen( message ),x,y,&grt );
     
       GrKeyRead();
     
       return 0;
     }
