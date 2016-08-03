/* soapGeoIPServiceSoap12Proxy.cpp
   Generated by gSOAP 2.8.8 from GeoIPService.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapGeoIPServiceSoap12Proxy.h"

GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy()
{	GeoIPServiceSoap12Proxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy(const struct soap &_soap) : soap(_soap)
{ }

GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy(const char *url)
{	GeoIPServiceSoap12Proxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy(soap_mode iomode)
{	GeoIPServiceSoap12Proxy_init(iomode, iomode);
}

GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy(const char *url, soap_mode iomode)
{	GeoIPServiceSoap12Proxy_init(iomode, iomode);
	soap_endpoint = url;
}

GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy(soap_mode imode, soap_mode omode)
{	GeoIPServiceSoap12Proxy_init(imode, omode);
}

GeoIPServiceSoap12Proxy::~GeoIPServiceSoap12Proxy()
{ }

void GeoIPServiceSoap12Proxy::GeoIPServiceSoap12Proxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://www.w3.org/2003/05/soap-envelope", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://www.w3.org/2003/05/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns2", "http://www.webservicex.net/GeoIPServiceSoap", NULL, NULL},
	{"ns1", "http://www.webservicex.net/", NULL, NULL},
	{"ns3", "http://www.webservicex.net/GeoIPServiceSoap12", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void GeoIPServiceSoap12Proxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void GeoIPServiceSoap12Proxy::reset()
{	destroy();
	soap_done(this);
	soap_init(this);
	GeoIPServiceSoap12Proxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void GeoIPServiceSoap12Proxy::soap_noheader()
{	this->header = NULL;
}

const SOAP_ENV__Header *GeoIPServiceSoap12Proxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *GeoIPServiceSoap12Proxy::soap_fault()
{	return this->fault;
}

const char *GeoIPServiceSoap12Proxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *GeoIPServiceSoap12Proxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int GeoIPServiceSoap12Proxy::soap_close_socket()
{	return soap_closesock(this);
}

int GeoIPServiceSoap12Proxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void GeoIPServiceSoap12Proxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void GeoIPServiceSoap12Proxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *GeoIPServiceSoap12Proxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int GeoIPServiceSoap12Proxy::GetGeoIP(const char *endpoint, const char *soap_action, _ns1__GetGeoIP *ns1__GetGeoIP, _ns1__GetGeoIPResponse *ns1__GetGeoIPResponse)
{	struct soap *soap = this;
	struct __ns3__GetGeoIP soap_tmp___ns3__GetGeoIP;
	if (endpoint)
		soap_endpoint = endpoint;
	if (!soap_endpoint)
		soap_endpoint = "http://www.webservicex.net/geoipservice.asmx";
	if (!soap_action)
		soap_action = "http://www.webservicex.net/GetGeoIP";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetGeoIP.ns1__GetGeoIP = ns1__GetGeoIP;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns3__GetGeoIP(soap, &soap_tmp___ns3__GetGeoIP);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetGeoIP(soap, &soap_tmp___ns3__GetGeoIP, "-ns3:GetGeoIP", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetGeoIP(soap, &soap_tmp___ns3__GetGeoIP, "-ns3:GetGeoIP", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGeoIPResponse)
		return soap_closesock(soap);
	ns1__GetGeoIPResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGeoIPResponse->soap_get(soap, "ns1:GetGeoIPResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int GeoIPServiceSoap12Proxy::GetGeoIPContext(const char *endpoint, const char *soap_action, _ns1__GetGeoIPContext *ns1__GetGeoIPContext, _ns1__GetGeoIPContextResponse *ns1__GetGeoIPContextResponse)
{	struct soap *soap = this;
	struct __ns3__GetGeoIPContext soap_tmp___ns3__GetGeoIPContext;
	if (endpoint)
		soap_endpoint = endpoint;
	if (!soap_endpoint)
		soap_endpoint = "http://www.webservicex.net/geoipservice.asmx";
	if (!soap_action)
		soap_action = "http://www.webservicex.net/GetGeoIPContext";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetGeoIPContext.ns1__GetGeoIPContext = ns1__GetGeoIPContext;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns3__GetGeoIPContext(soap, &soap_tmp___ns3__GetGeoIPContext);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetGeoIPContext(soap, &soap_tmp___ns3__GetGeoIPContext, "-ns3:GetGeoIPContext", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetGeoIPContext(soap, &soap_tmp___ns3__GetGeoIPContext, "-ns3:GetGeoIPContext", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetGeoIPContextResponse)
		return soap_closesock(soap);
	ns1__GetGeoIPContextResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__GetGeoIPContextResponse->soap_get(soap, "ns1:GetGeoIPContextResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */