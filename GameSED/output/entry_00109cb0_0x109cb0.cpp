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

// Function: entry_00109cb0
// Address: 0x109cb0 - 0x109cdc
void entry_00109cb0_0x109cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109cb0_0x109cb0");
#endif

    switch (ctx->pc) {
        case 0x109cb8u: goto label_109cb8;
        case 0x109cc4u: goto label_109cc4;
        case 0x109cd8u: goto label_109cd8;
        default: break;
    }

    ctx->pc = 0x109cb0u;

    // 0x109cb0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109CB0u;
    SET_GPR_U32(ctx, 31, 0x109CB8u);
    ctx->pc = 0x109CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CB0u;
    // 0x109cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109CB0u, 0x109CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CB8u;
label_109cb8:
    // 0x109cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cbc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109CBCu;
    SET_GPR_U32(ctx, 31, 0x109CC4u);
    ctx->pc = 0x109CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CBCu;
    // 0x109cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109CBCu, 0x109CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC4u;
label_109cc4:
    // 0x109cc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x109cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ccc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cd0: 0xc064112  jal         func_190448
    ctx->pc = 0x109CD0u;
    SET_GPR_U32(ctx, 31, 0x109CD8u);
    ctx->pc = 0x109CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CD0u;
    // 0x109cd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190448u, 0x109CD0u, 0x109CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CD8u;
label_109cd8:
    // 0x109cd8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x109cdcu;
}
