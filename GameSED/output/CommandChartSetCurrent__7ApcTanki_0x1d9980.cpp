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

// Function: CommandChartSetCurrent__7ApcTanki
// Address: 0x1d9980 - 0x1d99dc
void CommandChartSetCurrent__7ApcTanki_0x1d9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandChartSetCurrent__7ApcTanki_0x1d9980");
#endif

    switch (ctx->pc) {
        case 0x1d99a0u: goto label_1d99a0;
        default: break;
    }

    ctx->pc = 0x1d9980u;

    // 0x1d9980: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9980u;
    {
        const bool branch_taken_0x1d9980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9980) {
            ctx->pc = 0x1D9984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9980u;
            // 0x1d9984: 0x8c830898  lw          $v1, 0x898($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9990u;
            goto label_1d9990;
        }
    }
    ctx->pc = 0x1D9988u;
    // 0x1d9988: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D9988u;
    {
        const bool branch_taken_0x1d9988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9988u;
        // 0x1d998c: 0x8c820898  lw          $v0, 0x898($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9988) {
            ctx->pc = 0x1D99C8u;
            goto label_1d99c8;
        }
    }
    ctx->pc = 0x1D9990u;
label_1d9990:
    // 0x1d9990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9994: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D9994u;
    {
        const bool branch_taken_0x1d9994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9994u;
        // 0x1d9998: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9994) {
            ctx->pc = 0x1D99C4u;
            goto label_1d99c4;
        }
    }
    ctx->pc = 0x1D999Cu;
    // 0x1d999c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d99a0:
    // 0x1d99a0: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D99A0u;
    {
        const bool branch_taken_0x1d99a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99A0u;
        // 0x1d99a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99a0) {
            ctx->pc = 0x1D99C8u;
            goto label_1d99c8;
        }
    }
    ctx->pc = 0x1D99A8u;
    // 0x1d99a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d99ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d99b0: 0x0  nop
    ctx->pc = 0x1d99b0u;
    // NOP
    // 0x1d99b4: 0x0  nop
    ctx->pc = 0x1d99b4u;
    // NOP
    // 0x1d99b8: 0x0  nop
    ctx->pc = 0x1d99b8u;
    // NOP
    // 0x1d99bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D99BCu;
    {
        const bool branch_taken_0x1d99bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d99bc) {
            ctx->pc = 0x1D99A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d99a0;
        }
    }
    ctx->pc = 0x1D99C4u;
label_1d99c4:
    // 0x1d99c4: 0x8cc20898  lw          $v0, 0x898($a2)
    ctx->pc = 0x1d99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2200)));
label_1d99c8:
    // 0x1d99c8: 0xac8208a0  sw          $v0, 0x8A0($a0)
    ctx->pc = 0x1d99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2208), GPR_U32(ctx, 2));
    // 0x1d99cc: 0x8c8208a0  lw          $v0, 0x8A0($a0)
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2208)));
    // 0x1d99d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d99d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D99D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99D4u;
        // 0x1d99d8: 0xac8308a4  sw          $v1, 0x8A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D99D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D99DCu;
}
