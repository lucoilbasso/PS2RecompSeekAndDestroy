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

// Function: entry_001b8a4c
// Address: 0x1b8a4c - 0x1b8a80
void entry_001b8a4c_0x1b8a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8a4c_0x1b8a4c");
#endif

    switch (ctx->pc) {
        case 0x1b8a64u: goto label_1b8a64;
        default: break;
    }

    ctx->pc = 0x1b8a4cu;

    // 0x1b8a4c: 0x2630d3c0  addiu       $s0, $s1, -0x2C40
    ctx->pc = 0x1b8a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955968));
    // 0x1b8a50: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b8a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a58: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1b8a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1b8a5c: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1B8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1B8A64u);
    ctx->pc = 0x1B8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A5Cu;
    // 0x1b8a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1B8A5Cu, 0x1B8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A64u;
label_1b8a64:
    // 0x1b8a64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b8a68: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B8A68u;
    {
        const bool branch_taken_0x1b8a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A68u;
        // 0x1b8a6c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a68) {
            ctx->pc = 0x1B8A28u;
            return;
        }
    }
    ctx->pc = 0x1B8A70u;
    // 0x1b8a70: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b8a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B8A74u;
    {
        const bool branch_taken_0x1b8a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A74u;
        // 0x1b8a78: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a74) {
            ctx->pc = 0x1B8AA4u;
            return;
        }
    }
    ctx->pc = 0x1B8A7Cu;
    // 0x1b8a7c: 0x0  nop
    ctx->pc = 0x1b8a7cu;
    // NOP
    ctx->pc = 0x1b8a80u;
}
