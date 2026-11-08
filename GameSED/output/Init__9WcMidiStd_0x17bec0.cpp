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

// Function: Init__9WcMidiStd
// Address: 0x17bec0 - 0x17beec
void Init__9WcMidiStd_0x17bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcMidiStd_0x17bec0");
#endif

    switch (ctx->pc) {
        case 0x17bee0u: goto label_17bee0;
        default: break;
    }

    ctx->pc = 0x17bec0u;

    // 0x17bec0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17bec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bec4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bec8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x17bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17becc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17beccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bed0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bed4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17bed8: 0xc05efbc  jal         func_17BEF0
    ctx->pc = 0x17BED8u;
    SET_GPR_U32(ctx, 31, 0x17BEE0u);
    ctx->pc = 0x17BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BED8u;
    // 0x17bedc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEF0u, 0x17BED8u, 0x17BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEE0u;
label_17bee0:
    // 0x17bee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bee4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEE4u;
        // 0x17bee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BEECu;
}
