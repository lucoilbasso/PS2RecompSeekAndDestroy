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

// Function: entry_001d2ac0
// Address: 0x1d2ac0 - 0x1d2af8
void entry_001d2ac0_0x1d2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2ac0_0x1d2ac0");
#endif

    ctx->pc = 0x1d2ac0u;

    // 0x1d2ac0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d2ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ac4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1d2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x1d2ac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d2ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2acc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d2accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2ad0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2ad4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d2ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d2ad8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d2ad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2adc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d2adcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2ae0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d2ae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2ae4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d2ae8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d2ae8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2aec: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d2aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d2af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AF0u;
        // 0x1d2af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2AF8u;
}
