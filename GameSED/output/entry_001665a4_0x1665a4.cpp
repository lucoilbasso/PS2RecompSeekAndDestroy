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

// Function: entry_001665a4
// Address: 0x1665a4 - 0x1665d0
void entry_001665a4_0x1665a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001665a4_0x1665a4");
#endif

    ctx->pc = 0x1665a4u;

    // 0x1665a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1665a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1665a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1665a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1665ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1665acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1665b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1665b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1665b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1665b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1665b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1665b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1665bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1665bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665c0: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x1665c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1665c4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x1665c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1665c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1665C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665C8u;
        // 0x1665cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1665C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1665D0u;
}
