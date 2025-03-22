
 #include "class.h"
 #include <iostream>
 
 void sandbox() {  
     MyClass obj1;           
     MyClass obj2(42);     

     obj1.showValue();
     obj2.showValue();
     obj1.setValue(10);
     obj1.showValue();
      
 }
 