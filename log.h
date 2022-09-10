#pragma once
#include<iostream>
//наш logging клас на випадок винекнення помилки
//всі помилки і несправносі заносяться в файл log.txt
//після компіляції їх можна переглянути

enum LogPriority {
    TraceP, DebugP, InfoP, WarnP, ErrorP, FatalP
};

class BasicLogger {
private:
    static LogPriority verbosity;
    static const char* filepath;

public:
    static void Log(LogPriority priority, const char* message,int data) {
        if (priority >= verbosity) 
        {
            std::ofstream FILE(filepath, std::ios_base::app);

            switch (priority) {
            case TraceP: FILE << "[Trace]: "; break;
            case DebugP: FILE << "[Debug]: "; break;
            case InfoP: FILE << "[Info]: "; break;
            case WarnP: FILE << "[Warn]: "; break;
            case ErrorP: FILE << "[Error]: "; break;
            case FatalP: FILE << "[Fatal]: "; break;
            }
            FILE << data << "\n";
            FILE << message << "\n";
            FILE.close();
            
        }
    }
};
LogPriority BasicLogger::verbosity = TraceP;
const char* BasicLogger::filepath = "log.txt";