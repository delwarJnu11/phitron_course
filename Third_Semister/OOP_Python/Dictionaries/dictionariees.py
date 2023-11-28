car = {
    "name": "Toyata",
    "model": "A0521",
    "color": "red",
    "price": 100000,
    "rating": 4.5,
    "year": 2022,
}

print(car)
# access specific value from a dictionaries
print(car["name"])
# Access value using get method
model = car.get("model")
print(model)

# get keys
all_key = car.keys()
print(all_key)

# get_values
all_values = car.values()
print(all_values)
car["year"] = 2023
print(all_values)

# get items
x = car.items()
print(x)
car["break"] = "CBS"
print(x)

if "model" in car:
    print("Yes, Model property is exists!")
else:
    print("Sorry!!! This property not exists in this car!")
