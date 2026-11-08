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

// Function: _$_9ApcPtcSpl
// Address: 0x1d8138 - 0x1d816c
void ps2____9ApcPtcSpl_0x1d8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____9ApcPtcSpl_0x1d8138");
#endif

    ctx->pc = 0x1d8138u;

    // 0x1d8138: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d8138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d813c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d813cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8140: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x1d8144: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1d8144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1d8148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d814c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D814Cu;
    {
        const bool branch_taken_0x1d814c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D814Cu;
        // 0x1d8150: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d814c) {
            ctx->pc = 0x1D8160u;
            goto label_1d8160;
        }
    }
    ctx->pc = 0x1D8154u;
    // 0x1d8154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8158: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1D8158u;
    ctx->pc = 0x1D815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8158u;
    // 0x1d815c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8160u;
label_1d8160:
    // 0x1d8160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8164: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8164u;
        // 0x1d8168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D816Cu;
}
