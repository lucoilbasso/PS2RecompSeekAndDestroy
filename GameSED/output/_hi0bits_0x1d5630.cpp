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

// Function: _hi0bits
// Address: 0x1d5630 - 0x1d56b0
void _hi0bits_0x1d5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_hi0bits_0x1d5630");
#endif

    ctx->pc = 0x1d5630u;

    // 0x1d5630: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5634: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5638u;
    {
        const bool branch_taken_0x1d5638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5638u;
        // 0x1d563c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5638) {
            ctx->pc = 0x1D5648u;
            goto label_1d5648;
        }
    }
    ctx->pc = 0x1D5640u;
    // 0x1d5640: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5644: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1d5644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1d5648:
    // 0x1d5648: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1d5648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1d564c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5650u;
    {
        const bool branch_taken_0x1d5650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5650u;
        // 0x1d5654: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5650) {
            ctx->pc = 0x1D5660u;
            goto label_1d5660;
        }
    }
    ctx->pc = 0x1D5658u;
    // 0x1d5658: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d5658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d565c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1d565cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1d5660:
    // 0x1d5660: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d5660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5664u;
    {
        const bool branch_taken_0x1d5664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5664u;
        // 0x1d5668: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5664) {
            ctx->pc = 0x1D5674u;
            goto label_1d5674;
        }
    }
    ctx->pc = 0x1D566Cu;
    // 0x1d566c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d5670: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d5674:
    // 0x1d5674: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d5674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5678u;
    {
        const bool branch_taken_0x1d5678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5678) {
            ctx->pc = 0x1D5688u;
            goto label_1d5688;
        }
    }
    ctx->pc = 0x1D5680u;
    // 0x1d5680: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1d5680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1d5684: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d5684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d5688:
    // 0x1d5688: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5688u;
    {
        const bool branch_taken_0x1d5688 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5688u;
        // 0x1d568c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5688) {
            ctx->pc = 0x1D56A8u;
            goto label_1d56a8;
        }
    }
    ctx->pc = 0x1D5690u;
    // 0x1d5690: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d5694: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5698: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d5698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d569c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D569Cu;
    {
        const bool branch_taken_0x1d569c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D569Cu;
        // 0x1d56a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d569c) {
            ctx->pc = 0x1D56A8u;
            goto label_1d56a8;
        }
    }
    ctx->pc = 0x1D56A4u;
    // 0x1d56a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d56a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d56a8:
    // 0x1d56a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D56B0u;
}
