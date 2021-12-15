//
// Created by japru on 13/12/2021.
//
#include "pick_from_json.h"
#include <fstream>
#include <vector>
#include <string>
#include "rapidjson/document.h"
#include "rapidjson/istreamwrapper.h"
#include "random.h"

std::vector<std::string> pick_questions(const std::string &json_file) {
    std::ifstream ifs("Questions//" + json_file + ".json");
    rapidjson::IStreamWrapper isw(ifs);
    rapidjson::Document d;
    d.ParseStream(isw);
    unsigned char question_number = randint(1, d.MemberCount() + 1);
    unsigned char iterator = 1;
    std::vector<std::string> question_info;
    for (auto i = d.MemberBegin(); i != d.MemberEnd(); ++i, iterator++) {
        if (iterator == question_number) {
            question_info.emplace_back(i->name.GetString());
            question_info.emplace_back(i->value.GetString());
            return question_info;
        }
    }
    return {};
}