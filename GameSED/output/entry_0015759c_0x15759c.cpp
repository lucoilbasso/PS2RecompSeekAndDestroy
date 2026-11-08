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

// Function: entry_0015759c
// Address: 0x15759c - 0x1575a0
void entry_0015759c_0x15759c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015759c_0x15759c");
#endif

    ctx->pc = 0x15759cu;

    // 0x15759c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x15759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1575a0u;
}
