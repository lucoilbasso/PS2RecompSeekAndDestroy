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

// Function: ApUnitSearchOptionCounter__FP7ApcUnitPi
// Address: 0x14cba0 - 0x14cbc4
void ApUnitSearchOptionCounter__FP7ApcUnitPi_0x14cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitSearchOptionCounter__FP7ApcUnitPi_0x14cba0");
#endif

    switch (ctx->pc) {
        case 0x14cba8u: goto label_14cba8;
        default: break;
    }

    ctx->pc = 0x14cba0u;

    // 0x14cba0: 0x8c8301bc  lw          $v1, 0x1BC($a0)
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x14cba4: 0x0  nop
    ctx->pc = 0x14cba4u;
    // NOP
label_14cba8:
    // 0x14cba8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CBA8u;
    {
        const bool branch_taken_0x14cba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cba8) {
            ctx->pc = 0x14CBBCu;
            goto label_14cbbc;
        }
    }
    ctx->pc = 0x14CBB0u;
    // 0x14cbb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14cbb4: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14CBB4u;
    {
        const bool branch_taken_0x14cbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x14cbb4) {
            ctx->pc = 0x14CBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CBB4u;
            // 0x14cbb8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cba8;
        }
    }
    ctx->pc = 0x14CBBCu;
label_14cbbc:
    // 0x14cbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBBCu;
        // 0x14cbc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CBC4u;
}
