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

// Function: entry_001b7530
// Address: 0x1b7530 - 0x1b7560
void entry_001b7530_0x1b7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7530_0x1b7530");
#endif

    switch (ctx->pc) {
        case 0x1b7548u: goto label_1b7548;
        case 0x1b7550u: goto label_1b7550;
        case 0x1b755cu: goto label_1b755c;
        default: break;
    }

    ctx->pc = 0x1b7530u;

    // 0x1b7530: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b7530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b7534: 0x2443bab8  addiu       $v1, $v0, -0x4548
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949560));
    // 0x1b7538: 0xac40bab8  sw          $zero, -0x4548($v0)
    ctx->pc = 0x1b7538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40BAB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40BAB8u, _value); } while (0);
    // 0x1b753c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7540: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1B7540u;
    SET_GPR_U32(ctx, 31, 0x1B7548u);
    ctx->pc = 0x1B7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7540u;
    // 0x1b7544: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1B7540u, 0x1B7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7548u;
label_1b7548:
    // 0x1b7548: 0xc06bcd4  jal         func_1AF350
    ctx->pc = 0x1B7548u;
    SET_GPR_U32(ctx, 31, 0x1B7550u);
    ctx->pc = 0x1AF350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF350u, 0x1B7548u, 0x1B7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7550u;
label_1b7550:
    // 0x1b7550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7554: 0xc06bcbc  jal         func_1AF2F0
    ctx->pc = 0x1B7554u;
    SET_GPR_U32(ctx, 31, 0x1B755Cu);
    ctx->pc = 0x1B7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7554u;
    // 0x1b7558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2F0u, 0x1B7554u, 0x1B755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B755Cu;
label_1b755c:
    // 0x1b755c: 0x8e02b9b8  lw          $v0, -0x4648($s0)
    ctx->pc = 0x1b755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
    ctx->pc = 0x1b7560u;
}
