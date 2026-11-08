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

// Function: entry_0017c518
// Address: 0x17c518 - 0x17c540
void entry_0017c518_0x17c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c518_0x17c518");
#endif

    switch (ctx->pc) {
        case 0x17c524u: goto label_17c524;
        case 0x17c534u: goto label_17c534;
        default: break;
    }

    ctx->pc = 0x17c518u;

    // 0x17c518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c51c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x17C51Cu;
    SET_GPR_U32(ctx, 31, 0x17C524u);
    ctx->pc = 0x17C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C51Cu;
    // 0x17c520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x17C51Cu, 0x17C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C524u;
label_17c524:
    // 0x17c524: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x17c528: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x17c528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c52c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C52Cu;
    SET_GPR_U32(ctx, 31, 0x17C534u);
    ctx->pc = 0x17C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C52Cu;
    // 0x17c530: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C52Cu, 0x17C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C534u;
label_17c534:
    // 0x17c534: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x17c538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17c538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c53c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x17c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    ctx->pc = 0x17c540u;
}
