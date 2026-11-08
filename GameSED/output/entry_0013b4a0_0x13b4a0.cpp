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

// Function: entry_0013b4a0
// Address: 0x13b4a0 - 0x13b4d0
void entry_0013b4a0_0x13b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b4a0_0x13b4a0");
#endif

    ctx->pc = 0x13b4a0u;

    // 0x13b4a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b4a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b4a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b4a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b4a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b4ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13b4acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b4b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13b4b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b4b8: 0xc7b70050  lwc1        $f23, 0x50($sp)
    ctx->pc = 0x13b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x13b4bc: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x13b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13b4c0: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x13b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b4c4: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x13b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4C8u;
        // 0x13b4cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B4D0u;
}
