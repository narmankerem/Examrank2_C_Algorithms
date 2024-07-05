unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
	// 4 bit sağa kaydır. 4 bit sola kaydır. Sonra or'la.	
}