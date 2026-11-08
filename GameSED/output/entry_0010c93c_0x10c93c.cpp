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

// Function: entry_0010c93c
// Address: 0x10c93c - 0x10c95c
void entry_0010c93c_0x10c93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c93c_0x10c93c");
#endif

    switch (ctx->pc) {
        case 0x10c948u: goto label_10c948;
        default: break;
    }

    ctx->pc = 0x10c93cu;

    // 0x10c93c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c940: 0xc0644f2  jal         func_1913C8
    ctx->pc = 0x10C940u;
    SET_GPR_U32(ctx, 31, 0x10C948u);
    ctx->pc = 0x10C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C940u;
    // 0x10c944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1913C8u, 0x10C940u, 0x10C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C948u;
label_10c948:
    // 0x10c948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c94c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c954: 0x3e00008  jr          $ra
    ctx->pc = 0x10C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C954u;
        // 0x10c958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C95Cu;
}
