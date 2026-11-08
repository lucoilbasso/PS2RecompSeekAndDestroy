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

// Function: entry_0010c45c
// Address: 0x10c45c - 0x10c480
void entry_0010c45c_0x10c45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c45c_0x10c45c");
#endif

    ctx->pc = 0x10c45cu;

    // 0x10c45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c464: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c468: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10c468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c46c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c470: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x10c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c474: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x10c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c478: 0x3e00008  jr          $ra
    ctx->pc = 0x10C478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C478u;
        // 0x10c47c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C480u;
}
