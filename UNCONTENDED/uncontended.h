#ifndef UNCONTENDED_H
#define UNCONTENDED_H

//UNCONTENDED RAM

//new
unsigned char multiply2numbers (unsigned char A, unsigned char B)
{
	return A * B;
}


//new
void Border_test (void)
{
    if (in_key_pressed( IN_KEY_SCANCODE_0 ))
    {
        zx_border(INK_BLACK);// = 0 = black
    }
    if (in_key_pressed( IN_KEY_SCANCODE_1 ))
    {
        border_Change_contended(1);// = 1 = blue
    }
    if (in_key_pressed( IN_KEY_SCANCODE_2 ))
    {
         border_Change_uncontended(2);// = 2 = red
    }
    if (in_key_pressed( IN_KEY_SCANCODE_3 ))
    {
        border_Change_RAM0(3);// = 3 = magenta
    }
    if (in_key_pressed( IN_KEY_SCANCODE_4 ))
    {
        border_Change_RAM0(4);// = 4 = green
    }
    if (in_key_pressed( IN_KEY_SCANCODE_5 ))
    {
        border_Change_RAM0(5);// = 5 = cyan
    }
    if (in_key_pressed( IN_KEY_SCANCODE_6 ))
    {
        border_Change_RAM0(6);// = 3 = yellow
    }
    if (in_key_pressed( IN_KEY_SCANCODE_7 ))
    {
        zx_border(INK_WHITE);// = 7 = white
    }

}

#endif
