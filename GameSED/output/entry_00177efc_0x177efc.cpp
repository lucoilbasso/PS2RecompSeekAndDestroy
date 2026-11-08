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

// Function: entry_00177efc
// Address: 0x177efc - 0x177f10
void entry_00177efc_0x177efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177efc_0x177efc");
#endif

    switch (ctx->pc) {
        case 0x177f04u: goto label_177f04;
        default: break;
    }

    ctx->pc = 0x177efcu;

    // 0x177efc: 0xc067294  jal         func_19CA50
    ctx->pc = 0x177EFCu;
    SET_GPR_U32(ctx, 31, 0x177F04u);
    ctx->pc = 0x177F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EFCu;
    // 0x177f00: 0xa4400008  sh          $zero, 0x8($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x177EFCu, 0x177F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F04u;
label_177f04:
    // 0x177f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f08: 0x3e00008  jr          $ra
    ctx->pc = 0x177F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F08u;
        // 0x177f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F10u;
}
