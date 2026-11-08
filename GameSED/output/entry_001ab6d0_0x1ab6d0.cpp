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

// Function: entry_001ab6d0
// Address: 0x1ab6d0 - 0x1ab6dc
void entry_001ab6d0_0x1ab6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab6d0_0x1ab6d0");
#endif

    ctx->pc = 0x1ab6d0u;

    // 0x1ab6d0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1ab6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ab6d4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1ab6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ab6d8: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x1ab6d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x1ab6dcu;
}
