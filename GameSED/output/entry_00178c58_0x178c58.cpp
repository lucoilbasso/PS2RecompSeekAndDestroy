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

// Function: entry_00178c58
// Address: 0x178c58 - 0x178c5c
void entry_00178c58_0x178c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c58_0x178c58");
#endif

    ctx->pc = 0x178c58u;

    // 0x178c58: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x178c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    ctx->pc = 0x178c5cu;
}
