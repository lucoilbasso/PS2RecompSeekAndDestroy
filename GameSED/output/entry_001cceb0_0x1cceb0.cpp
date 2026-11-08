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

// Function: entry_001cceb0
// Address: 0x1cceb0 - 0x1ccee0
void entry_001cceb0_0x1cceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cceb0_0x1cceb0");
#endif

    switch (ctx->pc) {
        case 0x1ccec4u: goto label_1ccec4;
        case 0x1cced4u: goto label_1cced4;
        case 0x1ccedcu: goto label_1ccedc;
        default: break;
    }

    ctx->pc = 0x1cceb0u;

    // 0x1cceb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cceb4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1cceb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceb8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ccebc: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CCEBCu;
    SET_GPR_U32(ctx, 31, 0x1CCEC4u);
    ctx->pc = 0x1CCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEBCu;
    // 0x1ccec0: 0x8e660008  lw          $a2, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCEBCu, 0x1CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEC4u;
label_1ccec4:
    // 0x1ccec4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCEC4u;
    {
        const bool branch_taken_0x1ccec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccec4) {
            ctx->pc = 0x1CCEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCEC4u;
            // 0x1ccec8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCEE0u;
            return;
        }
    }
    ctx->pc = 0x1CCECCu;
    // 0x1ccecc: 0xc07335c  jal         func_1CCD70
    ctx->pc = 0x1CCECCu;
    SET_GPR_U32(ctx, 31, 0x1CCED4u);
    ctx->pc = 0x1CCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD70u, 0x1CCECCu, 0x1CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCED4u;
    SET_GPR_U32(ctx, 31, 0x1CCEDCu);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCED4u, 0x1CCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0x0  nop
    ctx->pc = 0x1ccedcu;
    // NOP
    ctx->pc = 0x1ccee0u;
}
