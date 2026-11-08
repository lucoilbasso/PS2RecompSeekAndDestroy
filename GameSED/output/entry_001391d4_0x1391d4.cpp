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

// Function: entry_001391d4
// Address: 0x1391d4 - 0x1391f4
void entry_001391d4_0x1391d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001391d4_0x1391d4");
#endif

    ctx->pc = 0x1391d4u;

    // 0x1391d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1391d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1391d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1391dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1391dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1391e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1391e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1391e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1391e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1391e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1391e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1391ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1391ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1391F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391ECu;
        // 0x1391f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1391ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1391F4u;
}
