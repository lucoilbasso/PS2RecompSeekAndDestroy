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

// Function: GetPowList__9ApcPtcSplUi
// Address: 0x1d8190 - 0x1d81d8
void GetPowList__9ApcPtcSplUi_0x1d8190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPowList__9ApcPtcSplUi_0x1d8190");
#endif

    switch (ctx->pc) {
        case 0x1d81a0u: goto label_1d81a0;
        default: break;
    }

    ctx->pc = 0x1d8190u;

    // 0x1d8190: 0x248305f0  addiu       $v1, $a0, 0x5F0
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1520));
    // 0x1d8194: 0x24840170  addiu       $a0, $a0, 0x170
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x1d8198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d819c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d81a0:
    // 0x1d81a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d81a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D81A4u;
    {
        const bool branch_taken_0x1d81a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d81a4) {
            ctx->pc = 0x1D81A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D81A4u;
            // 0x1d81a8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D81C0u;
            goto label_1d81c0;
        }
    }
    ctx->pc = 0x1D81ACu;
    // 0x1d81ac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d81acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d81b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d81b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81B4u;
        // 0x1d81b8: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D81BCu;
    // 0x1d81bc: 0x0  nop
    ctx->pc = 0x1d81bcu;
    // NOP
label_1d81c0:
    // 0x1d81c0: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x1d81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x1d81c4: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x1d81c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1d81c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D81C8u;
    {
        const bool branch_taken_0x1d81c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D81CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81C8u;
        // 0x1d81cc: 0x24630490  addiu       $v1, $v1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81c8) {
            ctx->pc = 0x1D81A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d81a0;
        }
    }
    ctx->pc = 0x1D81D0u;
    // 0x1d81d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81D0u;
        // 0x1d81d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D81D8u;
}
