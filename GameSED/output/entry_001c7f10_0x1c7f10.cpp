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

// Function: entry_001c7f10
// Address: 0x1c7f10 - 0x1c7f2c
void entry_001c7f10_0x1c7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7f10_0x1c7f10");
#endif

    ctx->pc = 0x1c7f10u;

    // 0x1c7f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7f14: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c7f18: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1c7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c7f1c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1c7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1c7f20: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x1c7f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1c7f24: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1c7f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7f28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c7f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1c7f2cu;
}
