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

// Function: entry_001e0590
// Address: 0x1e0590 - 0x1e05c4
void entry_001e0590_0x1e0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0590_0x1e0590");
#endif

    ctx->pc = 0x1e0590u;

    // 0x1e0590: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x1e0590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1e0594: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e0594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0598: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1e0598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x1e059c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e059cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1e05a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e05a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e05a4: 0xae5101b0  sw          $s1, 0x1B0($s2)
    ctx->pc = 0x1e05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
    // 0x1e05a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e05a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e05ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e05acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e05b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e05b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e05b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e05b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e05b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e05b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e05bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05BCu;
        // 0x1e05c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E05C4u;
}
