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

// Function: PartsDistribute__FPUcUcUc
// Address: 0x11a330 - 0x11a35c
void PartsDistribute__FPUcUcUc_0x11a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsDistribute__FPUcUcUc_0x11a330");
#endif

    ctx->pc = 0x11a330u;

    // 0x11a330: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x11a330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x11a334: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x11a334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x11a338: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x11a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x11a33c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x11a33cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x11a340: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a344: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x11a344u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11a348: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x11a348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a34c: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x11a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x11a350: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11a350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11a354: 0x3e00008  jr          $ra
    ctx->pc = 0x11A354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A354u;
        // 0x11a358: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A35Cu;
}
