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

// Function: entry_001a2598
// Address: 0x1a2598 - 0x1a25b8
void entry_001a2598_0x1a2598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2598_0x1a2598");
#endif

    ctx->pc = 0x1a2598u;

    // 0x1a2598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a259c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a259cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a25a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a25a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a25a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a25a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a25a8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a25a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a25ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a25acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a25b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A25B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A25B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A25B8u;
}
