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

// Function: entry_001c390c
// Address: 0x1c390c - 0x1c3938
void entry_001c390c_0x1c390c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c390c_0x1c390c");
#endif

    switch (ctx->pc) {
        case 0x1c3918u: goto label_1c3918;
        case 0x1c392cu: goto label_1c392c;
        default: break;
    }

    ctx->pc = 0x1c390cu;

    // 0x1c390c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3910: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C3910u;
    SET_GPR_U32(ctx, 31, 0x1C3918u);
    ctx->pc = 0x1C3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3910u;
    // 0x1c3914: 0x2652825  or          $a1, $s3, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C3910u, 0x1C3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3918u;
label_1c3918:
    // 0x1c3918: 0x8e440858  lw          $a0, 0x858($s2)
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x1c391c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3920: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c3920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c3924: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C3924u;
    SET_GPR_U32(ctx, 31, 0x1C392Cu);
    ctx->pc = 0x1C3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3924u;
    // 0x1c3928: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C3924u, 0x1C392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C392Cu;
label_1c392c:
    // 0x1c392c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3930: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1c3930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1c3934: 0x0  nop
    ctx->pc = 0x1c3934u;
    // NOP
    ctx->pc = 0x1c3938u;
}
