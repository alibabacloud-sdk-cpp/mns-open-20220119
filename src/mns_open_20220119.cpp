// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mns_open_20220119.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Mns-open20220119;

Alibabacloud_Mns-open20220119::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mns-open"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mns-open20220119::Client::getEndpoint(shared_ptr<string> productId,
                                                          shared_ptr<string> regionId,
                                                          shared_ptr<string> endpointRule,
                                                          shared_ptr<string> network,
                                                          shared_ptr<string> suffix,
                                                          shared_ptr<map<string, string>> endpointMap,
                                                          shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AuthorizeEndpointAclResponse Alibabacloud_Mns-open20220119::Client::authorizeEndpointAclWithOptions(shared_ptr<AuthorizeEndpointAclRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AuthorizeEndpointAclShrinkRequest> request = make_shared<AuthorizeEndpointAclShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->cidrList)) {
    request->cidrListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cidrList, make_shared<string>("CidrList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStrategy)) {
    query->insert(pair<string, string>("AclStrategy", *request->aclStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrListShrink)) {
    query->insert(pair<string, string>("CidrList", *request->cidrListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeEndpointAcl"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeEndpointAclResponse(callApi(params, req, runtime));
}

AuthorizeEndpointAclResponse Alibabacloud_Mns-open20220119::Client::authorizeEndpointAcl(shared_ptr<AuthorizeEndpointAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeEndpointAclWithOptions(request, runtime);
}

CreateEventRuleResponse Alibabacloud_Mns-open20220119::Client::createEventRuleWithOptions(shared_ptr<CreateEventRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEventRuleShrinkRequest> request = make_shared<CreateEventRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateEventRuleRequestEndpoint>(tmpReq->endpoint)) {
    request->endpointShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->endpoint, make_shared<string>("Endpoint"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEventRuleRequestEndpoints>>(tmpReq->endpoints)) {
    request->endpointsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->endpoints, make_shared<string>("Endpoints"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->eventTypes)) {
    request->eventTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->eventTypes, make_shared<string>("EventTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<vector<EventMatchRule>>>(tmpReq->matchRules)) {
    request->matchRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->matchRules, make_shared<string>("MatchRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryMode)) {
    query->insert(pair<string, string>("DeliveryMode", *request->deliveryMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointShrink)) {
    query->insert(pair<string, string>("Endpoint", *request->endpointShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointsShrink)) {
    query->insert(pair<string, string>("Endpoints", *request->endpointsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypesShrink)) {
    query->insert(pair<string, string>("EventTypes", *request->eventTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchRulesShrink)) {
    query->insert(pair<string, string>("MatchRules", *request->matchRulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventRule"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventRuleResponse(callApi(params, req, runtime));
}

CreateEventRuleResponse Alibabacloud_Mns-open20220119::Client::createEventRule(shared_ptr<CreateEventRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventRuleWithOptions(request, runtime);
}

CreateQueueResponse Alibabacloud_Mns-open20220119::Client::createQueueWithOptions(shared_ptr<CreateQueueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateQueueShrinkRequest> request = make_shared<CreateQueueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateQueueRequestDlqPolicy>(tmpReq->dlqPolicy)) {
    request->dlqPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dlqPolicy, make_shared<string>("DlqPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateQueueRequestTenantRateLimitPolicy>(tmpReq->tenantRateLimitPolicy)) {
    request->tenantRateLimitPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantRateLimitPolicy, make_shared<string>("TenantRateLimitPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->delaySeconds)) {
    query->insert(pair<string, long>("DelaySeconds", *request->delaySeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dlqPolicyShrink)) {
    query->insert(pair<string, string>("DlqPolicy", *request->dlqPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    query->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumMessageSize)) {
    query->insert(pair<string, long>("MaximumMessageSize", *request->maximumMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageRetentionPeriod)) {
    query->insert(pair<string, long>("MessageRetentionPeriod", *request->messageRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pollingWaitSeconds)) {
    query->insert(pair<string, long>("PollingWaitSeconds", *request->pollingWaitSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateQueueShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateQueueShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantRateLimitPolicyShrink)) {
    query->insert(pair<string, string>("TenantRateLimitPolicy", *request->tenantRateLimitPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityTimeout)) {
    query->insert(pair<string, long>("VisibilityTimeout", *request->visibilityTimeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueue"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueueResponse(callApi(params, req, runtime));
}

CreateQueueResponse Alibabacloud_Mns-open20220119::Client::createQueue(shared_ptr<CreateQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQueueWithOptions(request, runtime);
}

CreateTopicResponse Alibabacloud_Mns-open20220119::Client::createTopicWithOptions(shared_ptr<CreateTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateTopicRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateTopicRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    body->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMessageSize)) {
    body->insert(pair<string, long>("MaxMessageSize", *request->maxMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    body->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTopicResponse(callApi(params, req, runtime));
}

CreateTopicResponse Alibabacloud_Mns-open20220119::Client::createTopic(shared_ptr<CreateTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTopicWithOptions(request, runtime);
}

DeleteEventRuleResponse Alibabacloud_Mns-open20220119::Client::deleteEventRuleWithOptions(shared_ptr<DeleteEventRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventRule"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventRuleResponse(callApi(params, req, runtime));
}

DeleteEventRuleResponse Alibabacloud_Mns-open20220119::Client::deleteEventRule(shared_ptr<DeleteEventRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventRuleWithOptions(request, runtime);
}

DeleteQueueResponse Alibabacloud_Mns-open20220119::Client::deleteQueueWithOptions(shared_ptr<DeleteQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQueue"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQueueResponse(callApi(params, req, runtime));
}

DeleteQueueResponse Alibabacloud_Mns-open20220119::Client::deleteQueue(shared_ptr<DeleteQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQueueWithOptions(request, runtime);
}

DeleteTopicResponse Alibabacloud_Mns-open20220119::Client::deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTopicResponse(callApi(params, req, runtime));
}

DeleteTopicResponse Alibabacloud_Mns-open20220119::Client::deleteTopic(shared_ptr<DeleteTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTopicWithOptions(request, runtime);
}

DisableEndpointResponse Alibabacloud_Mns-open20220119::Client::disableEndpointWithOptions(shared_ptr<DisableEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableEndpoint"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableEndpointResponse(callApi(params, req, runtime));
}

DisableEndpointResponse Alibabacloud_Mns-open20220119::Client::disableEndpoint(shared_ptr<DisableEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableEndpointWithOptions(request, runtime);
}

EnableEndpointResponse Alibabacloud_Mns-open20220119::Client::enableEndpointWithOptions(shared_ptr<EnableEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableEndpoint"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableEndpointResponse(callApi(params, req, runtime));
}

EnableEndpointResponse Alibabacloud_Mns-open20220119::Client::enableEndpoint(shared_ptr<EnableEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableEndpointWithOptions(request, runtime);
}

GetEndpointAttributeResponse Alibabacloud_Mns-open20220119::Client::getEndpointAttributeWithOptions(shared_ptr<GetEndpointAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEndpointAttribute"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEndpointAttributeResponse(callApi(params, req, runtime));
}

GetEndpointAttributeResponse Alibabacloud_Mns-open20220119::Client::getEndpointAttribute(shared_ptr<GetEndpointAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEndpointAttributeWithOptions(request, runtime);
}

GetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::getQueueAttributesWithOptions(shared_ptr<GetQueueAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetQueueAttributesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<GetQueueAttributesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQueueAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQueueAttributesResponse(callApi(params, req, runtime));
}

GetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::getQueueAttributes(shared_ptr<GetQueueAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueueAttributesWithOptions(request, runtime);
}

GetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::getSubscriptionAttributesWithOptions(shared_ptr<GetSubscriptionAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubscriptionAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubscriptionAttributesResponse(callApi(params, req, runtime));
}

GetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::getSubscriptionAttributes(shared_ptr<GetSubscriptionAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubscriptionAttributesWithOptions(request, runtime);
}

GetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::getTopicAttributesWithOptions(shared_ptr<GetTopicAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetTopicAttributesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<GetTopicAttributesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTopicAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTopicAttributesResponse(callApi(params, req, runtime));
}

GetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::getTopicAttributes(shared_ptr<GetTopicAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicAttributesWithOptions(request, runtime);
}

ListQueueResponse Alibabacloud_Mns-open20220119::Client::listQueueWithOptions(shared_ptr<ListQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListQueueRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListQueueRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueue"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueueResponse(callApi(params, req, runtime));
}

ListQueueResponse Alibabacloud_Mns-open20220119::Client::listQueue(shared_ptr<ListQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQueueWithOptions(request, runtime);
}

ListSubscriptionByTopicResponse Alibabacloud_Mns-open20220119::Client::listSubscriptionByTopicWithOptions(shared_ptr<ListSubscriptionByTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointValue)) {
    query->insert(pair<string, string>("EndpointValue", *request->endpointValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubscriptionByTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubscriptionByTopicResponse(callApi(params, req, runtime));
}

ListSubscriptionByTopicResponse Alibabacloud_Mns-open20220119::Client::listSubscriptionByTopic(shared_ptr<ListSubscriptionByTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubscriptionByTopicWithOptions(request, runtime);
}

ListTopicResponse Alibabacloud_Mns-open20220119::Client::listTopicWithOptions(shared_ptr<ListTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTopicRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTopicRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTopic"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTopicResponse(callApi(params, req, runtime));
}

ListTopicResponse Alibabacloud_Mns-open20220119::Client::listTopic(shared_ptr<ListTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopicWithOptions(request, runtime);
}

RevokeEndpointAclResponse Alibabacloud_Mns-open20220119::Client::revokeEndpointAclWithOptions(shared_ptr<RevokeEndpointAclRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RevokeEndpointAclShrinkRequest> request = make_shared<RevokeEndpointAclShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->cidrList)) {
    request->cidrListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cidrList, make_shared<string>("CidrList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclStrategy)) {
    query->insert(pair<string, string>("AclStrategy", *request->aclStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrListShrink)) {
    query->insert(pair<string, string>("CidrList", *request->cidrListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeEndpointAcl"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeEndpointAclResponse(callApi(params, req, runtime));
}

RevokeEndpointAclResponse Alibabacloud_Mns-open20220119::Client::revokeEndpointAcl(shared_ptr<RevokeEndpointAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeEndpointAclWithOptions(request, runtime);
}

SetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::setQueueAttributesWithOptions(shared_ptr<SetQueueAttributesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetQueueAttributesShrinkRequest> request = make_shared<SetQueueAttributesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetQueueAttributesRequestDlqPolicy>(tmpReq->dlqPolicy)) {
    request->dlqPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dlqPolicy, make_shared<string>("DlqPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SetQueueAttributesRequestTenantRateLimitPolicy>(tmpReq->tenantRateLimitPolicy)) {
    request->tenantRateLimitPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantRateLimitPolicy, make_shared<string>("TenantRateLimitPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->delaySeconds)) {
    query->insert(pair<string, long>("DelaySeconds", *request->delaySeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dlqPolicyShrink)) {
    query->insert(pair<string, string>("DlqPolicy", *request->dlqPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    query->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumMessageSize)) {
    query->insert(pair<string, long>("MaximumMessageSize", *request->maximumMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageRetentionPeriod)) {
    query->insert(pair<string, long>("MessageRetentionPeriod", *request->messageRetentionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pollingWaitSeconds)) {
    query->insert(pair<string, long>("PollingWaitSeconds", *request->pollingWaitSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantRateLimitPolicyShrink)) {
    query->insert(pair<string, string>("TenantRateLimitPolicy", *request->tenantRateLimitPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->visibilityTimeout)) {
    query->insert(pair<string, long>("VisibilityTimeout", *request->visibilityTimeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetQueueAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetQueueAttributesResponse(callApi(params, req, runtime));
}

SetQueueAttributesResponse Alibabacloud_Mns-open20220119::Client::setQueueAttributes(shared_ptr<SetQueueAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setQueueAttributesWithOptions(request, runtime);
}

SetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::setSubscriptionAttributesWithOptions(shared_ptr<SetSubscriptionAttributesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetSubscriptionAttributesShrinkRequest> request = make_shared<SetSubscriptionAttributesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetSubscriptionAttributesRequestDlqPolicy>(tmpReq->dlqPolicy)) {
    request->dlqPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dlqPolicy, make_shared<string>("DlqPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SetSubscriptionAttributesRequestTenantRateLimitPolicy>(tmpReq->tenantRateLimitPolicy)) {
    request->tenantRateLimitPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantRateLimitPolicy, make_shared<string>("TenantRateLimitPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dlqPolicyShrink)) {
    query->insert(pair<string, string>("DlqPolicy", *request->dlqPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyStrategy)) {
    query->insert(pair<string, string>("NotifyStrategy", *request->notifyStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantRateLimitPolicyShrink)) {
    query->insert(pair<string, string>("TenantRateLimitPolicy", *request->tenantRateLimitPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSubscriptionAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSubscriptionAttributesResponse(callApi(params, req, runtime));
}

SetSubscriptionAttributesResponse Alibabacloud_Mns-open20220119::Client::setSubscriptionAttributes(shared_ptr<SetSubscriptionAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSubscriptionAttributesWithOptions(request, runtime);
}

SetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::setTopicAttributesWithOptions(shared_ptr<SetTopicAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLogging)) {
    query->insert(pair<string, bool>("EnableLogging", *request->enableLogging));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMessageSize)) {
    query->insert(pair<string, long>("MaxMessageSize", *request->maxMessageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetTopicAttributes"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetTopicAttributesResponse(callApi(params, req, runtime));
}

SetTopicAttributesResponse Alibabacloud_Mns-open20220119::Client::setTopicAttributes(shared_ptr<SetTopicAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTopicAttributesWithOptions(request, runtime);
}

SubscribeResponse Alibabacloud_Mns-open20220119::Client::subscribeWithOptions(shared_ptr<SubscribeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubscribeShrinkRequest> request = make_shared<SubscribeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubscribeRequestDlqPolicy>(tmpReq->dlqPolicy)) {
    request->dlqPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dlqPolicy, make_shared<string>("DlqPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubscribeRequestDmAttributes>(tmpReq->dmAttributes)) {
    request->dmAttributesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dmAttributes, make_shared<string>("DmAttributes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubscribeRequestDysmsAttributes>(tmpReq->dysmsAttributes)) {
    request->dysmsAttributesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dysmsAttributes, make_shared<string>("DysmsAttributes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubscribeRequestKafkaAttributes>(tmpReq->kafkaAttributes)) {
    request->kafkaAttributesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->kafkaAttributes, make_shared<string>("KafkaAttributes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubscribeRequestTenantRateLimitPolicy>(tmpReq->tenantRateLimitPolicy)) {
    request->tenantRateLimitPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantRateLimitPolicy, make_shared<string>("TenantRateLimitPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dlqPolicyShrink)) {
    query->insert(pair<string, string>("DlqPolicy", *request->dlqPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dmAttributesShrink)) {
    query->insert(pair<string, string>("DmAttributes", *request->dmAttributesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dysmsAttributesShrink)) {
    query->insert(pair<string, string>("DysmsAttributes", *request->dysmsAttributesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kafkaAttributesShrink)) {
    query->insert(pair<string, string>("KafkaAttributes", *request->kafkaAttributesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageTag)) {
    query->insert(pair<string, string>("MessageTag", *request->messageTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyContentFormat)) {
    query->insert(pair<string, string>("NotifyContentFormat", *request->notifyContentFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyStrategy)) {
    query->insert(pair<string, string>("NotifyStrategy", *request->notifyStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    query->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stsRoleArn)) {
    query->insert(pair<string, string>("StsRoleArn", *request->stsRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantRateLimitPolicyShrink)) {
    query->insert(pair<string, string>("TenantRateLimitPolicy", *request->tenantRateLimitPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Subscribe"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubscribeResponse(callApi(params, req, runtime));
}

SubscribeResponse Alibabacloud_Mns-open20220119::Client::subscribe(shared_ptr<SubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return subscribeWithOptions(request, runtime);
}

UnsubscribeResponse Alibabacloud_Mns-open20220119::Client::unsubscribeWithOptions(shared_ptr<UnsubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionName)) {
    query->insert(pair<string, string>("SubscriptionName", *request->subscriptionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicName)) {
    query->insert(pair<string, string>("TopicName", *request->topicName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Unsubscribe"))},
    {"version", boost::any(string("2022-01-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnsubscribeResponse(callApi(params, req, runtime));
}

UnsubscribeResponse Alibabacloud_Mns-open20220119::Client::unsubscribe(shared_ptr<UnsubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unsubscribeWithOptions(request, runtime);
}

