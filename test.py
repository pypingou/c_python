#!/usr/bin/python

"""
Unit-tests to tests the C/C++ extensions.
"""

import hello
import fib
import unittest


class UnitTestCase(unittest.TestCase):

    def test_fibonacci(self):
        """ Test the fibonacci suite. """
        self.assertEqual(fib.fib(10), 55)


    def test_hello(self):
        """ Test the hello world extension. """
        self.assertEqual(hello.say_hello("World"), "Hello World!")

    def test_sum(self):
        """ Test the sum function. """
        self.assertEqual(hello.sum([1,2,3,4]), 10)


if __name__ == '__main__':
    unittest.main()
