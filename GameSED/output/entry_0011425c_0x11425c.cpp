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

// Function: entry_0011425c
// Address: 0x11425c - 0x114260
void entry_0011425c_0x11425c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011425c_0x11425c");
#endif

    ctx->pc = 0x11425cu;

    // 0x11425c: 0x24030240  addiu       $v1, $zero, 0x240
    ctx->pc = 0x11425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->pc = 0x114260u;
}
