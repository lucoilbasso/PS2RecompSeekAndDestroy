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

// Function: entry_00144038
// Address: 0x144038 - 0x144054
void entry_00144038_0x144038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144038_0x144038");
#endif

    switch (ctx->pc) {
        case 0x144044u: goto label_144044;
        case 0x144050u: goto label_144050;
        default: break;
    }

    ctx->pc = 0x144038u;

    // 0x144038: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x144038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14403c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14403Cu;
    SET_GPR_U32(ctx, 31, 0x144044u);
    ctx->pc = 0x144040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14403Cu;
    // 0x144040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14403Cu, 0x144044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144044u;
label_144044:
    // 0x144044: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x144044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x144048: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x144048u;
    SET_GPR_U32(ctx, 31, 0x144050u);
    ctx->pc = 0x14404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144048u;
    // 0x14404c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x144048u, 0x144050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144050u;
label_144050:
    // 0x144050: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->pc = 0x144054u;
}
