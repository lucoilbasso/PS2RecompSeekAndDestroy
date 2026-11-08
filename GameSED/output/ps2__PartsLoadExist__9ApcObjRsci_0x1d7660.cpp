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

// Function: _PartsLoadExist__9ApcObjRsci
// Address: 0x1d7660 - 0x1d76a8
void ps2__PartsLoadExist__9ApcObjRsci_0x1d7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PartsLoadExist__9ApcObjRsci_0x1d7660");
#endif

    switch (ctx->pc) {
        case 0x1d7678u: goto label_1d7678;
        default: break;
    }

    ctx->pc = 0x1d7660u;

    // 0x1d7660: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d7664: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7664u;
    {
        const bool branch_taken_0x1d7664 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7664u;
        // 0x1d7668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7664) {
            ctx->pc = 0x1D769Cu;
            goto label_1d769c;
        }
    }
    ctx->pc = 0x1D766Cu;
    // 0x1d766c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1d766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d7670: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7674: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1d7674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1d7678:
    // 0x1d7678: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d767c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d7680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7684: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7684u;
    {
        const bool branch_taken_0x1d7684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7684u;
        // 0x1d7688: 0xe8302a  slt         $a2, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7684) {
            ctx->pc = 0x1D76A0u;
            goto label_1d76a0;
        }
    }
    ctx->pc = 0x1D768Cu;
    // 0x1d768c: 0x0  nop
    ctx->pc = 0x1d768cu;
    // NOP
    // 0x1d7690: 0x0  nop
    ctx->pc = 0x1d7690u;
    // NOP
    // 0x1d7694: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7694u;
    {
        const bool branch_taken_0x1d7694 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7694) {
            ctx->pc = 0x1D7698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7694u;
            // 0x1d7698: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7678;
        }
    }
    ctx->pc = 0x1D769Cu;
label_1d769c:
    // 0x1d769c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d769cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d76a0:
    // 0x1d76a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D76A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76A0u;
        // 0x1d76a4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D76A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D76A8u;
}
