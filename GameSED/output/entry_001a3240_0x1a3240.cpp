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

// Function: entry_001a3240
// Address: 0x1a3240 - 0x1a3258
void entry_001a3240_0x1a3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3240_0x1a3240");
#endif

    switch (ctx->pc) {
        case 0x1a3254u: goto label_1a3254;
        default: break;
    }

    ctx->pc = 0x1a3240u;

    // 0x1a3240: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a3240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a3244: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a3248: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1a3248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x1a324c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A324Cu;
    SET_GPR_U32(ctx, 31, 0x1A3254u);
    ctx->pc = 0x1A3250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A324Cu;
    // 0x1a3250: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A324Cu, 0x1A3254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3254u;
label_1a3254:
    // 0x1a3254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a3258u;
}
