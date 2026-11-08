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

// Function: entry_00106c18
// Address: 0x106c18 - 0x106c50
void entry_00106c18_0x106c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c18_0x106c18");
#endif

    switch (ctx->pc) {
        case 0x106c3cu: goto label_106c3c;
        case 0x106c44u: goto label_106c44;
        default: break;
    }

    ctx->pc = 0x106c18u;

    // 0x106c18: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106c1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x106c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c28: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x106c28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106c2c: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x106c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x106c30: 0x24050e00  addiu       $a1, $zero, 0xE00
    ctx->pc = 0x106c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x106c34: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x106C34u;
    SET_GPR_U32(ctx, 31, 0x106C3Cu);
    ctx->pc = 0x106C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C34u;
    // 0x106c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x106C34u, 0x106C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C3Cu;
label_106c3c:
    // 0x106c3c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x106C3Cu;
    SET_GPR_U32(ctx, 31, 0x106C44u);
    ctx->pc = 0x106C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C3Cu;
    // 0x106c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x106C3Cu, 0x106C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C44u;
label_106c44:
    // 0x106c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c48: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x106C48u;
    SET_GPR_U32(ctx, 31, 0x106C50u);
    ctx->pc = 0x106C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C48u;
    // 0x106c4c: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x106C48u, 0x106C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C50u;
}
