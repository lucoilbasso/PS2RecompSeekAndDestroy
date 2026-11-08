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

// Function: entry_001a31e8
// Address: 0x1a31e8 - 0x1a3204
void entry_001a31e8_0x1a31e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a31e8_0x1a31e8");
#endif

    ctx->pc = 0x1a31e8u;

    // 0x1a31e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a31e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a31ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a31ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a31f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a31f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a31f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a31f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a31f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a31f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a31fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A31FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31FCu;
        // 0x1a3200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3204u;
}
