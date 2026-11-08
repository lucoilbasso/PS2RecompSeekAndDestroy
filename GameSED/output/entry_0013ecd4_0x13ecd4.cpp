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

// Function: entry_0013ecd4
// Address: 0x13ecd4 - 0x13ecd8
void entry_0013ecd4_0x13ecd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ecd4_0x13ecd4");
#endif

    ctx->pc = 0x13ecd4u;

    // 0x13ecd4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x13ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->pc = 0x13ecd8u;
}
