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

// Function: entry_001bb724
// Address: 0x1bb724 - 0x1bb74c
void entry_001bb724_0x1bb724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb724_0x1bb724");
#endif

    switch (ctx->pc) {
        case 0x1bb740u: goto label_1bb740;
        default: break;
    }

    ctx->pc = 0x1bb724u;

    // 0x1bb724: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x1bb728: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bb728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb72c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bb72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb730: 0x2508d918  addiu       $t0, $t0, -0x26E8
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957336));
    // 0x1bb734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb738: 0xc06ee1c  jal         func_1BB870
    ctx->pc = 0x1BB738u;
    SET_GPR_U32(ctx, 31, 0x1BB740u);
    ctx->pc = 0x1BB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB738u;
    // 0x1bb73c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB870u, 0x1BB738u, 0x1BB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB740u;
label_1bb740:
    // 0x1bb740: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1bb744: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1bb744u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1bb748: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x1bb748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1bb74cu;
}
