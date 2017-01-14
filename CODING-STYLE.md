Glabels Coding Style
====================

This file describes the coding style used in all glabels source code.  Any patches or pull requests should
adhere to this style.


Tabs vs. Spaces
---------------

Tabs are only used at the beginning of a line, and only used to express indentation level.  Spaces are used
for any other type of vertical alignment, e.g. aligning function arguments.  This ensures that the code
displays correctly everywhere, regardless of the viewer's tab size, and does not inflict the viewer with my
choice of tab size (8 spaces).

I use the emacs smart-tabs-mode to automatically enforce this.
See https://www.emacswiki.org/emacs/SmartTabs for more information.


Indentation Style
-----------------

Glabels code uses the Allman style (a.k.a "BSD Style") of code indentation.  I.e. the brace associated with a
control statement is placed on the next line, indented to the same level as the control statement.
Statements within the braces are indented to the next level.

```
while ( condition )
{
	something();
	somethingElse();
}

if ( condition2 )
{
	handleCondition2();
}
else
{
	somethingElse();
}
```

Also applies to class and namespace declaration statements.

See https://en.wikipedia.org/wiki/Indent_style#Allman_style for more information.


File Organization
-----------------

Generally code is organized into modules.  Usually a module defines a single class or a small namespace of
functions/constants/etc.  A module is defined by two files: a header file (its specification) and an
implementation file.  Header filenames have a ".h" extension and implementation filenames have a ".cpp"
extension.


### Self-contained Headers

Header files should be self-contained.  I.e. they should not require any prerequisite includes.  To enforce
this requirement, an implementation file shall include its header file before any other includes.


### Multiple Inclusion Guards

All header files should have an ifndef guard to prevent multiple inclusion.

```
#ifndef ns_Module_h
#define ns_Module_h

...

#endif // ns_Module_h
```

### Include Directives

Header files should be included in the following order.

1. header file for this module (e.g. this would be "Foo.h" in "Foo.cpp").
2. C system header files (preference is for the C++ version if available, e.g. <cmath> instead of <math.h>.
3. C++ system header files (e.g. STL files)
4. Qt header files
5. Other libraries' header files
6. Other glabels header files.

Paths used in include directives should always be relative to either the glabels source directory or an
appropriate base directory for each library.  They should NEVER include UNIX directory shortcuts such as "."
(the current directory) or ".." (the parent directory).

Angle brackets ("<>") should be used for inclusion of all external header files (such as C/C++ and Qt
header files). Double quotes should be used for all glabels header files.

Do not use forward declarations to any external entities.  Use the appropriate include directive instead.
