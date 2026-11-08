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

// Function: entry_001534a4
// Address: 0x1534a4 - 0x1534c0
void entry_001534a4_0x1534a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001534a4_0x1534a4");
#endif

    switch (ctx->pc) {
        case 0x1534acu: goto label_1534ac;
        case 0x1534b4u: goto label_1534b4;
        default: break;
    }

    ctx->pc = 0x1534a4u;

    // 0x1534a4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1534A4u;
    SET_GPR_U32(ctx, 31, 0x1534ACu);
    ctx->pc = 0x1534A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534A4u;
    // 0x1534a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1534A4u, 0x1534ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534ACu;
label_1534ac:
    // 0x1534ac: 0xc059504  jal         func_165410
    ctx->pc = 0x1534ACu;
    SET_GPR_U32(ctx, 31, 0x1534B4u);
    ctx->pc = 0x1534B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534ACu;
    // 0x1534b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165410u, 0x1534ACu, 0x1534B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534B4u;
label_1534b4:
    // 0x1534b4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1534B4u;
    {
        const bool branch_taken_0x1534b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534B4u;
        // 0x1534b8: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534b4) {
            ctx->pc = 0x1535E0u;
            return;
        }
    }
    ctx->pc = 0x1534BCu;
    // 0x1534bc: 0x0  nop
    ctx->pc = 0x1534bcu;
    // NOP
    ctx->pc = 0x1534c0u;
}
