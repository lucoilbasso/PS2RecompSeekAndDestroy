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

// Function: entry_001a8124
// Address: 0x1a8124 - 0x1a8144
void entry_001a8124_0x1a8124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8124_0x1a8124");
#endif

    ctx->pc = 0x1a8124u;

    // 0x1a8124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a812c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a812cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8130: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8130u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8134: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a813c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A813Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A813Cu;
        // 0x1a8140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A813Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8144u;
}
