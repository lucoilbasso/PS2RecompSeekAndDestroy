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

// Function: entry_001853bc
// Address: 0x1853bc - 0x1853d8
void entry_001853bc_0x1853bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001853bc_0x1853bc");
#endif

    ctx->pc = 0x1853bcu;

    // 0x1853bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1853bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1853c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1853c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1853c4: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1853c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1853c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1853c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1853cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1853ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1853d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1853D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853D0u;
        // 0x1853d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1853D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1853D8u;
}
