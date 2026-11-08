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

// Function: entry_001b0274
// Address: 0x1b0274 - 0x1b02a4
void entry_001b0274_0x1b0274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0274_0x1b0274");
#endif

    switch (ctx->pc) {
        case 0x1b028cu: goto label_1b028c;
        default: break;
    }

    ctx->pc = 0x1b0274u;

    // 0x1b0274: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b0278: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1b027c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1b027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b0280: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b0280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0284: 0xc06ddfc  jal         func_1B77F0
    ctx->pc = 0x1B0284u;
    SET_GPR_U32(ctx, 31, 0x1B028Cu);
    ctx->pc = 0x1B0288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0284u;
    // 0x1b0288: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B77F0u, 0x1B0284u, 0x1B028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B028Cu;
label_1b028c:
    // 0x1b028c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b028cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0290: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0290u;
    {
        const bool branch_taken_0x1b0290 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b0290) {
            ctx->pc = 0x1B02A4u;
            return;
        }
    }
    ctx->pc = 0x1B0298u;
    // 0x1b0298: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b029c: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B029Cu;
    SET_GPR_U32(ctx, 31, 0x1B02A4u);
    ctx->pc = 0x1B02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B029Cu;
    // 0x1b02a0: 0x2484aa70  addiu       $a0, $a0, -0x5590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B029Cu, 0x1B02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02A4u;
}
