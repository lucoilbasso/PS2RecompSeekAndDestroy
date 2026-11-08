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

// Function: entry_00107518
// Address: 0x107518 - 0x107530
void entry_00107518_0x107518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107518_0x107518");
#endif

    switch (ctx->pc) {
        case 0x10752cu: goto label_10752c;
        default: break;
    }

    ctx->pc = 0x107518u;

    // 0x107518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10751c: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x10751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x107520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107524: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x107524u;
    SET_GPR_U32(ctx, 31, 0x10752Cu);
    ctx->pc = 0x107528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107524u;
    // 0x107528: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x107524u, 0x10752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10752Cu;
label_10752c:
    // 0x10752c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10752cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x107530u;
}
