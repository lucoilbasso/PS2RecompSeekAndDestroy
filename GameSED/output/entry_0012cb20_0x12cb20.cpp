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

// Function: entry_0012cb20
// Address: 0x12cb20 - 0x12cb40
void entry_0012cb20_0x12cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb20_0x12cb20");
#endif

    ctx->pc = 0x12cb20u;

    // 0x12cb20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cb24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cb28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12cb28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cb2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cb30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cb34: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x12cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12cb38: 0x3e00008  jr          $ra
    ctx->pc = 0x12CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB38u;
        // 0x12cb3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CB40u;
}
