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

// Function: entry_0016ed20
// Address: 0x16ed20 - 0x16ed4c
void entry_0016ed20_0x16ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ed20_0x16ed20");
#endif

    ctx->pc = 0x16ed20u;

    // 0x16ed20: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x16ed20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16ed24: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16ed24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16ed28: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x16ed28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ed2c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x16ed2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16ed30: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x16ed30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ed34: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x16ed34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16ed38: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ed3c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x16ed3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ed40: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x16ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ed44: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED44u;
        // 0x16ed48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ED4Cu;
}
