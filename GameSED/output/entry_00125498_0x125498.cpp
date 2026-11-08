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

// Function: entry_00125498
// Address: 0x125498 - 0x1254c4
void entry_00125498_0x125498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125498_0x125498");
#endif

    switch (ctx->pc) {
        case 0x1254a8u: goto label_1254a8;
        case 0x1254c0u: goto label_1254c0;
        default: break;
    }

    ctx->pc = 0x125498u;

    // 0x125498: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12549c: 0x27c5ebf0  addiu       $a1, $fp, -0x1410
    ctx->pc = 0x12549cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962160));
    // 0x1254a0: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x1254A0u;
    SET_GPR_U32(ctx, 31, 0x1254A8u);
    ctx->pc = 0x1254A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254A0u;
    // 0x1254a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x1254A0u, 0x1254A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254A8u;
label_1254a8:
    // 0x1254a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1254ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1254acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1254b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1254b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1254b8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x1254B8u;
    SET_GPR_U32(ctx, 31, 0x1254C0u);
    ctx->pc = 0x1254BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254B8u;
    // 0x1254bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x1254B8u, 0x1254C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254C0u;
label_1254c0:
    // 0x1254c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1254c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x1254c4u;
}
