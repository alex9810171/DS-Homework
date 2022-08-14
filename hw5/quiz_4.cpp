/* Consider the following grammer:
	
	<G> = empty string | <E> | <V><E> | <E><G><V>
	<E> = &|#
	<V> = W|A

	Write pseudocode for a recursive function that returns true 
	if a string is in this language and returns false otherwise. 
*/

isIn (w){
	if(w is a empty string){
		return true;
	}
	else if(w == & || w == #){
		return true;
	}
	else if((length of w == 2)&&(first character of w is W or A)&&(last character of w is & or #)){
		return true;
	}
	else if((first character of w is & or #)&&(last character of w is W or A)){
		return isIn(w minus its fist and last characters);
	}
	else{
		return false;
	}
}
	
