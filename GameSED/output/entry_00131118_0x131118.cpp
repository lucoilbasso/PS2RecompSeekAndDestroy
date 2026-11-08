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

// Function: entry_00131118
// Address: 0x131118 - 0x131138
void entry_00131118_0x131118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131118_0x131118");
#endif

    ctx->pc = 0x131118u;

    // 0x131118: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x131118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13111c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13111cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131120: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x131120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x131124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131128: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x131128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13112c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131130: 0x3e00008  jr          $ra
    ctx->pc = 0x131130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131130u;
        // 0x131134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131138u;
}
