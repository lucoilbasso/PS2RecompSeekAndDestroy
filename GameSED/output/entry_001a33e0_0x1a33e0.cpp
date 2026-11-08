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

// Function: entry_001a33e0
// Address: 0x1a33e0 - 0x1a33fc
void entry_001a33e0_0x1a33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a33e0_0x1a33e0");
#endif

    ctx->pc = 0x1a33e0u;

    // 0x1a33e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a33e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a33e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a33e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a33e8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a33e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a33ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a33ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a33f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a33f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a33f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A33F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33F4u;
        // 0x1a33f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A33FCu;
}
