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

// Function: default
// Address: 0x134e48 - 0x134e6c
void ps2_default_0x134e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x134e48");
#endif

    ctx->pc = 0x134e48u;

    // 0x134e48: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x134e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x134e4c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x134e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134e50: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x134e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x134e54: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x134e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134e58: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x134e58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x134e5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x134e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134e60: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x134e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134e64: 0x3e00008  jr          $ra
    ctx->pc = 0x134E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E64u;
        // 0x134e68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E6Cu;
}
