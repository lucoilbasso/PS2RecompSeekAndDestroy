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

// Function: entry_0015807c
// Address: 0x15807c - 0x158080
void entry_0015807c_0x15807c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015807c_0x15807c");
#endif

    ctx->pc = 0x15807cu;

    // 0x15807c: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x15807cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
    ctx->pc = 0x158080u;
}
