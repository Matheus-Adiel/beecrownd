line = input().split()

for i in range(len(line)):
    line[i] = int(line[i])

nums = []

for i in range(len(line)):
    nums.append(line[i])

for i in range(len(nums)):
    for j in range(len(nums) - 1):
        if nums[j] > nums[j + 1]:
            aux = nums[j]
            nums[j] = nums[j + 1]
            nums[j + 1] = aux

for i in range(len(nums)):
    print(nums[i])

print()

for i in range(len(line)):
    print(line[i])
