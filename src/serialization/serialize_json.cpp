#include "serialize_json.h"

int serialize_json(string _file, Message *_message, string *_str){

    // Read the JSON file into a string
    std::ifstream file(_file);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << _file << std::endl;
        return -1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf(); // Read the file into a string stream
    file.close();

    std::string json_string = buffer.str(); 

    auto status = util::JsonStringToMessage(json_string, _message);

    if (!status.ok()) {
        std::cerr << "Failed to parse JSON: " << status.ToString() << std::endl;
        return -1;
    }

    if (!_message->SerializeToString(_str)) {
        cerr << "Failed to serialize Protobuf message to string." << endl;
        return -1;
    }

    return 0;
}