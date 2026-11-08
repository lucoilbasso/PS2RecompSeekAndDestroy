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

// Function: entry_0019a184
// Address: 0x19a184 - 0x19a19c
void entry_0019a184_0x19a184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a184_0x19a184");
#endif

    switch (ctx->pc) {
        case 0x19a18cu: goto label_19a18c;
        default: break;
    }

    ctx->pc = 0x19a184u;

    // 0x19a184: 0xc0684a0  jal         func_1A1280
    ctx->pc = 0x19A184u;
    SET_GPR_U32(ctx, 31, 0x19A18Cu);
    ctx->pc = 0x19A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A184u;
    // 0x19a188: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1280u, 0x19A184u, 0x19A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A18Cu;
label_19a18c:
    // 0x19a18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a194: 0x3e00008  jr          $ra
    ctx->pc = 0x19A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A194u;
        // 0x19a198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A19Cu;
}
