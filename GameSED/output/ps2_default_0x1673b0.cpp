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
// Address: 0x1673b0 - 0x1673dc
void ps2_default_0x1673b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1673b0");
#endif

    ctx->pc = 0x1673b0u;

    // 0x1673b0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1673b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1673b4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1673b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1673b8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1673b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1673bc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1673c0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1673c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1673c4: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x1673c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1673c8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1673c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1673cc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1673ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1673d0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1673d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1673d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1673D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673D4u;
        // 0x1673d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673DCu;
}
