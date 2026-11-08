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

// Function: entry_00182110
// Address: 0x182110 - 0x182114
void entry_00182110_0x182110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182110_0x182110");
#endif

    ctx->pc = 0x182110u;

    // 0x182110: 0xad980060  sw          $t8, 0x60($t4)
    ctx->pc = 0x182110u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 24));
    ctx->pc = 0x182114u;
}
