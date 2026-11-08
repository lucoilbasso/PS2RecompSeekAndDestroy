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

// Function: entry_00114fb8
// Address: 0x114fb8 - 0x114fd0
void entry_00114fb8_0x114fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114fb8_0x114fb8");
#endif

    ctx->pc = 0x114fb8u;

    // 0x114fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114fbc: 0xae630400  sw          $v1, 0x400($s3)
    ctx->pc = 0x114fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1024), GPR_U32(ctx, 3));
    // 0x114fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114fc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x114fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x114fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x114FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FC8u;
        // 0x114fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114FD0u;
}
