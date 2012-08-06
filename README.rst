c_python
========

:Author: Pierre-Yves Chibon <pingou@pingoured.fr>


Get this project:
-----------------
Sources:  https://github.com/pypingou/c_python


Dependencies:
-------------
- python (tested on 2.7)
- boost-python
- boost-devel


Run the project from virtualenv:
--------------------------------

* Create the virtual env

::

 virtualenv cpythontest 

 cd cpythontest

 source bin/activate

* Retrieve the sources

::

 git clone https://github.com/pypingou/c_python.git

* Enter the folder and run the setup.py script

::

 cd c_python

 sudo python setup.py install

* Run the tests

::

 python test.py


License:
--------

This project is licensed GPLv3+.
