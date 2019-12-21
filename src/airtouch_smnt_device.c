#include "airtouch_smnt.h"

typedef enum{
    SMNT_INIT       = 0x1,
    SMNT_CH_LOCKING = 0x2,
    SMNT_CH_LOCKED  = 0x4,
    SMNT_SUCCESS    = 0x8
} SmntDeviceState_t;

typedef struct airtouch_smnt_device_t
{
    /* data */
    SmntDeviceState_t State;
    uint16_t SyncState;
    uint8_t SyncIsUplink;
    uint8_t SyncMACAddress[6];
    uint8_t SyncBSSID[6];
    uint8_t BroadcastVersion;			
    uint8_t MulticastVersion;

    uint8_t PayloadBroadcast[128];
    uint8_t PayloadMulticast[128];

    AirtouchSmntResult_t Result;
} AirtouchSmntDevice_t;

AirtouchSmntDevice_t* pSmnt = NULL;

void airtouch_SmntInit()
{
    pSmnt = (AirtouchSmntDevice_t *)malloc( sizeof( AirtouchSmntDevice_t ) );
    /**<! set pSmnt to 0 */
    memset(pSmnt, 0, sizeof( AirtouchSmntDevice_t ) );
    /**<! set pSmnt->payloadBroadcast to oxFF */
    memset(pSmnt->PayloadBroadcast, 0xFF, sizeof( pSmnt->PayloadBroadcast ) );
    /**<! Set pSmnt->payloadMulticast to 0xFF */
    memset(pSmnt->PayloadMulticast, 0xFF, sizeof( pSmnt->PayloadMulticast ) );

    return;
}

void airtouch_SmntReset(void)
{
    if(pSmnt != NULL)
    {
        /**<! Set pSmnt to 0 */
        memset(pSmnt, 0, sizeof( AirtouchSmntDevice_t ) );
        /**<! Set pSmnt->PayloadBroadcast to 0xFF */
        memset(pSmnt->PayloadBroadcast, 0xFF, sizeof( pSmnt->PayloadBroadcast ) );
        /**<! Set pSmnt->PayloadMulticast to 0xFF */
        memset(pSmnt->PayloadMulticast, 0xFF, sizeof( pSmnt->PayloadMulticast ) );
    }
}
void airtouch_SmntFree(void)
{
    if(pSmnt != NULL)
    {
        free( pSmnt );
        pSmnt = NULL;
    }
}

void airtouch_SmntCycleCall(void)
{
    
}

void airtouch_SmntProcessing(FrameHeader_t pvFrameHeader, int pvFrameLength)
{
    uint8_t IsUplink = 1;
    uint8_t FrameType = 0; // 1:MulticastFrame 2:BroadcastFrame 0:Others
    
    uint8_t *pSRC,*pDEST, *pBSSID;

    uint16_t LastLength = 0;

    uint16_t DownlinkLastSeq = 0, UplinkLastSeq = 0;
    uint8_t IsDiffentAddress;

}