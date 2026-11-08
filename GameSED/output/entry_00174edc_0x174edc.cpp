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

// Function: entry_00174edc
// Address: 0x174edc - 0x174efc
void entry_00174edc_0x174edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174edc_0x174edc");
#endif

    ctx->pc = 0x174edcu;

    // 0x174edc: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x174edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x174ee0: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x174ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x174ee4: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x174ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x174ee8: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x174ee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x174eec: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x174eecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x174ef0: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x174ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x174ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x174EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EF4u;
        // 0x174ef8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EFCu;
}
