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

// Function: entry_0015186c
// Address: 0x15186c - 0x15189c
void entry_0015186c_0x15186c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015186c_0x15186c");
#endif

    ctx->pc = 0x15186cu;

    // 0x15186c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x15186cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151870: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x151870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151874: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x151874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151878: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x151878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15187c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x15187cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151880: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x151880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x151884: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x151884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151888: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x151888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15188c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x15188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x151890: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x151890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151894: 0x3e00008  jr          $ra
    ctx->pc = 0x151894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151894u;
        // 0x151898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15189Cu;
}
