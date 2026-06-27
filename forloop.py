array = ["cat.jpg", "dog.jpg", "Lion.jpg", "tiger.jpg"]

for i in array:
    if i == "dog.jpg":
        continue
    print(f"found {i}")