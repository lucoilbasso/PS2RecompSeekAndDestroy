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

// Function: entry_001a2ef8
// Address: 0x1a2ef8 - 0x1a2f10
void entry_001a2ef8_0x1a2ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ef8_0x1a2ef8");
#endif

    switch (ctx->pc) {
        case 0x1a2f0cu: goto label_1a2f0c;
        default: break;
    }

    ctx->pc = 0x1a2ef8u;

    // 0x1a2ef8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a2ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a2efc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a2f00: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a2f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
    // 0x1a2f04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2F04u;
    SET_GPR_U32(ctx, 31, 0x1A2F0Cu);
    ctx->pc = 0x1A2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F04u;
    // 0x1a2f08: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2F04u, 0x1A2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F0Cu;
label_1a2f0c:
    // 0x1a2f0c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1a2f10u;
}
