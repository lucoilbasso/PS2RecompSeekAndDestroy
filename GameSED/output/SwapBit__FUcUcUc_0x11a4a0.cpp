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

// Function: SwapBit__FUcUcUc
// Address: 0x11a4a0 - 0x11a4f4
void SwapBit__FUcUcUc_0x11a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SwapBit__FUcUcUc_0x11a4a0");
#endif

    ctx->pc = 0x11a4a0u;

    // 0x11a4a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x11a4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11a4a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11a4a8: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x11a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a4ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x11a4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11a4b0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x11a4b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x11a4b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x11a4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11a4b8: 0x441007  srav        $v0, $a0, $v0
    ctx->pc = 0x11a4b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x11a4bc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x11a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x11a4c0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11a4c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x11a4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11a4c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x11a4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11a4cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a4d0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x11a4d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x11a4d4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x11a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a4d8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x11a4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x11a4dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a4e0: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a4e4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x11a4e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a4e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4ECu;
        // 0x11a4f0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A4F4u;
}
