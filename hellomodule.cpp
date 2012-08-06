#include <string>
using namespace std;

#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/list.hpp>
#include <boost/python/extract.hpp>
#include <boost/python/ssize_t.hpp>
using namespace boost::python;

string say_hello(const string name)
{
    string out = "Hello ";
    out = out + name + "!\n";
    return out;
}

int sum(list input)
{
    int out = 0;
    ssize_t n = len(input);
    for(ssize_t i=0; i<n; i++) {
        out = out + extract<double>(input[i]);
    }
    return out;
}

BOOST_PYTHON_MODULE(hello)
{
    def("say_hello", say_hello);
    def("sum", sum);
}
