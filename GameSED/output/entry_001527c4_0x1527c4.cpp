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

// Function: entry_001527c4
// Address: 0x1527c4 - 0x1527e8
void entry_001527c4_0x1527c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001527c4_0x1527c4");
#endif

    ctx->pc = 0x1527c4u;

    // 0x1527c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1527c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1527c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1527c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1527cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1527ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1527d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1527d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1527d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1527d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1527d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1527d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1527dc: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x1527dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1527e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1527E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1527E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527E0u;
        // 0x1527e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1527E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1527E8u;
}
