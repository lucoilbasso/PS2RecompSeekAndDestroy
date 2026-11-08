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

// Function: ChangeClutBank__8WcSpritei
// Address: 0x1dea40 - 0x1dea74
void ChangeClutBank__8WcSpritei_0x1dea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeClutBank__8WcSpritei_0x1dea40");
#endif

    ctx->pc = 0x1dea40u;

    // 0x1dea40: 0x24860150  addiu       $a2, $a0, 0x150
    ctx->pc = 0x1dea40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1dea44: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x1dea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x1dea48: 0xa4c5000c  sh          $a1, 0xC($a2)
    ctx->pc = 0x1dea48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dea4c: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x1dea4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1dea50: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x1dea50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dea54: 0x94850030  lhu         $a1, 0x30($a0)
    ctx->pc = 0x1dea54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1dea58: 0x94c4000c  lhu         $a0, 0xC($a2)
    ctx->pc = 0x1dea58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1dea5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dea60: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1dea60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1dea64: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1dea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1dea68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dea6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA6Cu;
        // 0x1dea70: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA74u;
}
