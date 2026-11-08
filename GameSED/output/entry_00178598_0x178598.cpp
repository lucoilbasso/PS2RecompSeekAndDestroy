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

// Function: entry_00178598
// Address: 0x178598 - 0x1785b0
void entry_00178598_0x178598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178598_0x178598");
#endif

    switch (ctx->pc) {
        case 0x1785a0u: goto label_1785a0;
        default: break;
    }

    ctx->pc = 0x178598u;

    // 0x178598: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x178598u;
    SET_GPR_U32(ctx, 31, 0x1785A0u);
    ctx->pc = 0x17859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178598u;
    // 0x17859c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x178598u, 0x1785A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785A0u;
label_1785a0:
    // 0x1785a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1785a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1785a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1785a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1785A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785A8u;
        // 0x1785ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1785A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1785B0u;
}
