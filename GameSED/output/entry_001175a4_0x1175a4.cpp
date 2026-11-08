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

// Function: entry_001175a4
// Address: 0x1175a4 - 0x1175c0
void entry_001175a4_0x1175a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001175a4_0x1175a4");
#endif

    ctx->pc = 0x1175a4u;

    // 0x1175a4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1175a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1175a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1175a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1175ac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1175acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1175b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1175b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1175b4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1175b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1175b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1175B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1175BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B8u;
        // 0x1175bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1175B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1175C0u;
}
