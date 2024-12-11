#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <google/protobuf/util/json_util.h>
using namespace std;
using namespace google::protobuf;
int serialize_json(string _file, Message *_message, string *_str);
int serialize_json(string _file, Message *_message);