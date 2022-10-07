# IP lectures created through MARP

The source file is just a markdown file that has pairing `CSS` file for themes and styling. 

From the markdown file, we can create `PDF`, `HTML` and `PPTX` files to share with students.

To do so, compile the slides using:

```
marp --html filename.md -o filename.format
```
`--html` tag is necessary as we are using some HTML elements in the files (font coloring etc.) and need that for rendering

`--pptx` tag is used to generate a powerpoint presentation

`--bespoke.transition --preview` tags are needed to enable slide transitions

In Chrome `chrome://flags` the `documentTransition API` needs to be enabled to take this effect.

## Useful Links for Documentation

[marp]: https://marp.app/
[marp cli]: https://github.com/marp-team/marp-cli
[Github Discussions]: https://github.com/orgs/marp-team/discussions
[]