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

// Function: entry_0017a1d0
// Address: 0x17a1d0 - 0x17a1ec
void entry_0017a1d0_0x17a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1d0_0x17a1d0");
#endif

    ctx->pc = 0x17a1d0u;

    // 0x17a1d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a1d8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17a1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a1dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17a1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a1e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17a1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1E4u;
        // 0x17a1e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A1ECu;
}
