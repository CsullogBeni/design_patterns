#pragma once

#include <iostream>
#include <stack>
#include "TextEditor.hpp"


/**
 * @class CareTaker
 * @brief A class that is responsible for saving and restoring the state of a TextEditor object.
 *
 * This class is used to save and restore the state of a TextEditor object. It
 * uses a stack to save the state of the TextEditor object and can be used to
 * undo any changes made to the TextEditor object.
 */
class CareTaker 
{
private:
    /**
     * @brief A pointer to the TextEditor object.
     *
     * This pointer is used to access the TextEditor object and to save and
     * restore its state.
     */
    TextEditor* editor;
    /**
     * @brief A stack of Memento objects.
     *
     * This stack is used to store the state of the TextEditor object. Each
     * time the state of the TextEditor object is saved, a Memento object is
     * created and pushed onto the stack. The state of the TextEditor object
     * can be restored by popping a Memento object off the stack and passing
     * it to the Restore method of the TextEditor object.
     */
    std::stack<TextEditor::Memento> history;
public:
    /**
     * @brief The constructor.
     *
     * The constructor is used to initialize the CareTaker object. It takes a
     * pointer to a TextEditor object as an argument and sets the editor field
     * to the passed pointer.
     *
     * @param editor A pointer to a TextEditor object.
     */
    CareTaker(TextEditor* editor) : editor(editor) {}

    /**
     * @brief Save the state of the TextEditor object.
     *
     * This method is used to save the state of the TextEditor object. It
     * creates a Memento object and pushes it onto the stack.
     */
    void Backup() {
        history.push(editor->Save());
    }

    /**
     * @brief Restore the state of the TextEditor object.
     *
     * This method is used to restore the state of the TextEditor object. It
     * pops a Memento object off the stack and passes it to the Restore method
     * of the TextEditor object.
     */
    void Undo() {
        if (!history.empty()) {
            TextEditor::Memento memento = history.top();
            history.pop();
            editor->Restore(memento);
        }
    }
};
