1. Deducing Types
=================
Item 1: Understand template type deduction
------------------------------------------

.. include:: ../Item01_Understand_template_type_deduction/01-pinch_of_pseudocode.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/01-pinch_of_pseudocode.cpp
   :language: cpp
   :caption: 01-pinch_of_pseudocode.cpp
   :start-after: */

Case 1: ParamType is a Reference or Pointer, but not a Universal Reference
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. include:: ../Item01_Understand_template_type_deduction/02-case1_const.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/02-case1_const.cpp
   :language: cpp
   :caption: 02-case1_const.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/03-case1_non_const.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/03-case1_non_const.cpp
   :language: cpp
   :caption: 03-case1_non_const.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/04-case1_pointer.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/04-case1_pointer.cpp
   :language: cpp
   :caption: 04-case1_pointer.cpp
   :start-after: */

Case 2: ParamType is a Universal Reference
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. include:: ../Item01_Understand_template_type_deduction/05-case2_uref.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/05-case2_uref.cpp
   :language: cpp
   :caption: 05-case2_uref.cpp
   :start-after: */

Case 3: ParamType is Neither a Pointer nor a Reference
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. include:: ../Item01_Understand_template_type_deduction/06-case3_pass_by_value.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/06-case3_pass_by_value.cpp
   :language: cpp
   :caption: 06-case3_pass_by_value.cpp
   :start-after: */

Array Arguments
^^^^^^^^^^^^^^^

.. include:: ../Item01_Understand_template_type_deduction/07-array-to-pointer_decay_rule.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/07-array-to-pointer_decay_rule.cpp
   :language: cpp
   :caption: 07-array-to-pointer_decay_rule.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/08-arrays_by_value.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/08-arrays_by_value.cpp
   :language: cpp
   :caption: 08-arrays_by_value.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/09-arrays_by_reference.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/09-arrays_by_reference.cpp
   :language: cpp
   :caption: 09-arrays_by_reference.cpp
   :start-after: */

Function Arguments
^^^^^^^^^^^^^^^^^^

.. include:: ../Item01_Understand_template_type_deduction/10-function-to-pointer_decay_rule.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/10-function-to-pointer_decay_rule.cpp
   :language: cpp
   :caption: 10-function-to-pointer_decay_rule.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/11-deduce_nb_array_elements.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/11-deduce_nb_array_elements.cpp
   :language: cpp
   :caption: 11-deduce_nb_array_elements.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/12-array_and_pointer_parameter_equivalence.cpp
   :start-after: /*
   :end-before: */

.. literalinclude:: ../Item01_Understand_template_type_deduction/12-array_and_pointer_parameter_equivalence.cpp
   :language: cpp
   :caption: 12-array_and_pointer_parameter_equivalence.cpp
   :start-after: */

.. include:: ../Item01_Understand_template_type_deduction/13-things_to_remember.rst
