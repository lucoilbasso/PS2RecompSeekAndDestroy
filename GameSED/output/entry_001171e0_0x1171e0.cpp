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

// Function: entry_001171e0
// Address: 0x1171e0 - 0x117200
void entry_001171e0_0x1171e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171e0_0x1171e0");
#endif

    switch (ctx->pc) {
        case 0x1171ecu: goto label_1171ec;
        case 0x1171fcu: goto label_1171fc;
        default: break;
    }

    ctx->pc = 0x1171e0u;

    // 0x1171e0: 0x27c442c0  addiu       $a0, $fp, 0x42C0
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 17088));
    // 0x1171e4: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1171E4u;
    SET_GPR_U32(ctx, 31, 0x1171ECu);
    ctx->pc = 0x1171E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171E4u;
    // 0x1171e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1171E4u, 0x1171ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171ECu;
label_1171ec:
    // 0x1171ec: 0x26e4c540  addiu       $a0, $s7, -0x3AC0
    ctx->pc = 0x1171ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952256));
    // 0x1171f0: 0x26c5d1a0  addiu       $a1, $s6, -0x2E60
    ctx->pc = 0x1171f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955424));
    // 0x1171f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1171F4u;
    SET_GPR_U32(ctx, 31, 0x1171FCu);
    ctx->pc = 0x1171F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171F4u;
    // 0x1171f8: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1171F4u, 0x1171FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171FCu;
label_1171fc:
    // 0x1171fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1171fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x117200u;
}
