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

// Function: entry_0013fa9c
// Address: 0x13fa9c - 0x13faa0
void entry_0013fa9c_0x13fa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fa9c_0x13fa9c");
#endif

    ctx->pc = 0x13fa9cu;

    // 0x13fa9c: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x13fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    ctx->pc = 0x13faa0u;
}
