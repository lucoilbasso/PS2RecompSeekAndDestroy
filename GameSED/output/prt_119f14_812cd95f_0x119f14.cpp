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

// Function: prt_119f14_812cd95f
// Address: 0x119f14 - 0x119f38
void prt_119f14_812cd95f_0x119f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prt_119f14_812cd95f_0x119f14");
#endif

    switch (ctx->pc) {
        case 0x119f1cu: goto label_119f1c;
        case 0x119f34u: goto label_119f34;
        default: break;
    }

    ctx->pc = 0x119f14u;

    // 0x119f14: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x119F14u;
    SET_GPR_U32(ctx, 31, 0x119F1Cu);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x119F14u, 0x119F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119f20: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x119f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x119f24: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119f28: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x119f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x119f2c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119F2Cu;
    SET_GPR_U32(ctx, 31, 0x119F34u);
    ctx->pc = 0x119F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F2Cu;
    // 0x119f30: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119F2Cu, 0x119F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F34u;
label_119f34:
    // 0x119f34: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x119f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x119f38u;
}
