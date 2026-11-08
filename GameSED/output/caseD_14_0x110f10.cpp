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

// Function: caseD_14
// Address: 0x110f10 - 0x110f30
void caseD_14_0x110f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x110f10");
#endif

    switch (ctx->pc) {
        case 0x110f1cu: goto label_110f1c;
        case 0x110f28u: goto label_110f28;
        default: break;
    }

    ctx->pc = 0x110f10u;

    // 0x110f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f14: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110F14u;
    SET_GPR_U32(ctx, 31, 0x110F1Cu);
    ctx->pc = 0x110F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F14u;
    // 0x110f18: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110F14u, 0x110F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F1Cu;
label_110f1c:
    // 0x110f1c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x110f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x110f20: 0xc04e2a0  jal         func_138A80
    ctx->pc = 0x110F20u;
    SET_GPR_U32(ctx, 31, 0x110F28u);
    ctx->pc = 0x110F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F20u;
    // 0x110f24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A80u, 0x110F20u, 0x110F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F28u;
label_110f28:
    // 0x110f28: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x110F28u;
    {
        const bool branch_taken_0x110f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F28u;
        // 0x110f2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f28) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110F30u;
}
