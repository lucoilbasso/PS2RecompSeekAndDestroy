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

// Function: entry_0013bae8
// Address: 0x13bae8 - 0x13bb08
void entry_0013bae8_0x13bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bae8_0x13bae8");
#endif

    ctx->pc = 0x13bae8u;

    // 0x13bae8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13bae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13baec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13baecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13baf0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13baf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13baf4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13baf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13baf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bafc: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x13bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB00u;
        // 0x13bb04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB08u;
}
