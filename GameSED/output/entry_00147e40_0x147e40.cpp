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

// Function: entry_00147e40
// Address: 0x147e40 - 0x147e64
void entry_00147e40_0x147e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147e40_0x147e40");
#endif

    ctx->pc = 0x147e40u;

    // 0x147e40: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x147e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147e44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x147e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147e48: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x147e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e4c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x147e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147e50: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x147e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x147e54: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x147e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147e58: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x147e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x147e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x147E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E5Cu;
        // 0x147e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147E64u;
}
