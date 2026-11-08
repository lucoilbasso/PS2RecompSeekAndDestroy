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

// Function: entry_0013b660
// Address: 0x13b660 - 0x13b69c
void entry_0013b660_0x13b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b660_0x13b660");
#endif

    ctx->pc = 0x13b660u;

    // 0x13b660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b668: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b66c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b66cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b670: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13b670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b674: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13b674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b678: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13b678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b67c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x13b67cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13b680: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x13b680u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b684: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x13b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13b688: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x13b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13b68c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x13b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b690: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x13b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b694: 0x3e00008  jr          $ra
    ctx->pc = 0x13B694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B694u;
        // 0x13b698: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B69Cu;
}
