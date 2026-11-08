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

// Function: SetSortSprite__9ApcPtcSpriP15ST_EffectSprite
// Address: 0x1d80a8 - 0x1d80e8
void SetSortSprite__9ApcPtcSpriP15ST_EffectSprite_0x1d80a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSortSprite__9ApcPtcSpriP15ST_EffectSprite_0x1d80a8");
#endif

    ctx->pc = 0x1d80a8u;

    // 0x1d80a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d80ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d80acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80b0: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1d80b4: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x1d80b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d80b8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d80b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d80bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1d80bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d80c4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D80C4u;
    {
        const bool branch_taken_0x1d80c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d80c4) {
            ctx->pc = 0x1D80C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D80C4u;
            // 0x1d80c8: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D80D8u;
            goto label_1d80d8;
        }
    }
    ctx->pc = 0x1D80CCu;
    // 0x1d80cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80CCu;
    {
        const bool branch_taken_0x1d80cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80CCu;
        // 0x1d80d0: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80cc) {
            ctx->pc = 0x1D80DCu;
            goto label_1d80dc;
        }
    }
    ctx->pc = 0x1D80D4u;
    // 0x1d80d4: 0x0  nop
    ctx->pc = 0x1d80d4u;
    // NOP
label_1d80d8:
    // 0x1d80d8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1d80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_1d80dc:
    // 0x1d80dc: 0xaca60168  sw          $a2, 0x168($a1)
    ctx->pc = 0x1d80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 360), GPR_U32(ctx, 6));
    // 0x1d80e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80E0u;
        // 0x1d80e4: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80E8u;
}
