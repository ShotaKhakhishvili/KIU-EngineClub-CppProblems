#include <string>
#include <cctype>

std::string normalizeLine(const std::string& input)
{
    std::string result;
    bool capitalizeNext = true;
    bool started = false;

    for (char ch : input)
    {
        unsigned char c = static_cast<unsigned char>(ch);

        // ---- whitespace ----
        if (std::isspace(c))
        {
            if (!result.empty() && result.back() != ' ')
                result += ' ';
            continue;
        }

        // ---- letters ----
        if (std::isalpha(c))
        {
            if (capitalizeNext)
            {
                result += std::toupper(c);
                capitalizeNext = false;
            }
            else
            {
                result += std::tolower(c);
            }

            started = true;
            continue;
        }

        // ---- digits ----
        if (std::isdigit(c))
        {
            result += c;
            capitalizeNext = false;
            started = true;
            continue;
        }

        // ---- punctuation ----
        if (ch == '.' || ch == '!' || ch == '?')
        {
            if (!started)
                continue; // skip leading punctuation

            // collapse sequences (keep last)
            if (!result.empty() &&
                (result.back() == '.' || result.back() == '!' || result.back() == '?'))
            {
                result.back() = ch;
            }
            else
            {
                result += ch;
            }

            capitalizeNext = true;
            continue;
        }

        // ignore other chars
    }

    // trim trailing space
    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    if (result.empty())
        return "Empty";

    return result;
}