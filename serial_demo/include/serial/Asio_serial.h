#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
 
using namespace std;
using namespace boost::asio;
 
typedef string any_type;

class MySerialPort
{
public:
    MySerialPort( const any_type &port_name )
	{
		pSerialPort = new serial_port(m_ios);
		if (pSerialPort){
			init_port( port_name, 8 );
		}
	}
	
	~MySerialPort()
	{
		if(pSerialPort) delete pSerialPort;   
	}

	//Write some data to port
	void write_to_serial( const any_type data );
 
	//Read data from port which write data just now
	void read_from_serial();
 
	//The asyanc callback function of asyanc_read
	void handle_read( char buf[], boost::system::error_code ec,
		std::size_t bytes_transferred );
 
	//To Call io_service::run function to call asyanc callback funciton
	void call_handle();
	
private:
	//Initialize port
	bool init_port( const any_type port, const unsigned int char_size );

private:
	io_service m_ios;				// io_service Object
	serial_port *pSerialPort;		// Serial port Object
	any_type m_port;				// For save com name
	boost::system::error_code ec;	// Serial_port function exception
};