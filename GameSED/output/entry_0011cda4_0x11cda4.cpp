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

// Function: entry_0011cda4
// Address: 0x11cda4 - 0x11cdbc
void entry_0011cda4_0x11cda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cda4_0x11cda4");
#endif

    switch (ctx->pc) {
        case 0x11cdacu: goto label_11cdac;
        default: break;
    }

    ctx->pc = 0x11cda4u;

    // 0x11cda4: 0xc0460e6  jal         func_118398
    ctx->pc = 0x11CDA4u;
    SET_GPR_U32(ctx, 31, 0x11CDACu);
    ctx->pc = 0x118398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118398u, 0x11CDA4u, 0x11CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDACu;
label_11cdac:
    // 0x11cdac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cdb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x11CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDB4u;
        // 0x11cdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CDBCu;
}
