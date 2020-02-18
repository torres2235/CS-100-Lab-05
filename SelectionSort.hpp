 error: invalid use of qualified-name ‘SelectionSort::SelectionSortTest_DefaultTest_Test::test_info_’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1 error: cannot define member function ‘SelectionSort::SelectionSortTest_DefaultTest_Test::TestBody’ within ‘SelectionSort’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ clear

[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1 error: invalid use of qualified-name ‘SelectionSort::SelectionSortTest_DefaultTest_Test::test_info_’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1 error: cannot define member function ‘SelectionSort::SelectionSortTest_DefaultTest_Test::TestBody’ within ‘SelectionSort’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim unit_test.cpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim VectorContainer_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:10:0:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/VectorContainer_test.hpp:41:0: error: unterminated argument list invoking macro "EXPECT_EQ"
 #endif // __VECTORCONTAINER_TEST_HPP__
 
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/VectorContainer_test.hpp: In member function ‘virtual void VectorContainerTest_PrintTest_Test::TestBody()’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/VectorContainer_test.hpp:39:2: error: ‘EXPECT_EQ’ was not declared in this scope
  EXPECT_EQ(tester->at(1)->evaluate(), 2;
  ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cstddef:49:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:55,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/list.tcc:59:15: error: expected ‘=’ before ‘__attribute__’
 namespace std _GLIBCXX_VISIBILITY(default)
               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/list.tcc:59:15: error: expected identifier before ‘__attribute__’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/list.tcc:59:15: error: expected ‘;’ before ‘__attribute__’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/list.tcc:59:15: error: expected primary-expression before ‘__attribute__’
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer_test.hpp:6:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:11:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:13:3: error: ‘list’ does not name a type
   list<Base*> userList;
   ^~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp: In member function ‘virtual void VectorContainerTest_PrintTest_Test::TestBody()::ListContainer::add_element(Base*)’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:18:4: error: ‘userList’ was not declared in this scope
    userList.push_back(newElement);
    ^~~~~~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp: In member function ‘virtual void VectorContainerTest_PrintTest_Test::TestBody()::ListContainer::print()’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:22:8: error: ‘list’ was not declared in this scope
    for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
        ^~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:22:17: error: expected primary-expression before ‘*’ token
    for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
                 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:22:18: error: expected primary-expression before ‘>’ token
    for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
                  ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:22:30: error: missing template arguments before ‘i’
    for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
                              ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:22:52: error: ‘i’ was not declared in this scope
    for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
                                                    ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:22:57: error: ‘userList’ was not declared in this scope
    for(list<Base*>::iterator i = userList.begin(); i != userList.end(); i++) {
                                                         ^~~~~~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp: In member function ‘virtual void VectorContainerTest_PrintTest_Test::TestBody()::ListContainer::swap(int, int)’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:33:4: error: ‘list’ was not declared in this scope
    list<Base*>::iterator temp1 = userList.begin();
    ^~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:33:13: error: expected primary-expression before ‘*’ token
    list<Base*>::iterator temp1 = userList.begin();
             ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:33:14: error: expected primary-expression before ‘>’ token
    list<Base*>::iterator temp1 = userList.begin();
              ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:33:26: error: missing template arguments before ‘temp1’
    list<Base*>::iterator temp1 = userList.begin();
                          ^~~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:34:12: error: ‘temp1’ was not declared in this scope
    advance(temp1, i);
            ^~~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:36:13: error: expected primary-expression before ‘*’ token
    list<Base*>::iterator temp2 = userList.begin();
             ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:36:14: error: expected primary-expression before ‘>’ token
    list<Base*>::iterator temp2 = userList.begin();
              ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:36:26: error: missing template arguments before ‘temp2’
    list<Base*>::iterator temp2 = userList.begin();
                          ^~~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:37:12: error: ‘temp2’ was not declared in this scope
    advance(temp2, j);
            ^~~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp: In member function ‘virtual Base* VectorContainerTest_PrintTest_Test::TestBody()::ListContainer::at(int)’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:43:4: error: ‘list’ was not declared in this scope
    list<Base*>::iterator temp = userList.begin();
    ^~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:43:13: error: expected primary-expression before ‘*’ token
    list<Base*>::iterator temp = userList.begin();
             ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:43:14: error: expected primary-expression before ‘>’ token
    list<Base*>::iterator temp = userList.begin();
              ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:43:26: error: missing template arguments before ‘temp’
    list<Base*>::iterator temp = userList.begin();
                          ^~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:44:12: error: ‘temp’ was not declared in this scope
    advance(temp, i);
            ^~~~
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp: In member function ‘virtual int VectorContainerTest_PrintTest_Test::TestBody()::ListContainer::size()’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer.hpp:50:11: error: ‘userList’ was not declared in this scope
    return userList.size();
           ^~~~~~~~
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/internal/gtest-internal.h:40:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer_test.hpp: In member function ‘virtual void VectorContainerTest_PrintTest_Test::TestBody()’:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer_test.hpp:17:1 error: local class ‘class VectorContainerTest_PrintTest_Test::TestBody()::ListContainerTest_AddElement_Test’ shall not have static data member ‘testing::TestInfo* const VectorContainerTest_PrintTest_Test::TestBody()::ListContainerTest_AddElement_Test::test_info_’ [-fpermissive]
 TEST(ListContainerTest, AddElement) {
 ^
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer_test.hpp:17:1 error: qualified-id in declaration before ‘=’ token
 TEST(ListContainerTest, AddElement) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/ListContainer_test.hpp:17:1 error: qualified-id in declaration before ‘(’ token
 TEST(ListContainerTest, AddElement) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:14:33: error:a function-definition is not allowed here before ‘{’ token
 int main(int argc, char **argv) {
                                 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim VectorContainer_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ./test
[==========] Running 3 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from VectorContainerTest
[ RUN      ] VectorContainerTest.AddElement
[       OK ] VectorContainerTest.AddElement (0 ms)
[ RUN      ] VectorContainerTest.PrintTest
1 2 [       OK ] VectorContainerTest.PrintTest (0 ms)
[----------] 2 tests from VectorContainerTest (0 ms total)

[----------] 1 test from ListContainerTest
[ RUN      ] ListContainerTest.AddElement
[       OK ] ListContainerTest.AddElement (0 ms)
[----------] 1 test from ListContainerTest (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 2 test suites ran. (1 ms total)
[  PASSED  ] 3 tests.
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim VectorContainer_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ./test
[==========] Running 4 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 3 tests from VectorContainerTest
[ RUN      ] VectorContainerTest.AddElement
[       OK ] VectorContainerTest.AddElement (0 ms)
[ RUN      ] VectorContainerTest.PrintTest
1 2 [       OK ] VectorContainerTest.PrintTest (0 ms)
[ RUN      ] VectorContainerTest.SwapTest
[       OK ] VectorContainerTest.SwapTest (0 ms)
[----------] 3 tests from VectorContainerTest (0 ms total)

[----------] 1 test from ListContainerTest
[ RUN      ] ListContainerTest.AddElement
[       OK ] ListContainerTest.AddElement (0 ms)
[----------] 1 test from ListContainerTest (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 2 test suites ran. (0 ms total)
[  PASSED  ] 4 tests.
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git status
# On branch master
# Changes not staged for commit:
#   (use "git add/rm <file>..." to update what will be committed)
#   (use "git checkout -- <file>..." to discard changes in working directory)
#   (commit or discard the untracked or modified content in submodules)
#
#	modified:   VectorContainer_test.hpp
#	deleted:    base.hpp
#	modified:   googletest (untracked content)
#	deleted:    lab-04/unit_test.cpp
#	modified:   unit_test.cpp
#
# Untracked files:
#   (use "git add <file>..." to include in what will be committed)
#
#	SelectionSort.hpp
#	SelectionSort_test.hpp
no changes added to commit (use "git add" and/or "git commit -a")
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git add VectorContainer_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git commit -m "adding more unittests"
[master 37caf69] adding more unittests
 1 file changed, 28 insertions(+)
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)


(gnome-ssh-askpass:41620): Gtk-WARNING **: 12:23:06.826: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': Torres2235

(gnome-ssh-askpass:41639): Gtk-WARNING **: 12:23:08.572: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://Torres2235@github.com': 
Counting objects: 5, done.
Delta compression using up to 48 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 602 bytes | 0 bytes/s, done.
Total 3 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/cs100/lab-05-strategy-pattern-jo-an.git
   3ebab82..37caf69  master -> master
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim ListContainer.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim ListContainer_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ./test
[==========] Running 5 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 3 tests from VectorContainerTest
[ RUN      ] VectorContainerTest.AddElement
[       OK ] VectorContainerTest.AddElement (0 ms)
[ RUN      ] VectorContainerTest.PrintTest
1 2 [       OK ] VectorContainerTest.PrintTest (0 ms)
[ RUN      ] VectorContainerTest.SwapTest
[       OK ] VectorContainerTest.SwapTest (0 ms)
[----------] 3 tests from VectorContainerTest (1 ms total)

[----------] 2 tests from ListContainerTest
[ RUN      ] ListContainerTest.AddElement
[       OK ] ListContainerTest.AddElement (0 ms)
[ RUN      ] ListContainerTest.SwapTest
[       OK ] ListContainerTest.SwapTest (0 ms)
[----------] 2 tests from ListContainerTest (0 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 2 test suites ran. (1 ms total)
[  PASSED  ] 5 tests.
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git status
# On branch master
# Changes not staged for commit:
#   (use "git add/rm <file>..." to update what will be committed)
#   (use "git checkout -- <file>..." to discard changes in working directory)
#   (commit or discard the untracked or modified content in submodules)
#
#	modified:   ListContainer.hpp
#	modified:   ListContainer_test.hpp
#	deleted:    base.hpp
#	modified:   googletest (untracked content)
#	deleted:    lab-04/unit_test.cpp
#	modified:   unit_test.cpp
#
# Untracked files:
#   (use "git add <file>..." to include in what will be committed)
#
#	SelectionSort.hpp
#	SelectionSort_test.hpp
no changes added to commit (use "git add" and/or "git commit -a")
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git add SelectionSort.hpp SelectionSort_test.hpp ListContainer.hpp ListContainer_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git commit -m "adding unit tests"
[master 12797ac] adding unit tests
 4 files changed, 91 insertions(+), 1 deletion(-)
 create mode 100644 SelectionSort.hpp
 create mode 100644 SelectionSort_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)


(gnome-ssh-askpass:42614): Gtk-WARNING **: 12:26:13.303: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': Torres2235

(gnome-ssh-askpass:42624): Gtk-WARNING **: 12:26:15.168: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://Torres2235@github.com': 
Counting objects: 9, done.
Delta compression using up to 48 threads.
Compressing objects: 100% (6/6), done.
Writing objects: 100% (6/6), 1.27 KiB | 0 bytes/s, done.
Total 6 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
To https://github.com/cs100/lab-05-strategy-pattern-jo-an.git
   37caf69..12797ac  master -> master
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ls
bin                  lab-04                  SelectionSort_test.hpp
CMakeCache.txt       lib                     sort.hpp
CMakeFiles           ListContainer.hpp       test
cmake_install.cmake  ListContainer_test.hpp  unit_test.cpp
CMakeLists.txt       Makefile                VectorContainer.hpp
container.hpp        README.md               VectorContainer_test.hpp
googletest           SelectionSort.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim unit_test.cpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1 error: invalid use of qualified-name ‘SelectionSort::SelectionSortTest_DefaultTest_Test::test_info_’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1 error: cannot define member function ‘SelectionSort::SelectionSortTest_DefaultTest_Test::TestBody’ within ‘SelectionSort’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1: error: invalid use of qualified-name ‘SelectionSort::SelectionSortTest_DefaultTest_Test::test_info_’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:16:1: error: cannot define member function ‘SelectionSort::SelectionSortTest_DefaultTest_Test::TestBody’ within ‘SelectionSort’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ./test
[==========] Running 5 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 3 tests from VectorContainerTest
[ RUN      ] VectorContainerTest.AddElement
[       OK ] VectorContainerTest.AddElement (0 ms)
[ RUN      ] VectorContainerTest.PrintTest
1 2 [       OK ] VectorContainerTest.PrintTest (0 ms)
[ RUN      ] VectorContainerTest.SwapTest
[       OK ] VectorContainerTest.SwapTest (0 ms)
[----------] 3 tests from VectorContainerTest (0 ms total)

[----------] 2 tests from ListContainerTest
[ RUN      ] ListContainerTest.AddElement
[       OK ] ListContainerTest.AddElement (0 ms)
[ RUN      ] ListContainerTest.SwapTest
[       OK ] ListContainerTest.SwapTest (0 ms)
[----------] 2 tests from ListContainerTest (0 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 2 test suites ran. (1 ms total)
[  PASSED  ] 5 tests.
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:17:1: error: invalid use of qualified-name ‘SelectionSort::SelectionSortTest_DefaultTest_Test::test_info_’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:17:1: error: cannot define member function ‘SelectionSort::SelectionSortTest_DefaultTest_Test::TestBody’ within ‘SelectionSort’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim unit_test.cpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ls
bin             CMakeFiles           CMakeLists.txt  googletest  lib                ListContainer_test.hpp  README.md          SelectionSort_test.hpp  test           VectorContainer.hpp
CMakeCache.txt  cmake_install.cmake  container.hpp   lab-04      ListContainer.hpp  Makefile                SelectionSort.hpp  sort.hpp                unit_test.cpp  VectorContainer_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
In file included from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/googletest/googletest/include/gtest/gtest.h:62:0,
                 from /home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:1:
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:17:1: error: invalid use of qualified-name ‘SelectionSort::SelectionSortTest_DefaultTest_Test::test_info_’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/SelectionSort_test.hpp:17:1: error: cannot define member function ‘SelectionSort::SelectionSortTest_DefaultTest_Test::TestBody’ within ‘SelectionSort’
 TEST(SelectionSortTest, DefaultTest) {
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ ls
bin             CMakeFiles           CMakeLists.txt  googletest  lib                ListContainer_test.hpp  README.md          SelectionSort_test.hpp  test           VectorContainer.hpp
CMakeCache.txt  cmake_install.cmake  container.hpp   lab-04      ListContainer.hpp  Makefile                SelectionSort.hpp  sort.hpp                unit_test.cpp  VectorContainer_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim unit_test.cpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim unit_test.cpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected ‘}’ at end of input
 }
 ^
/home/csmajs/jtorr113/lab-05-strategy-pattern-jo-an/unit_test.cpp:17:1: error: expected unqualified-id at end of input
CMakeFiles/test.dir/build.make:62: recipe for target 'CMakeFiles/test.dir/unit_test.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/unit_test.cpp.o] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort_test.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
CMakeFiles/test.dir/unit_test.cpp.o: In function `SelectionSort::SelectionSort()':
unit_test.cpp:(.text._ZN13SelectionSortC2Ev[_ZN13SelectionSortC5Ev]+0x14): undefined reference to `Sort::Sort()'
collect2: error: ld returned 1 exit status
CMakeFiles/test.dir/build.make:84: recipe for target 'test' failed
make[2]: *** [test] Error 1
CMakeFiles/Makefile2:72: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:129: recipe for target 'all' failed
make: *** [all] Error 2
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim sort.hpp
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/unit_test.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git pull

(gnome-ssh-askpass:5256): Gtk-WARNING **: 12:58:07.157: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': Torres2235

(gnome-ssh-askpass:5262): Gtk-WARNING **: 12:58:09.510: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://Torres2235@github.com': 
remote: Enumerating objects: 16, done.
remote: Counting objects: 100% (16/16), done.
remote: Compressing objects: 100% (6/6), done.
remote: Total 13 (delta 8), reused 12 (delta 7), pack-reused 0
Unpacking objects: 100% (13/13), done.
From https://github.com/cs100/lab-05-strategy-pattern-jo-an
   12797ac..821c38b  master     -> origin/master
Updating 12797ac..821c38b
error: Your local changes to the following files would be overwritten by merge:
	sort.hpp
	unit_test.cpp
Please, commit your changes or stash them before you can merge.
Aborting
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git pull -f

(gnome-ssh-askpass:5827): Gtk-WARNING **: 12:59:30.950: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': Torres2235

(gnome-ssh-askpass:5840): Gtk-WARNING **: 12:59:33.467: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://Torres2235@github.com': 
Updating 12797ac..821c38b
error: Your local changes to the following files would be overwritten by merge:
	sort.hpp
	unit_test.cpp
Please, commit your changes or stash them before you can merge.
Aborting
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git fetch

(gnome-ssh-askpass:6035): Gtk-WARNING **: 13:00:07.424: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': Torres2235

(gnome-ssh-askpass:6039): Gtk-WARNING **: 13:00:09.254: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://Torres2235@github.com': 
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ git pull

(gnome-ssh-askpass:6077): Gtk-WARNING **: 13:00:14.724: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': Torres2235

(gnome-ssh-askpass:6088): Gtk-WARNING **: 13:00:16.557: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://Torres2235@github.com': 
Updating 12797ac..821c38b
error: Your local changes to the following files would be overwritten by merge:
	sort.hpp
	unit_test.cpp
Please, commit your changes or stash them before you can merge.
Aborting
[jtorr113@hammer lab-05-strategy-pattern-jo-an]$ vim SelectionSort.hpp 


#include "container.hpp"
#include "sort.hpp"
#include <iostream>

class SelectionSort : public Sort {
        public:
                SelectionSort() {};

                virtual void sort(Container* newContainer) {
                        int i, j, start;
                        int size = newContainer->size();
                        for(i = size-1; i > 0; i--) {
                                start = 0;
                                for(j = 1; j <= i; j++) {
                                        if(newContainer->at(j)->evaluate() > newContainer->at(start)->evaluate()) {
                                                start = j;
                                        }
                                }
                                newContainer->swap(start,i);
                        }
        }
"SelectionSort.hpp" 27L, 563C                                                  
