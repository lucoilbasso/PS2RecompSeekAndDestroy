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

// Function: entry_0015060c
// Address: 0x15060c - 0x150618
void entry_0015060c_0x15060c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015060c_0x15060c");
#endif

    ctx->pc = 0x15060cu;

    // 0x15060c: 0x26430430  addiu       $v1, $s2, 0x430
    ctx->pc = 0x15060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    // 0x150610: 0x264205b0  addiu       $v0, $s2, 0x5B0
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x150614: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x150618u;
}
