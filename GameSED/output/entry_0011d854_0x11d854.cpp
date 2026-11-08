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

// Function: entry_0011d854
// Address: 0x11d854 - 0x11d858
void entry_0011d854_0x11d854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d854_0x11d854");
#endif

    ctx->pc = 0x11d854u;

    // 0x11d854: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x11d854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x11d858u;
}
