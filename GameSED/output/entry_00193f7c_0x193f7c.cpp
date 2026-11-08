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

// Function: entry_00193f7c
// Address: 0x193f7c - 0x193fa4
void entry_00193f7c_0x193f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193f7c_0x193f7c");
#endif

    ctx->pc = 0x193f7cu;

    // 0x193f7c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x193f80: 0x4012  mflo        $t0
    ctx->pc = 0x193f80u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x193f84: 0xae28001c  sw          $t0, 0x1C($s1)
    ctx->pc = 0x193f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 8));
    // 0x193f88: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x193f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x193f8c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F8Cu;
    {
        const bool branch_taken_0x193f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x193F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F8Cu;
        // 0x193f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f8c) {
            ctx->pc = 0x193FA4u;
            return;
        }
    }
    ctx->pc = 0x193F94u;
    // 0x193f94: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193f98: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x193f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x193f9c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193F9Cu;
    SET_GPR_U32(ctx, 31, 0x193FA4u);
    ctx->pc = 0x193FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F9Cu;
    // 0x193fa0: 0x24a58258  addiu       $a1, $a1, -0x7DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193F9Cu, 0x193FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FA4u;
}
