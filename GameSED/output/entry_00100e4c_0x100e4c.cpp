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

// Function: entry_00100e4c
// Address: 0x100e4c - 0x100e70
void entry_00100e4c_0x100e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100e4c_0x100e4c");
#endif

    ctx->pc = 0x100e4cu;

    // 0x100e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100e54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100e58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100e5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x100e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100e60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x100e60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x100e64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x100e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100e68: 0x3e00008  jr          $ra
    ctx->pc = 0x100E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E68u;
        // 0x100e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100E70u;
}
