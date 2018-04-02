Things to Remember
^^^^^^^^^^^^^^^^^^

* During template type deduction, arguments that are references are treated as
  non-references, i.e. their reference-ness is ignored.

* When deducing types for universal reference parameters, lvalue arguments get
  special treatment and are deduced as lvalue references. It’s the only situation
  in template type deduction where T is deduced to be a reference

* When deducing types for by-value parameters, const or volatile arguments
  are treated as non-const and non-volatile.

* During template type deduction, arguments that are array or function names
  decay to pointers, unless they're used to initialize references.
