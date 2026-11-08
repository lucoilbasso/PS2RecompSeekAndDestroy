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

// Function: entry_00146f9c
// Address: 0x146f9c - 0x146fa0
void entry_00146f9c_0x146f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146f9c_0x146f9c");
#endif

    ctx->pc = 0x146f9cu;

    // 0x146f9c: 0xaec20514  sw          $v0, 0x514($s6)
    ctx->pc = 0x146f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1300), GPR_U32(ctx, 2));
    ctx->pc = 0x146fa0u;
}
