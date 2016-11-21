#define DEBUG 0
/*-------------------------lruofband-------------------------------*/

//extern unsigned long NSMRBands;
typedef struct
{
	long	ssd_buf_id; //ssd buffer location in shared buffer
	long 	next_lru; // to link used ssd as LRU
	long 	last_lru; // to link used ssd as LRU
	long 	next_ssd_buf;
} SSDBufferDescForLRUofBand;

typedef struct
{
	long 	first_lru; // Head of list of LRU
	long 	last_lru; // Tail of list of LRU
} SSDBufferStrategyControlForLRUofBand;

/*typedef struct
{
        unsigned long 	band_id;
	long 	first_page;
//	struct BandDesc *next_band;
} BandDesc;*/

extern unsigned long NBANDTables;
//extern struct SSDBufferDesc;
extern unsigned long flush_fifo_times;

SSDBufferDescForLRUofBand	*ssd_buffer_descriptors_for_lruofband;
//BandDesc	*band_descriptors;
SSDBufferStrategyControlForLRUofBand *ssd_buffer_strategy_control_for_lruofband;

void initSSDBufferForLRUofBand();
SSDBufferDesc *getLRUofBandBuffer(SSDBufferTag);
void *hinInLRUofBandBuffer(SSDBufferDesc *);
//extern void initBandTable(size_t size);
