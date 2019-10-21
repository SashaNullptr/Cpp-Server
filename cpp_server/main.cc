#include "pistache/endpoint.h"
#include "endpoint/endpoint.h"

using namespace Pistache;

int main() {
    Http::listenAndServe<HelloHandler>("*:9080");
}