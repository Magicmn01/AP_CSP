# AP Mad Libs
adjective = input("can you give me a adjective? ").strip()
noun = input("can you give me a animal? ").strip().capitalize()
verb = input("can you give me a verb in past tense? ").strip()
adverb = input("can you give me a adverb? ").strip()
another_AD = input("can you give me another adjective? ").strip()
another_noun = input("can you give me another noun? ").strip().capitalize()

sentence = "Today I went to the zoo. I saw a(n) " + adjective + " " + noun + " jumping up and down in its tree. He " + adverb + " " + verb + " through the large tunnel that led to its " + another_AD + " " + another_noun + "."
print(sentence)