/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to a char.
 * @to: Pointer to a char.
 *
 * Description: The function sets the value of a double pointer
 *              to a char to the address of a pointer to a char.
 */
void set_string(char **s, char *to)
{
*s = to;
}
