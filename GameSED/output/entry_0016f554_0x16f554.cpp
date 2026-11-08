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

// Function: entry_0016f554
// Address: 0x16f554 - 0x16f558
void entry_0016f554_0x16f554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f554_0x16f554");
#endif

    ctx->pc = 0x16f554u;

    // 0x16f554: 0x244275f0  addiu       $v0, $v0, 0x75F0
    ctx->pc = 0x16f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30192));
    ctx->pc = 0x16f558u;
}
