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

// Function: entry_001c11e8
// Address: 0x1c11e8 - 0x1c1200
void entry_001c11e8_0x1c11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c11e8_0x1c11e8");
#endif

    ctx->pc = 0x1c11e8u;

    // 0x1c11e8: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1c11e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c11ec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1c11ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c11f0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1c11f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c11f4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c11f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c11f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11F8u;
        // 0x1c11fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1200u;
}
