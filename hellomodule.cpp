#include <string.h>
 
using namespace std;
 
char say_hello(const char* name) {
    char out[] = "Hello ";
    strcat(out, name);
    return *out;
}
 
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
using namespace boost::python;
 
BOOST_PYTHON_MODULE(hello)
{
    def("say_hello", say_hello);
}
