#include "hello.h"
#include<string.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef _WIN32
#include <direct.h>
#endif


using namespace std;

int
main (int argc, char *argv[])
{
  CORBA::ORB_var orb = CORBA::ORB_init (argc, argv);

  /*
   * IOR is in hello.ref in the local directory
   */

  char pwd[256], uri[300];
  sprintf (uri, "file://%s/hello.ref", getcwd(pwd, 256));

  /*
   * Bind to Hello World server
   */

  CORBA::Object_var obj = orb->string_to_object (uri);
  HelloWorld_var hello = HelloWorld::_narrow (obj);

  if (CORBA::is_nil (hello)) {
    cout << "oops: could not locate HelloWorld server" << endl;
    exit (1);
  }

 // hello->setTemp(100);
	if(argc<2){
	// if (!strcmp(argv[1],"client-t")){
           cout<<endl<<"Temperature is\t"<<hello->getTemp()<<endl;
	   cout<<endl<<"Pressure is\t"<<hello->getPressure()<<endl;
	   cout<<endl<<"Wind is\t"<<hello->getWind()<<endl;
           }
	else{
		if (!strcmp(argv[1],"client-t")){
  			cout<<endl<<"Temperature is\t"<<hello->getTemp()<<endl;
		}	
		if (!strcmp(argv[1],"client-p")){
  			cout <<endl<<"Pressure is\t" <<hello->getPressure()<<endl;
		}
		if (!strcmp(argv[1],"client-w")){
			cout<<endl<<"Wind is\t"<<hello->getWind()<<endl;
		}
	}
  return 0;
}

