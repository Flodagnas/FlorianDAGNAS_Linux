package main

import (
	"flag"
	"fmt"
	"io/ioutil"
	"github.com/01-edu/public/blob/master/subjects/ascii-art/standard.txt"
)

var (
	s string
	w bool
)

func main() {
	flag.StringVar(&s, "s", "art - zs5460", "the string to be converted ")
	flag.BoolVar(&w, "w", false, "write result to file ")
	flag.Parse()

	banner := art.String(s)
	if w {
		code := fmt.Sprintf("banner := `\n%s\n`", banner)
		_ = ioutil.WriteFile("banner.txt", []byte(code), 0666)
	} else {
		fmt.Println(banner)
	}
}
