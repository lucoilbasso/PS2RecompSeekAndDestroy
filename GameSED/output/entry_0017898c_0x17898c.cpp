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

// Function: entry_0017898c
// Address: 0x17898c - 0x1789bc
void entry_0017898c_0x17898c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017898c_0x17898c");
#endif

    switch (ctx->pc) {
        case 0x17899cu: goto label_17899c;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b4u: goto label_1789b4;
        default: break;
    }

    ctx->pc = 0x17898cu;

    // 0x17898c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178990: 0x27878cc0  addiu       $a3, $gp, -0x7340
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937792));
    // 0x178994: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x178994u;
    SET_GPR_U32(ctx, 31, 0x17899Cu);
    ctx->pc = 0x178998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178994u;
    // 0x178998: 0x8e060050  lw          $a2, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x178994u, 0x17899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17899Cu;
label_17899c:
    // 0x17899c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17899Cu;
    {
        const bool branch_taken_0x17899c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17899c) {
            ctx->pc = 0x178980u;
            return;
        }
    }
    ctx->pc = 0x1789A4u;
    // 0x1789a4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1789A4u;
    SET_GPR_U32(ctx, 31, 0x1789ACu);
    ctx->pc = 0x1789A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789A4u;
    // 0x1789a8: 0x8e241014  lw          $a0, 0x1014($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1789A4u, 0x1789ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789ACu;
label_1789ac:
    // 0x1789ac: 0xc05e276  jal         func_1789D8
    ctx->pc = 0x1789ACu;
    SET_GPR_U32(ctx, 31, 0x1789B4u);
    ctx->pc = 0x1789D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1789D8u, 0x1789ACu, 0x1789B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789B4u;
label_1789b4:
    // 0x1789b4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1789B4u;
    {
        const bool branch_taken_0x1789b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789B4u;
        // 0x1789b8: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789b4) {
            ctx->pc = 0x178970u;
            return;
        }
    }
    ctx->pc = 0x1789BCu;
}
