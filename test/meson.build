doctest_inc = include_directories('doctest')

factorial = executable(
    'factorial',
    ['factorial.cpp', '../src/factorial.cpp'],
    include_directories: [inc, doctest_inc]
    )

test('Factorial', factorial)