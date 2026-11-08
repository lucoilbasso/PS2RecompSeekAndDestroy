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

// Function: GetSimpleEmissionChannel__7WcSeStd
// Address: 0x17b8c0 - 0x17b8fc
void GetSimpleEmissionChannel__7WcSeStd_0x17b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSimpleEmissionChannel__7WcSeStd_0x17b8c0");
#endif

    switch (ctx->pc) {
        case 0x17b8d0u: goto label_17b8d0;
        default: break;
    }

    ctx->pc = 0x17b8c0u;

    // 0x17b8c0: 0x24840170  addiu       $a0, $a0, 0x170
    ctx->pc = 0x17b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x17b8c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b8c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b8cc: 0x0  nop
    ctx->pc = 0x17b8ccu;
    // NOP
label_17b8d0:
    // 0x17b8d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b8d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B8D4u;
    {
        const bool branch_taken_0x17b8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b8d4) {
            ctx->pc = 0x17B8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B8D4u;
            // 0x17b8d8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B8E8u;
            goto label_17b8e8;
        }
    }
    ctx->pc = 0x17B8DCu;
    // 0x17b8dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x17b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8E0u;
        // 0x17b8e4: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8E8u;
label_17b8e8:
    // 0x17b8e8: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x17b8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b8ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B8ECu;
    {
        const bool branch_taken_0x17b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8ECu;
        // 0x17b8f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8ec) {
            ctx->pc = 0x17B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b8d0;
        }
    }
    ctx->pc = 0x17B8F4u;
    // 0x17b8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8F4u;
        // 0x17b8f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8FCu;
}
