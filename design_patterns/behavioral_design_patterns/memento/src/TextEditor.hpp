#pragma once

#include <iostream>


/**
 * @class TextEditor
 * @brief The TextEditor class is a part of the Memento design pattern
 *        demonstration. It represents a text editor that can save and restore
 *        its state.
 *
 * The TextEditor class is a part of the Memento design pattern demonstration.
 * It represents a text editor that can save and restore its state. It has a
 * private field for the text content and provides public methods to write
 * text, save the content as a memento and restore the content from a memento.
 */
class TextEditor
{
private:

    /**
     * @brief The content of the text editor.
     *
     * The content of the text editor. It is a private field that can be
     * accessed only through the public methods of the TextEditor class.
     */
    std::string content;

public:

    /**
     * @class Memento
     * @brief The Memento class is a part of the Memento design pattern
     *        demonstration. It represents a memento that stores the state of
     *        the TextEditor class.
     *
     * The Memento class is a part of the Memento design pattern demonstration.
     * It represents a memento that stores the state of the TextEditor class. It
     * has a private field for the state and provides public methods to get the
     * state.
     */
    class Memento
    {
    private:

        /**
         * @brief The state of the TextEditor class.
         *
         * The state of the TextEditor class. It is a private field that can be
         * accessed only through the public methods of the Memento class.
         */
        const std::string state;

        /**
         * @brief Friend class declaration.
         *
         * The TextEditor class is a friend of the Memento class. It can access
         * the private field of the Memento class.
         */
        friend class TextEditor;
    public:

        /**
         * @brief Constructor.
         *
         * The constructor of the Memento class. It initializes the state of the
         * Memento class with the given argument.
         *
         * @param state The state of the TextEditor class.
         */
        Memento(const std::string& state) : state(state) {}

        /**
         * @brief Get the state of the TextEditor class.
         *
         * Get the state of the TextEditor class. It returns the state of the
         * TextEditor class.
         *
         * @return The state of the TextEditor class.
         */
        std::string GetState() const { return state; }
    };

    /**
     * @brief Write the given text to the text editor.
     *
     * Write the given text to the text editor. It appends the given text to the
     * content of the text editor and prints the current content of the text
     * editor to the console.
     *
     * @param text The text to write to the text editor.
     */
    void Write(const std::string& text) { content += text; std::cout << "Current content: " << content << "\n"; };

    /**
     * @brief Save the content of the text editor as a memento.
     *
     * Save the content of the text editor as a memento. It creates a new
     * Memento object with the current content of the text editor and returns it.
     *
     * @return A new Memento object with the current content of the text editor.
     */
    Memento Save() { std::cout << "Saving state: " << content << "\n"; return Memento(content); };

    /**
     * @brief Restore the content of the text editor from a memento.
     *
     * Restore the content of the text editor from a memento. It sets the content
     * of the text editor to the state of the given memento and prints the
     * restored state to the console.
     *
     * @param memento The memento that contains the state to restore.
     */
    void Restore(const Memento& memento) { content = memento.state; std::cout << "State restored to: " << content << "\n"; };
};
