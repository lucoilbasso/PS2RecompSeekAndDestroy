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

// Function: entry_00159fac
// Address: 0x159fac - 0x159fc0
void entry_00159fac_0x159fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159fac_0x159fac");
#endif

    switch (ctx->pc) {
        case 0x159fb4u: goto label_159fb4;
        default: break;
    }

    ctx->pc = 0x159facu;

    // 0x159fac: 0xc056558  jal         func_159560
    ctx->pc = 0x159FACu;
    SET_GPR_U32(ctx, 31, 0x159FB4u);
    ctx->pc = 0x159FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FACu;
    // 0x159fb0: 0xe44003b4  swc1        $f0, 0x3B4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 948), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x159560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159560u, 0x159FACu, 0x159FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FB4u;
label_159fb4:
    // 0x159fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x159FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB8u;
        // 0x159fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159FC0u;
}
