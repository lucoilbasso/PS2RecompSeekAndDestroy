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

// Function: entry_00148f3c
// Address: 0x148f3c - 0x148f40
void entry_00148f3c_0x148f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f3c_0x148f3c");
#endif

    ctx->pc = 0x148f3cu;

    // 0x148f3c: 0xac400514  sw          $zero, 0x514($v0)
    ctx->pc = 0x148f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1300), GPR_U32(ctx, 0));
    ctx->pc = 0x148f40u;
}
