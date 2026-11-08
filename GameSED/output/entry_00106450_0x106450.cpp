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

// Function: entry_00106450
// Address: 0x106450 - 0x106484
void entry_00106450_0x106450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106450_0x106450");
#endif

    ctx->pc = 0x106450u;

    // 0x106450: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x106450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x106454: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x106454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x106458: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x106458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x10645c: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x10645cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x106460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10646c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10646cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106470: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x106470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106474: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x106474u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10647c: 0x3e00008  jr          $ra
    ctx->pc = 0x10647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10647Cu;
        // 0x106480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106484u;
}
