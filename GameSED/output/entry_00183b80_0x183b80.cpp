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

// Function: entry_00183b80
// Address: 0x183b80 - 0x183b9c
void entry_00183b80_0x183b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183b80_0x183b80");
#endif

    switch (ctx->pc) {
        case 0x183b88u: goto label_183b88;
        default: break;
    }

    ctx->pc = 0x183b80u;

    // 0x183b80: 0xc060ee8  jal         func_183BA0
    ctx->pc = 0x183B80u;
    SET_GPR_U32(ctx, 31, 0x183B88u);
    ctx->pc = 0x183B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B80u;
    // 0x183b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183BA0u, 0x183B80u, 0x183B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B88u;
label_183b88:
    // 0x183b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b94: 0x3e00008  jr          $ra
    ctx->pc = 0x183B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B94u;
        // 0x183b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B9Cu;
}
