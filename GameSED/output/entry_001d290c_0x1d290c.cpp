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

// Function: entry_001d290c
// Address: 0x1d290c - 0x1d2938
void entry_001d290c_0x1d290c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d290c_0x1d290c");
#endif

    ctx->pc = 0x1d290cu;

    // 0x1d290c: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x1d290cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d2910: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x1d2910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1d2914: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1d2918: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x1d2918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1d291c: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x1d291cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1d2920: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x1d2920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1d2924: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x1d2924u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1d2928: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x1d2928u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1d292c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x1d292cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1d2930: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2930u;
        // 0x1d2934: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2938u;
}
