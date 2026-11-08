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

// Function: entry_001a4910
// Address: 0x1a4910 - 0x1a4924
void entry_001a4910_0x1a4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4910_0x1a4910");
#endif

    ctx->pc = 0x1a4910u;

    // 0x1a4910: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a4914: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a4918: 0x24a59250  addiu       $a1, $a1, -0x6DB0
    ctx->pc = 0x1a4918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x1a491c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A491Cu;
    SET_GPR_U32(ctx, 31, 0x1A4924u);
    ctx->pc = 0x1A4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A491Cu;
    // 0x1a4920: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A491Cu, 0x1A4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4924u;
}
