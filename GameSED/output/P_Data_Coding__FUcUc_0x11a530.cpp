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

// Function: P_Data_Coding__FUcUc
// Address: 0x11a530 - 0x11a56c
void P_Data_Coding__FUcUc_0x11a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("P_Data_Coding__FUcUc_0x11a530");
#endif

    ctx->pc = 0x11a530u;

    // 0x11a530: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x11a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11a534: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11a534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a53c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x11a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11a540: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x11a540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a544: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x11a544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a54c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x11a54cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a550: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x11a550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11a554: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x11a554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a558: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11a558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11a55c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x11a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x11a560: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x11a560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11a564: 0x3e00008  jr          $ra
    ctx->pc = 0x11A564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A564u;
        // 0x11a568: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A56Cu;
}
