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

// Function: entry_001a3f78
// Address: 0x1a3f78 - 0x1a3f90
void entry_001a3f78_0x1a3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3f78_0x1a3f78");
#endif

    switch (ctx->pc) {
        case 0x1a3f8cu: goto label_1a3f8c;
        default: break;
    }

    ctx->pc = 0x1a3f78u;

    // 0x1a3f78: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a3f7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a3f80: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
    // 0x1a3f84: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A3F84u;
    SET_GPR_U32(ctx, 31, 0x1A3F8Cu);
    ctx->pc = 0x1A3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F84u;
    // 0x1a3f88: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A3F84u, 0x1A3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F8Cu;
label_1a3f8c:
    // 0x1a3f8c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1a3f90u;
}
