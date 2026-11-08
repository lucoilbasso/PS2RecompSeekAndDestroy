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

// Function: entry_0017ea04
// Address: 0x17ea04 - 0x17ea2c
void entry_0017ea04_0x17ea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea04_0x17ea04");
#endif

    switch (ctx->pc) {
        case 0x17ea14u: goto label_17ea14;
        case 0x17ea28u: goto label_17ea28;
        default: break;
    }

    ctx->pc = 0x17ea04u;

    // 0x17ea04: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17ea08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17ea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea0c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x17EA0Cu;
    SET_GPR_U32(ctx, 31, 0x17EA14u);
    ctx->pc = 0x17EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA0Cu;
    // 0x17ea10: 0x24847c98  addiu       $a0, $a0, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x17EA0Cu, 0x17EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA14u;
label_17ea14:
    // 0x17ea14: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17ea18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea1c: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x17ea20: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17EA20u;
    SET_GPR_U32(ctx, 31, 0x17EA28u);
    ctx->pc = 0x17EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA20u;
    // 0x17ea24: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17EA20u, 0x17EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA28u;
label_17ea28:
    // 0x17ea28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ea28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ea2cu;
}
