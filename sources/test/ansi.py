class fg:
    black = "\u001b[30m"
    red = "\u001b[31m"
    green = "\u001b[32m"
    yellow = "\u001b[33m"
    blue = "\u001b[34m"
    magenta = "\u001b[35m"
    cyan = "\u001b[36m"
    white = "\u001b[37m"

    def rgb(r, g, b):
        return f"\u001b[38;2;{r};{g};{b}m"

class bg:
    black = "\u001b[40m"
    red = "\u001b[41m"
    green = "\u001b[42m"
    yellow = "\u001b[43m"
    blue = "\u001b[44m"
    magenta = "\u001b[45m"
    cyan = "\u001b[46m"
    white = "\u001b[47m"

    def rgb(r, g, b):
        return f"\u001b[48;2;{r};{g};{b}m"

class util:
    reset = "\u001b[0m"
    bold = "\u001b[1m"
    underline = "\u001b[4m"
    reverse = "\u001b[7m"
    clear = "\u001b[2J"
    clearline = "\u001b[2K"
    up = "\u001b[1A"
    down = "\u001b[1B"
    right = "\u001b[1C"
    left = "\u001b[1D"
    nextline = "\u001b[1E"
    prevline = "\u001b[1F"
    top = "\u001b[0;0H"
