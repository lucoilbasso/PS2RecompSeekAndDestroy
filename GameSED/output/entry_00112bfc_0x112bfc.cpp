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

// Function: entry_00112bfc
// Address: 0x112bfc - 0x112c10
void entry_00112bfc_0x112bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112bfc_0x112bfc");
#endif

    switch (ctx->pc) {
        case 0x112c04u: goto label_112c04;
        default: break;
    }

    ctx->pc = 0x112bfcu;

    // 0x112bfc: 0xc0416fe  jal         func_105BF8
    ctx->pc = 0x112BFCu;
    SET_GPR_U32(ctx, 31, 0x112C04u);
    ctx->pc = 0x112C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BFCu;
    // 0x112c00: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BF8u, 0x112BFCu, 0x112C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C04u;
label_112c04:
    // 0x112c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112c08: 0x3e00008  jr          $ra
    ctx->pc = 0x112C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C08u;
        // 0x112c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112C10u;
}
