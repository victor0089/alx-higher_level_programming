# run test with python3 -m doctest -v ./tests/[filename].txt

First import method to test
>>> MyList = __import__('1-my_list').MyList

SUCCESS CASES:

Test ints (program assumes all elements will be type int):
     >>> my_list = MyList()
     >>> my_list.append(3)
     >>> my_list.append(50)
     >>> my_list.append(-1)
     >>> print(my_list)
     [3, 50, -1]
     >>> my_list.print_sorted()
     [-1, 3, 50]
     >>> print(my_list)
     [3, 50, -1]

     >>> another_list = MyList()
     >>> another_list.append(300)
     >>> another_list.append(50)
     >>> another_list.append(-1)
     >>> print(another_list)
     [300, 50, -1]
     >>> another_list.print_sorted()
     [-1, 50, 300]
     >>> print(another_list)
     [300, 50, -1]

     >>> l = MyList()
     >>> l.append(-300)
     >>> l.append(50)
     >>> l.append(-1)
     >>> print(l)
     [-300, 50, -1]
     >>> id(l) is not id(l.print_sorted())
     [-300, -1, 50]
     True

Test list with only one element:
     >>> solo = MyList()
     >>> solo.append(-99999)
     >>> print(solo)
     [-99999]
     >>> solo.print_sorted()
     [-99999]
     >>> print(solo)
     [-99999]

Test list with no elements:
     >>> empty = MyList()
     >>> print(empty)
     []
     >>> empty.print_sorted()
     []

Test type, isinstance, issubclass:
     >>> type(MyList())
     <class '1-my_list.MyList'>

     >>> isinstance(MyList, object)
     True

     >>> isinstance(MyList, list)
     False

     >>> issubclass(MyList, list)
     True

     >>> 'print_sorted' in dir(MyList)
     True

FAIL CASES:
