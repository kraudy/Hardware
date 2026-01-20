from adders import HalfAdder

def test_HalfAdder():
  Half1 = HalfAdder()

  truth_table = [
    (0, 0, 0, 0),
    (0, 1, 1, 0),
    (1, 0, 1, 0),
    (1, 1, 0, 1)
  ]

  for a, b, sum, cout in truth_table:
    assert Half1(a, b) == (sum, cout), f"Failed: {a} Half Add {b} -> {sum},{cout}"
  
  print("test HalfAdder successful")

if __name__ == "__main__":
  test_HalfAdder()