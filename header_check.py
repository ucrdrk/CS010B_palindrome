import unittest
import os.path
import json
import re

class ProjectTestCases(unittest.TestCase):
    def setUp(self):
        pass

    def test_02_headers(self):
        """Check for student email if header"""
        with open('./src/palindrome.cpp', 'r') as f:
            code = f.read()
            email_search = re.search(r"email:\s*[^@]*@([^.]+\.)*ucr\.edu", code)

        self.assertNotEqual(email_search, None, "Submission does not contain a UCR email address. Gradescope will check for one.")


if __name__ == '__main__':

    unittest.main()