# AP Mad Libs
adjective=input("can you me a adjective? ").strip()
noun = input("can you me a noun? ").strip().capitalize()
verb = input("can you me a verb in past tense? ").strip()
adverb = input("can you me a adverb? ").strip()
another_AD = input("can you me another adjective? ").strip()
another_noun = input("can you me another noun? ").strip().capitalize()

sentence = "Today I went to the zoo. I saw a(n) " + adjective + noun + "jumping up and down in its tree. He " + verb + adverb + "through the large tunnel that led to its " + another_AD + another_noun + "."
print(sentence)