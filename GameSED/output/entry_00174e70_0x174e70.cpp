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

// Function: entry_00174e70
// Address: 0x174e70 - 0x174ea8
void entry_00174e70_0x174e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e70_0x174e70");
#endif

    switch (ctx->pc) {
        case 0x174e80u: goto label_174e80;
        case 0x174e9cu: goto label_174e9c;
        default: break;
    }

    ctx->pc = 0x174e70u;

    // 0x174e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e78: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x174E78u;
    SET_GPR_U32(ctx, 31, 0x174E80u);
    ctx->pc = 0x174E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E78u;
    // 0x174e7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x174E78u, 0x174E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E80u;
label_174e80:
    // 0x174e80: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174E80u;
    {
        const bool branch_taken_0x174e80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x174E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E80u;
        // 0x174e84: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e80) {
            ctx->pc = 0x174EA8u;
            return;
        }
    }
    ctx->pc = 0x174E88u;
    // 0x174e88: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174e8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x174e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e90: 0x24847808  addiu       $a0, $a0, 0x7808
    ctx->pc = 0x174e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30728));
    // 0x174e94: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174E94u;
    SET_GPR_U32(ctx, 31, 0x174E9Cu);
    ctx->pc = 0x174E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E94u;
    // 0x174e98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174E94u, 0x174E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E9Cu;
label_174e9c:
    // 0x174e9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174E9Cu;
    {
        const bool branch_taken_0x174e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e9c) {
            ctx->pc = 0x174ED0u;
            return;
        }
    }
    ctx->pc = 0x174EA4u;
    // 0x174ea4: 0x0  nop
    ctx->pc = 0x174ea4u;
    // NOP
    ctx->pc = 0x174ea8u;
}
