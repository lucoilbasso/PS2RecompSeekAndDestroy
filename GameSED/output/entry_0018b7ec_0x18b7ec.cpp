#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0018b7ec
// Address: 0x18b7ec - 0x18b7f0
void entry_0018b7ec_0x18b7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7ec_0x18b7ec");
#endif

    ctx->pc = 0x18b7ecu;

    // 0x18b7ec: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x18b7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18b7f0u;
}
