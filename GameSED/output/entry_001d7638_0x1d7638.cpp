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

// Function: entry_001d7638
// Address: 0x1d7638 - 0x1d7660
void entry_001d7638_0x1d7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7638_0x1d7638");
#endif

    switch (ctx->pc) {
        case 0x1d7644u: goto label_1d7644;
        default: break;
    }

    ctx->pc = 0x1d7638u;

    // 0x1d7638: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d763c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D763Cu;
    SET_GPR_U32(ctx, 31, 0x1D7644u);
    ctx->pc = 0x1D7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D763Cu;
    // 0x1d7640: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D763Cu, 0x1D7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7644u;
label_1d7644:
    // 0x1d7644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d764c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d764cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7650: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7658: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7658u;
        // 0x1d765c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7660u;
}
