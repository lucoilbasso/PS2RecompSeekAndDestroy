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

// Function: sceDevVif0Sync
// Address: 0x1ace08 - 0x1ace58
void sceDevVif0Sync_0x1ace08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVif0Sync_0x1ace08");
#endif

    ctx->pc = 0x1ace08u;

    // 0x1ace08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ace0c: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x1ace0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x1ace10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ace10u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003800u));
    // 0x1ace14: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1ace14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1ace18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE18u;
    {
        const bool branch_taken_0x1ace18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE18u;
        // 0x1ace1c: 0x30820700  andi        $v0, $a0, 0x700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1792);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace18) {
            ctx->pc = 0x1ACE28u;
            goto label_1ace28;
        }
    }
    ctx->pc = 0x1ACE20u;
    // 0x1ace20: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE20u;
        // 0x1ace24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE28u;
label_1ace28:
    // 0x1ace28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE28u;
    {
        const bool branch_taken_0x1ace28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE28u;
        // 0x1ace2c: 0x3082000c  andi        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace28) {
            ctx->pc = 0x1ACE38u;
            goto label_1ace38;
        }
    }
    ctx->pc = 0x1ACE30u;
    // 0x1ace30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE30u;
        // 0x1ace34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE38u;
label_1ace38:
    // 0x1ace38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE38u;
    {
        const bool branch_taken_0x1ace38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE38u;
        // 0x1ace3c: 0x30843000  andi        $a0, $a0, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace38) {
            ctx->pc = 0x1ACE48u;
            goto label_1ace48;
        }
    }
    ctx->pc = 0x1ACE40u;
    // 0x1ace40: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE48u;
label_1ace48:
    // 0x1ace48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ace48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ace4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ace4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ace50: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE50u;
        // 0x1ace54: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE58u;
}
