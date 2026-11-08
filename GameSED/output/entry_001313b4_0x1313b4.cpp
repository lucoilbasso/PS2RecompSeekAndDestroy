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

// Function: entry_001313b4
// Address: 0x1313b4 - 0x1313d8
void entry_001313b4_0x1313b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001313b4_0x1313b4");
#endif

    ctx->pc = 0x1313b4u;

    // 0x1313b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1313b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1313b8: 0xfe420170  sd          $v0, 0x170($s2)
    ctx->pc = 0x1313b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 2));
    // 0x1313bc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1313bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1313c0: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1313c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1313c4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1313c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1313c8: 0xfe430178  sd          $v1, 0x178($s2)
    ctx->pc = 0x1313c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 3));
    // 0x1313cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1313ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1313d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1313D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1313D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313D0u;
        // 0x1313d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1313D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1313D8u;
}
