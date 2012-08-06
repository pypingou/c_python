#include <string>
 
using namespace std;
 
std::string say_hello(const string name) {
    string out = "Hello ";
    out = out + name + "!\n";
    return out;
}
 
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
using namespace boost::python;
 
BOOST_PYTHON_MODULE(hello)
{
    def("say_hello", say_hello);
}
