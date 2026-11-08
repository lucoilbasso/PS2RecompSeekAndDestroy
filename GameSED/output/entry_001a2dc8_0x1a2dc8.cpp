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

// Function: entry_001a2dc8
// Address: 0x1a2dc8 - 0x1a2de0
void entry_001a2dc8_0x1a2dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2dc8_0x1a2dc8");
#endif

    switch (ctx->pc) {
        case 0x1a2ddcu: goto label_1a2ddc;
        default: break;
    }

    ctx->pc = 0x1a2dc8u;

    // 0x1a2dc8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a2dcc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2dd0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a2dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a2dd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2DD4u;
    SET_GPR_U32(ctx, 31, 0x1A2DDCu);
    ctx->pc = 0x1A2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DD4u;
    // 0x1a2dd8: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2DD4u, 0x1A2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DDCu;
label_1a2ddc:
    // 0x1a2ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2de0u;
}
