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

// Function: ApRsc3DEffectJobProc__FP8ApcRsc3DP10WcSequence
// Address: 0x1459e8 - 0x145a20
void ApRsc3DEffectJobProc__FP8ApcRsc3DP10WcSequence_0x1459e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DEffectJobProc__FP8ApcRsc3DP10WcSequence_0x1459e8");
#endif

    switch (ctx->pc) {
        case 0x145a14u: goto label_145a14;
        default: break;
    }

    ctx->pc = 0x1459e8u;

    // 0x1459e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1459e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1459ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1459ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1459f0: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1459f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1459f4: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x1459f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1459f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1459f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1459fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1459FCu;
    {
        const bool branch_taken_0x1459fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459FCu;
        // 0x145a00: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459fc) {
            ctx->pc = 0x145A14u;
            goto label_145a14;
        }
    }
    ctx->pc = 0x145A04u;
    // 0x145a04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x145A04u;
    {
        const bool branch_taken_0x145a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a04) {
            ctx->pc = 0x145A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145A04u;
            // 0x145a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145A18u;
            goto label_145a18;
        }
    }
    ctx->pc = 0x145A0Cu;
    // 0x145a0c: 0xc04b9ca  jal         func_12E728
    ctx->pc = 0x145A0Cu;
    SET_GPR_U32(ctx, 31, 0x145A14u);
    ctx->pc = 0x12E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E728u, 0x145A0Cu, 0x145A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A14u;
label_145a14:
    // 0x145a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145a18:
    // 0x145a18: 0x3e00008  jr          $ra
    ctx->pc = 0x145A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A18u;
        // 0x145a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145A20u;
}
