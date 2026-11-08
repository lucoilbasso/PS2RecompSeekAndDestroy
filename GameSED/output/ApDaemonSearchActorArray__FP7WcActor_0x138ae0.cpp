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

// Function: ApDaemonSearchActorArray__FP7WcActor
// Address: 0x138ae0 - 0x138b20
void ApDaemonSearchActorArray__FP7WcActor_0x138ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonSearchActorArray__FP7WcActor_0x138ae0");
#endif

    switch (ctx->pc) {
        case 0x138af0u: goto label_138af0;
        default: break;
    }

    ctx->pc = 0x138ae0u;

    // 0x138ae0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ae8: 0x2445c060  addiu       $a1, $v0, -0x3FA0
    ctx->pc = 0x138ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
    // 0x138aec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x138aecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC060u));
label_138af0:
    // 0x138af0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138af4: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138AF4u;
    {
        const bool branch_taken_0x138af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x138AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AF4u;
        // 0x138af8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138af4) {
            ctx->pc = 0x138B18u;
            goto label_138b18;
        }
    }
    ctx->pc = 0x138AFCu;
    // 0x138afc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x138b00: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x138b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x138b04: 0x0  nop
    ctx->pc = 0x138b04u;
    // NOP
    // 0x138b08: 0x0  nop
    ctx->pc = 0x138b08u;
    // NOP
    // 0x138b0c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x138B0Cu;
    {
        const bool branch_taken_0x138b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138b0c) {
            ctx->pc = 0x138B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138B0Cu;
            // 0x138b10: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138af0;
        }
    }
    ctx->pc = 0x138B14u;
    // 0x138b14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x138b14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138b18:
    // 0x138b18: 0x3e00008  jr          $ra
    ctx->pc = 0x138B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B18u;
        // 0x138b1c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B20u;
}
