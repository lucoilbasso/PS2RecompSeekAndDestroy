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

// Function: entry_001d61c8
// Address: 0x1d61c8 - 0x1d61f4
void entry_001d61c8_0x1d61c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d61c8_0x1d61c8");
#endif

    ctx->pc = 0x1d61c8u;

    // 0x1d61c8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1d61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1d61cc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1d61ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d61d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d61d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d61d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d61d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d61dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d61dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d61e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d61e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d61e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d61e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d61e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d61e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d61ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D61ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61ECu;
        // 0x1d61f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D61F4u;
}
