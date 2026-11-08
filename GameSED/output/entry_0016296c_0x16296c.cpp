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

// Function: entry_0016296c
// Address: 0x16296c - 0x16299c
void entry_0016296c_0x16296c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016296c_0x16296c");
#endif

    ctx->pc = 0x16296cu;

    // 0x16296c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16296cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x162974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162978: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x162978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16297c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162980: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x162980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x162984: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x162984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x162988: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x162988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16298c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x16298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x162990: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x162990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162994: 0x3e00008  jr          $ra
    ctx->pc = 0x162994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162994u;
        // 0x162998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16299Cu;
}
