#include <Arduino.h>

#include "Report.h"

Report::Report (Stream *stream, bool iDebug = false)
{
    serial = stream;
    debug = iDebug;
}

/**
 * Print the data
 */
void Report::prettyPrint()
{
    ko = ntr + inv;
    tot = ok + ko;
    serial -> println(printf("--- Report n°%i ---", num));
    serial -> println(printf("name  abs   rel");
    serial -> println(printf("ok    %i    %f", ok, tot / ok * 100);
    serial -> println(printf("ko    %i    %f", ko, tot / ko * 100);
    serial -> println();
    serial -> println(printf("ntr   %i    %f", ntr, tot / ntr * 100);
    serial -> println(printf("inv   %i    %f", inv, tot / inv * 100);
    serial -> println(printf("-------------------");
    num++;
}