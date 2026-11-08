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

// Function: entry_001a30d8
// Address: 0x1a30d8 - 0x1a30f0
void entry_001a30d8_0x1a30d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a30d8_0x1a30d8");
#endif

    switch (ctx->pc) {
        case 0x1a30ecu: goto label_1a30ec;
        default: break;
    }

    ctx->pc = 0x1a30d8u;

    // 0x1a30d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a30dc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a30e0: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x1a30e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A30E4u;
    SET_GPR_U32(ctx, 31, 0x1A30ECu);
    ctx->pc = 0x1A30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30E4u;
    // 0x1a30e8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A30E4u, 0x1A30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30ECu;
label_1a30ec:
    // 0x1a30ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a30ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a30f0u;
}
