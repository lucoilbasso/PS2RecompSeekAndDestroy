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

// Function: sceDevFontSetColor
// Address: 0x1ad100 - 0x1ad138
void sceDevFontSetColor_0x1ad100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontSetColor_0x1ad100");
#endif

    ctx->pc = 0x1ad100u;

    // 0x1ad100: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1ad100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ad104: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1ad104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ad108: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ad108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ad10c: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x1ad10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1ad110: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1ad110u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1ad114: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ad114u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1ad118: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ad118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad11c: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x1ad11cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1ad120: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1ad120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ad124: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ad124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ad128: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ad128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ad12c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1ad12cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1ad130: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD130u;
        // 0x1ad134: 0xac880020  sw          $t0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD138u;
}
