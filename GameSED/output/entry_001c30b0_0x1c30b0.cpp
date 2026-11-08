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

// Function: entry_001c30b0
// Address: 0x1c30b0 - 0x1c30c0
void entry_001c30b0_0x1c30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30b0_0x1c30b0");
#endif

    ctx->pc = 0x1c30b0u;

    // 0x1c30b0: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x1c30b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x1c30b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c30b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c30b8: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1c30bc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1c30bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    ctx->pc = 0x1c30c0u;
}
