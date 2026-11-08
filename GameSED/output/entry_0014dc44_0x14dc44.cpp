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

// Function: entry_0014dc44
// Address: 0x14dc44 - 0x14dc68
void entry_0014dc44_0x14dc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc44_0x14dc44");
#endif

    ctx->pc = 0x14dc44u;

    // 0x14dc44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14dc44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dc48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14dc48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14dc4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14dc4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dc50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14dc50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14dc54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14dc54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dc58: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14dc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14dc5c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14dc60: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC60u;
        // 0x14dc64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DC68u;
}
