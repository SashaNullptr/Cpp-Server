#include "pistache/endpoint.h"
#include "endpoint.h"

using namespace Pistache;

void HelloHandler::onRequest(const Http::Request& request, Http::ResponseWriter response) {
    response.send(Http::Code::Ok, "Hello, World");
};