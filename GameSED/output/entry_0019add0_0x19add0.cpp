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

// Function: entry_0019add0
// Address: 0x19add0 - 0x19adf4
void entry_0019add0_0x19add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019add0_0x19add0");
#endif

    ctx->pc = 0x19add0u;

    // 0x19add0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19add0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19add4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x19add4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19add8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19add8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19addc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x19addcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19ade0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x19ade0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ade4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ade8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19ade8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19adec: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADECu;
        // 0x19adf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ADF4u;
}
