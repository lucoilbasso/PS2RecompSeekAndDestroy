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

// Function: entry_0014b19c
// Address: 0x14b19c - 0x14b1a0
void entry_0014b19c_0x14b19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b19c_0x14b19c");
#endif

    ctx->pc = 0x14b19cu;

    // 0x14b19c: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x14b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->pc = 0x14b1a0u;
}
