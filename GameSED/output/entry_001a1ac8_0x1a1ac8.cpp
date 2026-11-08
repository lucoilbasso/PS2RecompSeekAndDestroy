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

// Function: entry_001a1ac8
// Address: 0x1a1ac8 - 0x1a1ae4
void entry_001a1ac8_0x1a1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ac8_0x1a1ac8");
#endif

    switch (ctx->pc) {
        case 0x1a1ad0u: goto label_1a1ad0;
        default: break;
    }

    ctx->pc = 0x1a1ac8u;

    // 0x1a1ac8: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x1A1AC8u;
    SET_GPR_U32(ctx, 31, 0x1A1AD0u);
    ctx->pc = 0x1A1ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AC8u;
    // 0x1a1acc: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x1A1AC8u, 0x1A1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AD0u;
label_1a1ad0:
    // 0x1a1ad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a1ad4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a1ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1ad8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a1ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a1adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1AE4u;
}
