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

// Function: entry_001cce10
// Address: 0x1cce10 - 0x1cce40
void entry_001cce10_0x1cce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cce10_0x1cce10");
#endif

    switch (ctx->pc) {
        case 0x1cce24u: goto label_1cce24;
        case 0x1cce34u: goto label_1cce34;
        case 0x1cce3cu: goto label_1cce3c;
        default: break;
    }

    ctx->pc = 0x1cce10u;

    // 0x1cce10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cce14: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce18: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cce1c: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CCE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE24u);
    ctx->pc = 0x1CCE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1Cu;
    // 0x1cce20: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCE1Cu, 0x1CCE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE24u;
label_1cce24:
    // 0x1cce24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCE24u;
    {
        const bool branch_taken_0x1cce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cce24) {
            ctx->pc = 0x1CCE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCE24u;
            // 0x1cce28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE40u;
            return;
        }
    }
    ctx->pc = 0x1CCE2Cu;
    // 0x1cce2c: 0xc07335c  jal         func_1CCD70
    ctx->pc = 0x1CCE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE34u);
    ctx->pc = 0x1CCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD70u, 0x1CCE2Cu, 0x1CCE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE34u;
label_1cce34:
    // 0x1cce34: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCE34u;
    SET_GPR_U32(ctx, 31, 0x1CCE3Cu);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCE34u, 0x1CCE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE3Cu;
label_1cce3c:
    // 0x1cce3c: 0x0  nop
    ctx->pc = 0x1cce3cu;
    // NOP
    ctx->pc = 0x1cce40u;
}
