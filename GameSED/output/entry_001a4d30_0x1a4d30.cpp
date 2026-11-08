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

// Function: entry_001a4d30
// Address: 0x1a4d30 - 0x1a4d50
void entry_001a4d30_0x1a4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d30_0x1a4d30");
#endif

    ctx->pc = 0x1a4d30u;

    // 0x1a4d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a4d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a4d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4d3c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1a4d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a4d40: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a4d44: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D48u;
        // 0x1a4d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4D50u;
}
