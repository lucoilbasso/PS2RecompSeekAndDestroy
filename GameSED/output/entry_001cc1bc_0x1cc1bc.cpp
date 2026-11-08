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

// Function: entry_001cc1bc
// Address: 0x1cc1bc - 0x1cc1e8
void entry_001cc1bc_0x1cc1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc1bc_0x1cc1bc");
#endif

    ctx->pc = 0x1cc1bcu;

    // 0x1cc1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc1c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc1c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc1c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc1c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc1cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc1ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc1d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cc1d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc1d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cc1d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc1d8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1cc1d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cc1dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1E0u;
        // 0x1cc1e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC1E8u;
}
