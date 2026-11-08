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

// Function: entry_0019d42c
// Address: 0x19d42c - 0x19d450
void entry_0019d42c_0x19d42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d42c_0x19d42c");
#endif

    ctx->pc = 0x19d42cu;

    // 0x19d42c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19D42Cu;
    {
        const bool branch_taken_0x19d42c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D42Cu;
        // 0x19d430: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d42c) {
            ctx->pc = 0x19D450u;
            return;
        }
    }
    ctx->pc = 0x19D434u;
    // 0x19d434: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19d438: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d43c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19d440: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x19d440u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x19d444: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19d448: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x19d448u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x19d44c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x19d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x19d450u;
}
