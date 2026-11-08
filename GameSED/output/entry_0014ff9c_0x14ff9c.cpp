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

// Function: entry_0014ff9c
// Address: 0x14ff9c - 0x14ffa0
void entry_0014ff9c_0x14ff9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff9c_0x14ff9c");
#endif

    ctx->pc = 0x14ff9cu;

    // 0x14ff9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x14ffa0u;
}
