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

// Function: entry_00128df0
// Address: 0x128df0 - 0x128e24
void entry_00128df0_0x128df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128df0_0x128df0");
#endif

    switch (ctx->pc) {
        case 0x128df8u: goto label_128df8;
        case 0x128e00u: goto label_128e00;
        default: break;
    }

    ctx->pc = 0x128df0u;

    // 0x128df0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128DF0u;
    SET_GPR_U32(ctx, 31, 0x128DF8u);
    ctx->pc = 0x128DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF0u;
    // 0x128df4: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128DF0u, 0x128DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DF8u;
label_128df8:
    // 0x128df8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128DF8u;
    SET_GPR_U32(ctx, 31, 0x128E00u);
    ctx->pc = 0x128DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF8u;
    // 0x128dfc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128DF8u, 0x128E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E00u;
label_128e00:
    // 0x128e00: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x128e04: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x128e08: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x128e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128e0c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x128e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128e10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x128e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x128e14: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x128e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x128e18: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x128e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x128e1c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x128E1Cu;
    SET_GPR_U32(ctx, 31, 0x128E24u);
    ctx->pc = 0x128E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E1Cu;
    // 0x128e20: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x128E1Cu, 0x128E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E24u;
}
