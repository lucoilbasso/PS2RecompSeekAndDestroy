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

// Function: entry_001b6fcc
// Address: 0x1b6fcc - 0x1b6fe4
void entry_001b6fcc_0x1b6fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6fcc_0x1b6fcc");
#endif

    ctx->pc = 0x1b6fccu;

    // 0x1b6fcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b6fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6fd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b6fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FDCu;
        // 0x1b6fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6FE4u;
}
