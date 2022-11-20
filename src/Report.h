#include <Arduino.h>

class Report
{
    public:
        Report(Stream *stream, bool iDebug = false);
        void prettyPrint();
        Stream *serial;
        bool debug = false;
        int num = 0;
        int ok;
        int ntr;
        int inv;
        int ko;
        int tot;
};
