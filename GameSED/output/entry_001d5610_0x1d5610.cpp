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

// Function: entry_001d5610
// Address: 0x1d5610 - 0x1d5630
void entry_001d5610_0x1d5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5610_0x1d5610");
#endif

    ctx->pc = 0x1d5610u;

    // 0x1d5610: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d5610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d561c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d561cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5620: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5624: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d5624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5628: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5628u;
        // 0x1d562c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5630u;
}
