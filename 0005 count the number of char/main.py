def count_number_of_char(input_string,start_array,ending_array,target_char):
    result = input_string[start_array:ending_array].count(target_char)
    return print("The number of",target_char,"between array",input_string, "in place",start_array,"and",ending_array,"is",result)

if __name__ == "__main__":
    count_number_of_char("AABBBCCCD",1,5,"B")
    
    
    
    
##################################################################### 
# The number of B between array AABBBCCCD in place 1 and 5 is 3     #
#####################################################################
