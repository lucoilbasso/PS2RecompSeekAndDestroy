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

// Function: P_Data_DeCoding__FUcUc
// Address: 0x11a570 - 0x11a5b0
void P_Data_DeCoding__FUcUc_0x11a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("P_Data_DeCoding__FUcUc_0x11a570");
#endif

    ctx->pc = 0x11a570u;

    // 0x11a570: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a574: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x11a574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11a578: 0x41102  srl         $v0, $a0, 4
    ctx->pc = 0x11a578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x11a57c: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x11a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a580: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x11a580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a584: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11a588: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a58c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a590: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x11a590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a594: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11a594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11a598: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x11a598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x11a59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a5a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11a5a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x11a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11a5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5A8u;
        // 0x11a5ac: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A5B0u;
}
