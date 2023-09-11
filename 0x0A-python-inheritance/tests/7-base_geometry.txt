# run test with python3 -m doctest -v ./tests/[filename].txt

First import method to test
>>> BaseGeometry = __import__('7-base_geometry').BaseGeometry

SUCCESS CASES:

Test ints greater than 0 (shouldn't raise error or return anything):
     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", 999)

FAIL CASES:

Test non-implemented area method
     >>> bg = BaseGeometry()
     >>> bg.area()
     Traceback (most recent call last):
     ...
     Exception: area() is not implemented

Test ints less than or equal to 0:
     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", 0)
     Traceback (most recent call last):
     ...
     ValueError: checkme must be greater than 0

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", -999)
     Traceback (most recent call last):
     ...
     ValueError: checkme must be greater than 0

Test non-ints:

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", None)
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", "hello!")
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", "50")
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", [1, 2, 3])
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", (1, 2, 3))
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", {"key": 1})
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("age", True)
     Traceback (most recent call last):
     ...
     TypeError: age must be an integer

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("checkme", {3, 4})
     Traceback (most recent call last):
     ...
     TypeError: checkme must be an integer

Test invalid number of arguments:
     >>> bg = BaseGeometry()
     >>> bg.integer_validator()
     Traceback (most recent call last):
     ...
     TypeError: integer_validator() missing 2 required positional arguments: 'name' and 'value'

     >>> bg = BaseGeometry()
     >>> bg.integer_validator("age")
     Traceback (most recent call last):
     ...
     TypeError: integer_validator() missing 1 required positional argument: 'value'
