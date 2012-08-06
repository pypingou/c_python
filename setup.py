from distutils.core import setup, Extension
 
module1 = Extension('fib', sources = ['fibmodule.c'])
module2 = Extension("hello", ["hellomodule.cpp"], libraries = ["boost_python"])
 
setup (name = 'c_python',
        version = '1.0',
        description = 'This is a demo package extending python with C',
        ext_modules = [module1, module2]
        )
