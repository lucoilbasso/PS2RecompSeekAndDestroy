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

// Function: sceDevVu0Sync
// Address: 0x1aca58 - 0x1aca98
void sceDevVu0Sync_0x1aca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0Sync_0x1aca58");
#endif

    ctx->pc = 0x1aca58u;

    // 0x1aca58: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x1aca58u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
    // 0x1aca5c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1aca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1aca60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACA60u;
    {
        const bool branch_taken_0x1aca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA60u;
        // 0x1aca64: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca60) {
            ctx->pc = 0x1ACA70u;
            goto label_1aca70;
        }
    }
    ctx->pc = 0x1ACA68u;
    // 0x1aca68: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA68u;
        // 0x1aca6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA70u;
label_1aca70:
    // 0x1aca70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACA70u;
    {
        const bool branch_taken_0x1aca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA70u;
        // 0x1aca74: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca70) {
            ctx->pc = 0x1ACA80u;
            goto label_1aca80;
        }
    }
    ctx->pc = 0x1ACA78u;
    // 0x1aca78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA78u;
        // 0x1aca7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA80u;
label_1aca80:
    // 0x1aca80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACA80u;
    {
        const bool branch_taken_0x1aca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA80u;
        // 0x1aca84: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca80) {
            ctx->pc = 0x1ACA90u;
            goto label_1aca90;
        }
    }
    ctx->pc = 0x1ACA88u;
    // 0x1aca88: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA88u;
        // 0x1aca8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA90u;
label_1aca90:
    // 0x1aca90: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA90u;
        // 0x1aca94: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA98u;
}
