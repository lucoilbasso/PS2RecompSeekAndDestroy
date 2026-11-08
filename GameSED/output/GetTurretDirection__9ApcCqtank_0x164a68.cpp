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

// Function: GetTurretDirection__9ApcCqtank
// Address: 0x164a68 - 0x164aa0
void GetTurretDirection__9ApcCqtank_0x164a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTurretDirection__9ApcCqtank_0x164a68");
#endif

    ctx->pc = 0x164a68u;

    // 0x164a68: 0x8c820c0c  lw          $v0, 0xC0C($a0)
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3084)));
    // 0x164a6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164A6Cu;
    {
        const bool branch_taken_0x164a6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x164A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A6Cu;
        // 0x164a70: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a6c) {
            ctx->pc = 0x164A80u;
            goto label_164a80;
        }
    }
    ctx->pc = 0x164A74u;
    // 0x164a74: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x164a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164A78u;
    {
        const bool branch_taken_0x164a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A78u;
        // 0x164a7c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a78) {
            ctx->pc = 0x164A84u;
            goto label_164a84;
        }
    }
    ctx->pc = 0x164A80u;
label_164a80:
    // 0x164a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164a84:
    // 0x164a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164A84u;
    {
        const bool branch_taken_0x164a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a84) {
            ctx->pc = 0x164A98u;
            goto label_164a98;
        }
    }
    ctx->pc = 0x164A8Cu;
    // 0x164a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x164a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164a90: 0x3e00008  jr          $ra
    ctx->pc = 0x164A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A90u;
        // 0x164a94: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164A98u;
label_164a98:
    // 0x164a98: 0x3e00008  jr          $ra
    ctx->pc = 0x164A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A98u;
        // 0x164a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164AA0u;
}
