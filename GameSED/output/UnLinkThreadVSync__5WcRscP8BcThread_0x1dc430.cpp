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

// Function: UnLinkThreadVSync__5WcRscP8BcThread
// Address: 0x1dc430 - 0x1dc480
void UnLinkThreadVSync__5WcRscP8BcThread_0x1dc430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnLinkThreadVSync__5WcRscP8BcThread_0x1dc430");
#endif

    switch (ctx->pc) {
        case 0x1dc440u: goto label_1dc440;
        default: break;
    }

    ctx->pc = 0x1dc430u;

    // 0x1dc430: 0x24840158  addiu       $a0, $a0, 0x158
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x1dc434: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dc434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc438: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DC438u;
    {
        const bool branch_taken_0x1dc438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC438u;
        // 0x1dc43c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc438) {
            ctx->pc = 0x1DC478u;
            goto label_1dc478;
        }
    }
    ctx->pc = 0x1DC440u;
label_1dc440:
    // 0x1dc440: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC440u;
    {
        const bool branch_taken_0x1dc440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dc440) {
            ctx->pc = 0x1DC444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC440u;
            // 0x1dc444: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC468u;
            goto label_1dc468;
        }
    }
    ctx->pc = 0x1DC448u;
    // 0x1dc448: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC448u;
    {
        const bool branch_taken_0x1dc448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC448u;
        // 0x1dc44c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc448) {
            ctx->pc = 0x1DC458u;
            goto label_1dc458;
        }
    }
    ctx->pc = 0x1DC450u;
    // 0x1dc450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC450u;
    {
        const bool branch_taken_0x1dc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC450u;
        // 0x1dc454: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc450) {
            ctx->pc = 0x1DC45Cu;
            goto label_1dc45c;
        }
    }
    ctx->pc = 0x1DC458u;
label_1dc458:
    // 0x1dc458: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1dc458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_1dc45c:
    // 0x1dc45c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC45Cu;
        // 0x1dc460: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC464u;
    // 0x1dc464: 0x0  nop
    ctx->pc = 0x1dc464u;
    // NOP
label_1dc468:
    // 0x1dc468: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dc468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc46c: 0x0  nop
    ctx->pc = 0x1dc46cu;
    // NOP
    // 0x1dc470: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DC470u;
    {
        const bool branch_taken_0x1dc470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc470) {
            ctx->pc = 0x1DC440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc440;
        }
    }
    ctx->pc = 0x1DC478u;
label_1dc478:
    // 0x1dc478: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC480u;
}
