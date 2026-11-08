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

// Function: entry_001a407c
// Address: 0x1a407c - 0x1a4080
void entry_001a407c_0x1a407c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a407c_0x1a407c");
#endif

    ctx->pc = 0x1a407cu;

    // 0x1a407c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1a407cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1a4080u;
}
