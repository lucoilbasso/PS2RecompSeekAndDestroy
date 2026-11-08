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

// Function: entry_001c6790
// Address: 0x1c6790 - 0x1c67e8
void entry_001c6790_0x1c6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6790_0x1c6790");
#endif

    switch (ctx->pc) {
        case 0x1c67bcu: goto label_1c67bc;
        default: break;
    }

    ctx->pc = 0x1c6790u;

    // 0x1c6790: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x1c6794: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x1c6798: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c6798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c679c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C679Cu;
    {
        const bool branch_taken_0x1c679c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C679Cu;
        // 0x1c67a0: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c679c) {
            ctx->pc = 0x1C68E8u;
            return;
        }
    }
    ctx->pc = 0x1C67A4u;
    // 0x1c67a4: 0x1bc00028  blez        $fp, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C67A4u;
    {
        const bool branch_taken_0x1c67a4 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x1c67a4) {
            ctx->pc = 0x1C6848u;
            return;
        }
    }
    ctx->pc = 0x1C67ACu;
    // 0x1c67ac: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67b0: 0xdc25b9e0  ld          $a1, -0x4620($at)
    ctx->pc = 0x1c67b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25B9E0u));
    // 0x1c67b4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C67B4u;
    SET_GPR_U32(ctx, 31, 0x1C67BCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C67B4u, 0x1C67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67BCu;
label_1c67bc:
    // 0x1c67bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c67bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67c0: 0x3c023ff9  lui         $v0, 0x3FF9
    ctx->pc = 0x1c67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16377 << 16));
    // 0x1c67c4: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c67c8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C67C8u;
    {
        const bool branch_taken_0x1c67c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c67c8) {
            ctx->pc = 0x1C67E8u;
            return;
        }
    }
    ctx->pc = 0x1C67D0u;
    // 0x1c67d0: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67d4: 0xdc30b9e8  ld          $s0, -0x4618($at)
    ctx->pc = 0x1c67d4u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25B9E8u));
    // 0x1c67d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c67d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c67dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C67E0u;
    {
        const bool branch_taken_0x1c67e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c67e0) {
            ctx->pc = 0x1C6810u;
            return;
        }
    }
    ctx->pc = 0x1C67E8u;
}
