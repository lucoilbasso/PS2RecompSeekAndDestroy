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

// Function: entry_0012d17c
// Address: 0x12d17c - 0x12d1b0
void entry_0012d17c_0x12d17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d17c_0x12d17c");
#endif

    ctx->pc = 0x12d17cu;

    // 0x12d17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d188: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12d188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d18c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d190: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d194: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12d194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d198: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12d198u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d19c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d1a0: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x12d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d1a4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x12d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1A8u;
        // 0x12d1ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D1B0u;
}
