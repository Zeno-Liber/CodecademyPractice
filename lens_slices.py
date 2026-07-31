toppings = [
  "pepperoni",
  "pineapple",
  "cheese",
  "sausage",
  "olives",
  "anchovies",
  "mushrooms"
]

prices = [
  2,
  6,
  1,
  3,
  2,
  7,
  2
]

num_two_dollar_slices = prices.count(2)
print(f"We sell {num_two_dollar_slices}, $2 slices here.")
print("\n")

num_pizzas = len(prices)
print(f"We sell {num_pizzas} different kinds of pizza!")
print("\n")

pizza_and_prices = [
    [2, "pepperoni"],
    [6, "pineapple"],
    [1, "cheese"],
    [3, "sausage"],
    [2, "olives"],
    [7, "anchovies"],
    [2, "mushrooms"]
]

print(pizza_and_prices)
print("\n")

pizza_and_prices.sort()
print(pizza_and_prices)

cheapest_pizza = pizza_and_prices[0]
priciest_pizza = pizza_and_prices[-1]

print("\n")

print(f"The cheapest slice would be the {cheapest_pizza} pizza.")
print("\n")

print(f"The most expensive slice would be the {priciest_pizza} pizza.")

pizza_and_prices.remove([7, "anchovies"])

print("\n")

pizza_and_prices[-3] = [2.5, "peppers"]
print(pizza_and_prices)

print("\n")

three_cheapest = pizza_and_prices[:3]
print(f"The three cheapest pizzas are: {three_cheapest}")
