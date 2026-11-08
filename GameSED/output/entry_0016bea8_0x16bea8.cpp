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

// Function: entry_0016bea8
// Address: 0x16bea8 - 0x16bee8
void entry_0016bea8_0x16bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bea8_0x16bea8");
#endif

    switch (ctx->pc) {
        case 0x16beb0u: goto label_16beb0;
        case 0x16bed8u: goto label_16bed8;
        default: break;
    }

    ctx->pc = 0x16bea8u;

    // 0x16bea8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16BEA8u;
    SET_GPR_U32(ctx, 31, 0x16BEB0u);
    ctx->pc = 0x16BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BEA8u;
    // 0x16beac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16BEA8u, 0x16BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEB0u;
label_16beb0:
    // 0x16beb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16beb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16beb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16beb8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16beb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16bebc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEBCu;
        // 0x16bec0: 0x133140  sll         $a2, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16BF50u;
            return;
        }
    }
    ctx->pc = 0x16BEC4u;
    // 0x16bec4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x16bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16bec8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16becc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16beccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bed0: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x16BED0u;
    SET_GPR_U32(ctx, 31, 0x16BED8u);
    ctx->pc = 0x16BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BED0u;
    // 0x16bed4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x16BED0u, 0x16BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BED8u;
label_16bed8:
    // 0x16bed8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BED8u;
    {
        const bool branch_taken_0x16bed8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BED8u;
        // 0x16bedc: 0x8e430154  lw          $v1, 0x154($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bed8) {
            ctx->pc = 0x16BEE8u;
            return;
        }
    }
    ctx->pc = 0x16BEE0u;
    // 0x16bee0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16BEE0u;
    {
        const bool branch_taken_0x16bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEE0u;
        // 0x16bee4: 0x8c6301b4  lw          $v1, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bee0) {
            ctx->pc = 0x16BF28u;
            return;
        }
    }
    ctx->pc = 0x16BEE8u;
}
