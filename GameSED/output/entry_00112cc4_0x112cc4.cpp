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

// Function: entry_00112cc4
// Address: 0x112cc4 - 0x112cd8
void entry_00112cc4_0x112cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cc4_0x112cc4");
#endif

    ctx->pc = 0x112cc4u;

    // 0x112cc4: 0xae020388  sw          $v0, 0x388($s0)
    ctx->pc = 0x112cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
    // 0x112cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x112CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD0u;
        // 0x112cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112CD8u;
}
