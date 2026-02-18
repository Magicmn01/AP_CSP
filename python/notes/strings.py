name = input("what is thy name?: ").strip().title()

print("hello", name[0:3])

sentence = "the quick brown fox jumps over the lazy dog."
print(sentence)
word = input("pick a word from the sentence to change: ").strip().lower()
new_word = input("what is the new word: ").strip().lower()
start = sentence.find(word)
sentence = sentence.replace(word, new_word)
"""print(sentence[start:start+len(word)])"""
print(sentence)
print(name + "! did you know?", sentence)
