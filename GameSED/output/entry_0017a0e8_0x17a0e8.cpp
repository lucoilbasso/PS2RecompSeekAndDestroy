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

// Function: entry_0017a0e8
// Address: 0x17a0e8 - 0x17a104
void entry_0017a0e8_0x17a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a0e8_0x17a0e8");
#endif

    ctx->pc = 0x17a0e8u;

    // 0x17a0e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a0ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17a0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a0f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17a0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a0f4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x17a0f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a0f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0FCu;
        // 0x17a100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A104u;
}
