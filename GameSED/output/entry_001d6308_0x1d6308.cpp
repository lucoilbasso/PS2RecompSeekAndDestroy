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

// Function: entry_001d6308
// Address: 0x1d6308 - 0x1d631c
void entry_001d6308_0x1d6308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6308_0x1d6308");
#endif

    switch (ctx->pc) {
        case 0x1d6318u: goto label_1d6318;
        default: break;
    }

    ctx->pc = 0x1d6308u;

    // 0x1d6308: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1d6308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d630c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d630cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d6310: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D6310u;
    SET_GPR_U32(ctx, 31, 0x1D6318u);
    ctx->pc = 0x1D6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6310u;
    // 0x1d6314: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D6310u, 0x1D6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6318u;
label_1d6318:
    // 0x1d6318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d631cu;
}
