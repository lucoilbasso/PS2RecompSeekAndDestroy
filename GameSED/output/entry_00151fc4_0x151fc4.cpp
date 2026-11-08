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

// Function: entry_00151fc4
// Address: 0x151fc4 - 0x151ff0
void entry_00151fc4_0x151fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151fc4_0x151fc4");
#endif

    ctx->pc = 0x151fc4u;

    // 0x151fc4: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x151fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x151fc8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x151fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151fcc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x151fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x151fd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x151fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151fd4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x151fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151fd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x151fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151fdc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x151fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x151fe0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x151fe0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151fe4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x151fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x151FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FE8u;
        // 0x151fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151FF0u;
}
