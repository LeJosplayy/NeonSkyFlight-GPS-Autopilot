/*
 _   _                  ____  _          _____ _ _       _     _   
| \ | | ___  ___  _ __ / ___|| | ___   _|  ___| (_) __ _| |__ | |_ 
|  \| |/ _ \/ _ \| '_ \\___ \| |/ / | | | |_  | | |/ _` | '_ \| __|
| |\  |  __/ (_) | | | |___) |   <| |_| |  _| | | | (_| | | | | |_ 
|_| \_|\___|\___/|_| |_|____/|_|\_\\__, |_|   |_|_|\__, |_| |_|\__|
  ____ ____  ____       _         _|___/         _ |___/   _       
 / ___|  _ \/ ___|     / \  _   _| |_ ___  _ __ (_) | ___ | |_     
| |  _| |_) \___ \    / _ \| | | | __/ _ \| '_ \| | |/ _ \| __|    
| |_| |  __/ ___) |  / ___ \ |_| | || (_) | |_) | | | (_) | |_     
 \____|_|   |____/  /_/   \_\__,_|\__\___/| .__/|_|_|\___/ \__|    
                                          |_|                                                 
*/

#define I2C_ADDRESS        0x20      
    
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////Radio connections//////////////////////////////
////////////////////////////////////////////////////////////////////////////////
/*
* #define USE_NRF24L01 //only for NeonSkyFlight G-NAV if you are using an NRF24l01 as Radio connection  
* #define USE_CRSF 
*/
#define USE_NRF24L01 //only for NeonSkyFlight G-NAV if you are using an NRF24l01 as Radio connection     


//#define GPS_LEAD_FILTER
#define GPS_SERIAL_SPEED 115200 

/* GPS protocol 
 * NMEA			- Standard NMEA protocol GGA, GSA and RMC  sentences are needed
 * UBLOX		- still testing
 * MTK_INIT     - Initialize MTK GPS (if MTK_BINARY16 or 19 is not defined then it goes to NMEA, otherwise it goes for binary)
 */

//#define NMEA
#define UBLOX
//#define MTK_BINARY16
//#define MTK_BINARY19
//#define INIT_MTK_GPS////////
#define POSHOLD_P		.11
#define POSHOLD_I		0.0
#define POSHOLD_IMAX		20		        // degrees

#define POSHOLD_RATE_P		1.4			//
#define POSHOLD_RATE_I		0.2			// Wind control
#define POSHOLD_RATE_D		0.010			// try 2 or 3 for POSHOLD_RATE 1
#define POSHOLD_RATE_IMAX	20			// degrees
#define NAV_P			1.4	        	//
#define NAV_I			0.20		        // Wind control
#define NAV_D			0.006		        //
#define NAV_IMAX		20		        // degrees
#define CROSSTRACK_GAIN            1            // Weighting the cross track error
#define NAV_SPEED_MIN              100          // cm/sec minimum navigational speed when NAV_SLOW_NAV id false
#define NAV_SPEED_MAX              300          // cm/sec maximum navigational speed
#define NAV_BANK_MAX               2500         // 20deg max banking when navigating (just for security and testing)
#define GPS_FILTER_VECTOR_LENGTH 5
