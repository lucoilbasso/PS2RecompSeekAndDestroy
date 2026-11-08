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

// Function: entry_00156194
// Address: 0x156194 - 0x1561b4
void entry_00156194_0x156194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156194_0x156194");
#endif

    switch (ctx->pc) {
        case 0x1561a0u: goto label_1561a0;
        default: break;
    }

    ctx->pc = 0x156194u;

    // 0x156194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156198: 0xc053616  jal         func_14D858
    ctx->pc = 0x156198u;
    SET_GPR_U32(ctx, 31, 0x1561A0u);
    ctx->pc = 0x15619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156198u;
    // 0x15619c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D858u, 0x156198u, 0x1561A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561A0u;
label_1561a0:
    // 0x1561a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1561a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1561a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1561a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1561a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1561ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1561ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561ACu;
        // 0x1561b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561B4u;
}
