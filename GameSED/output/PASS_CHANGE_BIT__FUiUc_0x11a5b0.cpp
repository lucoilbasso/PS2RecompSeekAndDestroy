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

// Function: PASS_CHANGE_BIT__FUiUc
// Address: 0x11a5b0 - 0x11a5f8
void PASS_CHANGE_BIT__FUiUc_0x11a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PASS_CHANGE_BIT__FUiUc_0x11a5b0");
#endif

    ctx->pc = 0x11a5b0u;

    // 0x11a5b0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x11a5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11a5b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a5b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11a5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11a5bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5c0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A5C0u;
    {
        const bool branch_taken_0x11a5c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5C0u;
        // 0x11a5c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5c0) {
            ctx->pc = 0x11A5D8u;
            goto label_11a5d8;
        }
    }
    ctx->pc = 0x11A5C8u;
    // 0x11a5c8: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x11a5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x11a5cc: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x11a5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x11a5d0: 0xa23806  srlv        $a3, $v0, $a1
    ctx->pc = 0x11a5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11a5d4: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x11a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_11a5d8:
    // 0x11a5d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11a5dc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A5DCu;
    {
        const bool branch_taken_0x11a5dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a5dc) {
            ctx->pc = 0x11A5F0u;
            goto label_11a5f0;
        }
    }
    ctx->pc = 0x11A5E4u;
    // 0x11a5e4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x11a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x11a5e8: 0xc43806  srlv        $a3, $a0, $a2
    ctx->pc = 0x11a5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a5ec: 0xc21804  sllv        $v1, $v0, $a2
    ctx->pc = 0x11a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_11a5f0:
    // 0x11a5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F0u;
        // 0x11a5f4: 0x671025  or          $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A5F8u;
}
