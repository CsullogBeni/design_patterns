#include <iostream>
#include "TextEditor.hpp"
#include "CareTaker.hpp"

/**
 * @brief Main function to demonstrate the Memento design pattern.
 *
 * This function showcases the Memento design pattern by creating a TextEditor
 * object and a CareTaker object. It uses the TextEditor to add some text and
 * then invokes the Backup operation on the CareTaker to save the text state
 * of the TextEditor. After that, it undoes all of the changes by calling the
 * Undo operation on the CareTaker.
 */
int main() {
    TextEditor editor;
    CareTaker caretaker(&editor);

    editor.Write("Hello, ");
    caretaker.Backup();

    editor.Write("world!");
    caretaker.Backup();

    editor.Write(" This is a Memento pattern example.");
    caretaker.Backup();

    std::cout << "\nUndoing changes:\n";
    caretaker.Undo();
    caretaker.Undo();
    caretaker.Undo();
    caretaker.Undo();

    return 0;
}
