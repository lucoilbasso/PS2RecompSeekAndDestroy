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

// Function: entry_00187e9c
// Address: 0x187e9c - 0x187ec8
void entry_00187e9c_0x187e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e9c_0x187e9c");
#endif

    switch (ctx->pc) {
        case 0x187ea4u: goto label_187ea4;
        case 0x187eb4u: goto label_187eb4;
        case 0x187ebcu: goto label_187ebc;
        default: break;
    }

    ctx->pc = 0x187e9cu;

    // 0x187e9c: 0xc061e60  jal         func_187980
    ctx->pc = 0x187E9Cu;
    SET_GPR_U32(ctx, 31, 0x187EA4u);
    ctx->pc = 0x187EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E9Cu;
    // 0x187ea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187980u, 0x187E9Cu, 0x187EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EA4u;
label_187ea4:
    // 0x187ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187eac: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x187EACu;
    SET_GPR_U32(ctx, 31, 0x187EB4u);
    ctx->pc = 0x187EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EACu;
    // 0x187eb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x187EACu, 0x187EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EB4u;
label_187eb4:
    // 0x187eb4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x187EB4u;
    SET_GPR_U32(ctx, 31, 0x187EBCu);
    ctx->pc = 0x187EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EB4u;
    // 0x187eb8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187EB4u, 0x187EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EBCu;
label_187ebc:
    // 0x187ebc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x187ec0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x187ec4: 0x0  nop
    ctx->pc = 0x187ec4u;
    // NOP
    ctx->pc = 0x187ec8u;
}
