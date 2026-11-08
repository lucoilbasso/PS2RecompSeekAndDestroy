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

// Function: entry_001d4d90
// Address: 0x1d4d90 - 0x1d4dbc
void entry_001d4d90_0x1d4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4d90_0x1d4d90");
#endif

    switch (ctx->pc) {
        case 0x1d4da0u: goto label_1d4da0;
        default: break;
    }

    ctx->pc = 0x1d4d90u;

    // 0x1d4d90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d94: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1d4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d98: 0xc075487  jal         func_1D521C
    ctx->pc = 0x1D4D98u;
    SET_GPR_U32(ctx, 31, 0x1D4DA0u);
    ctx->pc = 0x1D4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D98u;
    // 0x1d4d9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4D98u, 0x1D4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DA0u;
label_1d4da0:
    // 0x1d4da0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d4da4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4da8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d4dac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4db0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1d4db4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d4db8: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x1d4dbcu;
}
