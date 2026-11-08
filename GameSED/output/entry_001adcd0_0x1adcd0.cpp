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

// Function: entry_001adcd0
// Address: 0x1adcd0 - 0x1add08
void entry_001adcd0_0x1adcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adcd0_0x1adcd0");
#endif

    switch (ctx->pc) {
        case 0x1adce8u: goto label_1adce8;
        case 0x1add00u: goto label_1add00;
        default: break;
    }

    ctx->pc = 0x1adcd0u;

label_1adcd0:
    // 0x1adcd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1adcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adcd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1adcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcdc: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adce0: 0xc06b90c  jal         func_1AE430
    ctx->pc = 0x1ADCE0u;
    SET_GPR_U32(ctx, 31, 0x1ADCE8u);
    ctx->pc = 0x1ADCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCE0u;
    // 0x1adce4: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE430u, 0x1ADCE0u, 0x1ADCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCE8u;
label_1adce8:
    // 0x1adce8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1adcec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1adcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcf8: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1ADCF8u;
    SET_GPR_U32(ctx, 31, 0x1ADD00u);
    ctx->pc = 0x1ADCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCF8u;
    // 0x1adcfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1ADCF8u, 0x1ADD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD00u;
label_1add00:
    // 0x1add00: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1ADD00u;
    {
        const bool branch_taken_0x1add00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD00u;
        // 0x1add04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add00) {
            ctx->pc = 0x1ADCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adcd0;
        }
    }
    ctx->pc = 0x1ADD08u;
}
