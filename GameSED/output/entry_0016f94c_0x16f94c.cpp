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

// Function: entry_0016f94c
// Address: 0x16f94c - 0x16f950
void entry_0016f94c_0x16f94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f94c_0x16f94c");
#endif

    ctx->pc = 0x16f94cu;

    // 0x16f94c: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x16f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
    ctx->pc = 0x16f950u;
}
