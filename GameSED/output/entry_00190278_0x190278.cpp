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

// Function: entry_00190278
// Address: 0x190278 - 0x190298
void entry_00190278_0x190278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190278_0x190278");
#endif

    switch (ctx->pc) {
        case 0x190280u: goto label_190280;
        default: break;
    }

    ctx->pc = 0x190278u;

    // 0x190278: 0xc063c6e  jal         func_18F1B8
    ctx->pc = 0x190278u;
    SET_GPR_U32(ctx, 31, 0x190280u);
    ctx->pc = 0x19027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190278u;
    // 0x19027c: 0xae0001d8  sw          $zero, 0x1D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1B8u, 0x190278u, 0x190280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190280u;
label_190280:
    // 0x190280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190288: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x190288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19028c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19028cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190290: 0x3e00008  jr          $ra
    ctx->pc = 0x190290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190290u;
        // 0x190294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190298u;
}
