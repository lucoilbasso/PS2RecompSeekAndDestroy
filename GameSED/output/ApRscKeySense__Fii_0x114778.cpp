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

// Function: ApRscKeySense__Fii
// Address: 0x114778 - 0x1147a8
void ApRscKeySense__Fii_0x114778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeySense__Fii_0x114778");
#endif

    ctx->pc = 0x114778u;

    // 0x114778: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x114778u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x11477c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114780: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x114780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x114784: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x114784u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x114788: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x11478c: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x11478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x114790: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x114790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x114794: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x114794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x114798: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x114798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x11479c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1147a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1147A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1147A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147A0u;
        // 0x1147a4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1147A8u;
}
