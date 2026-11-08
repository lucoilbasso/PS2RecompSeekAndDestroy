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

// Function: entry_0018a798
// Address: 0x18a798 - 0x18a7bc
void entry_0018a798_0x18a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a798_0x18a798");
#endif

    ctx->pc = 0x18a798u;

    // 0x18a798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a79c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18a7a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a7a4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x18a7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a7a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18a7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a7ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a7b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7B4u;
        // 0x18a7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A7BCu;
}
