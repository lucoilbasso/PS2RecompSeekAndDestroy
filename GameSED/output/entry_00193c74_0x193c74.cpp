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

// Function: entry_00193c74
// Address: 0x193c74 - 0x193cb0
void entry_00193c74_0x193c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c74_0x193c74");
#endif

    ctx->pc = 0x193c74u;

    // 0x193c74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193c78: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193c7c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x193c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x193c80: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x193c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x193c84: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x193c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x193c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193c8c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x193c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x193c90: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x193c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x193c94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x193c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193c98: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193C98u;
    {
        const bool branch_taken_0x193c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x193C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C98u;
        // 0x193c9c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c98) {
            ctx->pc = 0x193CB0u;
            return;
        }
    }
    ctx->pc = 0x193CA0u;
    // 0x193ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ca4: 0x24a58220  addiu       $a1, $a1, -0x7DE0
    ctx->pc = 0x193ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    // 0x193ca8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193CA8u;
    SET_GPR_U32(ctx, 31, 0x193CB0u);
    ctx->pc = 0x193CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CA8u;
    // 0x193cac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193CA8u, 0x193CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CB0u;
}
