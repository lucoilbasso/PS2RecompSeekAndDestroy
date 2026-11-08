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

// Function: entry_0016d8c8
// Address: 0x16d8c8 - 0x16d8f0
void entry_0016d8c8_0x16d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d8c8_0x16d8c8");
#endif

    ctx->pc = 0x16d8c8u;

    // 0x16d8c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16d8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d8cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16d8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d8d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d8d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16d8d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d8d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d8dc: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x16d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16d8e0: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x16d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16d8e4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x16d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E8u;
        // 0x16d8ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8F0u;
}
