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

// Function: WPolySetAlpha__FP6WcPolyii
// Address: 0x1903c8 - 0x19040c
void WPolySetAlpha__FP6WcPolyii_0x1903c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolySetAlpha__FP6WcPolyii_0x1903c8");
#endif

    ctx->pc = 0x1903c8u;

    // 0x1903c8: 0x94820158  lhu         $v0, 0x158($a0)
    ctx->pc = 0x1903c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1903cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1903ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1903d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1903D0u;
    {
        const bool branch_taken_0x1903d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1903d0) {
            ctx->pc = 0x1903D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1903D0u;
            // 0x1903d4: 0xa0860157  sb          $a2, 0x157($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190404u;
            goto label_190404;
        }
    }
    ctx->pc = 0x1903D8u;
    // 0x1903d8: 0x9482015a  lhu         $v0, 0x15A($a0)
    ctx->pc = 0x1903d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x1903dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1903dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1903e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1903E0u;
    {
        const bool branch_taken_0x1903e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1903e0) {
            ctx->pc = 0x190404u;
            goto label_190404;
        }
    }
    ctx->pc = 0x1903E8u;
    // 0x1903e8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1903E8u;
    {
        const bool branch_taken_0x1903e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1903ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903E8u;
        // 0x1903ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903e8) {
            ctx->pc = 0x190400u;
            goto label_190400;
        }
    }
    ctx->pc = 0x1903F0u;
    // 0x1903f0: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1903f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1903f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1903f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1903F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1903FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903F8u;
        // 0x1903fc: 0xa0460003  sb          $a2, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1903F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190400u;
label_190400:
    // 0x190400: 0xa0860157  sb          $a2, 0x157($a0)
    ctx->pc = 0x190400u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 6));
label_190404:
    // 0x190404: 0x3e00008  jr          $ra
    ctx->pc = 0x190404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19040Cu;
}
