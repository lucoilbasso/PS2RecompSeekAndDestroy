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

// Function: SwapBit32__FUiUcUc
// Address: 0x11a4f8 - 0x11a530
void SwapBit32__FUiUcUc_0x11a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SwapBit32__FUiUcUc_0x11a4f8");
#endif

    ctx->pc = 0x11a4f8u;

    // 0x11a4f8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x11a4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11a4fc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11a4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11a500: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11a500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a504: 0xe52023  subu        $a0, $a3, $a1
    ctx->pc = 0x11a504u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11a508: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x11a508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x11a50c: 0x831004  sllv        $v0, $v1, $a0
    ctx->pc = 0x11a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a510: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x11a510u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11a514: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x11a514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x11a518: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x11a518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a51c: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x11a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x11a520: 0xe31806  srlv        $v1, $v1, $a3
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x11a524: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a528: 0x3e00008  jr          $ra
    ctx->pc = 0x11A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A528u;
        // 0x11a52c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A530u;
}
