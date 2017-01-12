/*
 * A simple "Hello World" example that uses the POA
 */

#include "mars.h"
#include<string.h>
#ifdef HAVE_ANSI_CPLUSPLUS_HEADERS
#include <fstream>
#else
#include <fstream.h>
#endif


using namespace std;

/*
 * Hello World implementation. This implementation does not inherit
 * any skeleton class, but is tied to the POA skeleton template.
 */

class HelloWorld_impl:virtual public POA_HelloWorld
{
private:
	long Temperature;
 	long Pressure;
	long Distance;
	long Bigrock;
	long Deepsand;
	long mo;
public:
	
	//void setTemp(long temperature);
	long getTemp();
	//void setPressure(long pressure);
	long getPressure();
	//void setWind(long wind);
	long getDistance();
        long getBigrock();
        long getWind();
	long getDeepsand();
	long getmo();
};

/*void HelloWorld_impl::setTemp(long temperature)
{
	Temperature = temperature;
}

void HelloWorld_impl::setPressure(long pressure)
{
	Pressure = pressure;
}

void HelloWorld_impl::setTemp(long wind)
{
	Wind = wind;
}
*/

long HelloWorld_impl::getTemp()
{
long temp;
char g;
cout<< "Enter the temperature"<<endl;
cin>>temp;
return  temp;//Temperature;
}

long HelloWorld_impl::getPressure()
{
long pressure;
string g;
cout<< "Enter the Pressure"<<endl;
cin>>pressure;

return pressure;//Pressure;

}

long HelloWorld_impl::getWind()
{
	return 12;//Wind;
}

long HelloWorld_impl::getDistance()
{
long distance;
cout<< "Enter the distance from the starting point "<<endl;
cin>>distance;

return distance;//distance;

}

long HelloWorld_impl::getBigrock()
{
long Bigrock;
cout<< "Enter the distance from BigRock "<<endl;
cin>>Bigrock;

return Bigrock;//Bigrock;

}
long HelloWorld_impl::getDeepsand()
{
long Deepsand;
cout<< "Enter the distance from Deepsand "<<endl;
cin>>Deepsand;

return Deepsand;//Deepsand;

}

long HelloWorld_impl::getmo()
{
long mo;
cout<< "Enter the distance from MO "<<endl;
cin>>mo;

return mo;//mo;

}


int main (int argc, char *argv[])
{
  /*
   * Initialize the ORB
   */

  CORBA::ORB_var orb = CORBA::ORB_init (argc, argv);

  /*
   * Obtain a reference to the RootPOA and its Manager
   */

  CORBA::Object_var poaobj = orb->resolve_initial_references ("RootPOA");
  PortableServer::POA_var poa = PortableServer::POA::_narrow (poaobj);
  PortableServer::POAManager_var mgr = poa->the_POAManager();

  /*
   * Create a Hello World object and tie it to the skeleton template
   */

  HelloWorld_impl *hello=new HelloWorld_impl;
  //POA_HelloWorld_tie<HelloWorld_impl> tie_hello (hello);

  /*
   * Activate the Servant
   */

  PortableServer::ObjectId_var oid = poa->activate_object (hello);

  /*
   * Write reference to file
   */

  ofstream of ("hello.ref");
  CORBA::Object_var ref = poa->id_to_reference (oid.in());
  CORBA::String_var str = orb->object_to_string (ref.in());
  of << str.in() << endl;
  of.close ();

  /*
   * Activate the POA and start serving requests
   */

  cout << "Running." << endl;

  mgr->activate ();
  orb->run();

  /*
   * Shutdown (never reached)
   */

  poa->destroy (TRUE, TRUE);

  return 0;
}

