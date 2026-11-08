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

// Function: entry_001062fc
// Address: 0x1062fc - 0x106330
void entry_001062fc_0x1062fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001062fc_0x1062fc");
#endif

    ctx->pc = 0x1062fcu;

    // 0x1062fc: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x1062fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x106300: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x106300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x106304: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x106304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x106308: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x106308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x10630c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10630cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10631c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106320: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x106320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106328: 0x3e00008  jr          $ra
    ctx->pc = 0x106328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106328u;
        // 0x10632c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106330u;
}
