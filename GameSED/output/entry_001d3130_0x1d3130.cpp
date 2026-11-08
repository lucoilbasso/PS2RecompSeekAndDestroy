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

// Function: entry_001d3130
// Address: 0x1d3130 - 0x1d31a0
void entry_001d3130_0x1d3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3130_0x1d3130");
#endif

    switch (ctx->pc) {
        case 0x1d3140u: goto label_1d3140;
        default: break;
    }

    ctx->pc = 0x1d3130u;

    // 0x1d3130: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3138: 0xc07581c  jal         func_1D6070
    ctx->pc = 0x1D3138u;
    SET_GPR_U32(ctx, 31, 0x1D3140u);
    ctx->pc = 0x1D313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3138u;
    // 0x1d313c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6070u, 0x1D3138u, 0x1D3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3140u;
label_1d3140:
    // 0x1d3140: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d3144: 0x101502  srl         $v0, $s0, 20
    ctx->pc = 0x1d3144u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1d3148: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x1d3148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1d314c: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D314Cu;
    {
        const bool branch_taken_0x1d314c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D314Cu;
        // 0x1d3150: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d314c) {
            ctx->pc = 0x1D31A0u;
            return;
        }
    }
    ctx->pc = 0x1D3154u;
    // 0x1d3154: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1d3154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3158: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x1d3158u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d315c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d3160: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d3160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d3164: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1d3164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3168: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1d3168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1d316c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d316cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3170: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x1d3170u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x1d3174: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x1d3174u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x1d3178: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x1d3178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x1d317c: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x1d317cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d3180: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x1d3180u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x1d3184: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d3188: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x1d3188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x1d318c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3190: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1d3194: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x1d3194u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x1d3198: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3198u;
    {
        const bool branch_taken_0x1d3198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3198u;
        // 0x1d319c: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3198) {
            ctx->pc = 0x1D3240u;
            return;
        }
    }
    ctx->pc = 0x1D31A0u;
}
