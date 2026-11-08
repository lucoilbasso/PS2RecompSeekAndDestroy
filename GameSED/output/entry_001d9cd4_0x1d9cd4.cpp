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

// Function: entry_001d9cd4
// Address: 0x1d9cd4 - 0x1d9d08
void entry_001d9cd4_0x1d9cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9cd4_0x1d9cd4");
#endif

    switch (ctx->pc) {
        case 0x1d9ce0u: goto label_1d9ce0;
        default: break;
    }

    ctx->pc = 0x1d9cd4u;

    // 0x1d9cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cd8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D9CD8u;
    SET_GPR_U32(ctx, 31, 0x1D9CE0u);
    ctx->pc = 0x1D9CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CD8u;
    // 0x1d9cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D9CD8u, 0x1D9CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CE0u;
label_1d9ce0:
    // 0x1d9ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9cf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9cf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d9cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D00u;
        // 0x1d9d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D08u;
}
