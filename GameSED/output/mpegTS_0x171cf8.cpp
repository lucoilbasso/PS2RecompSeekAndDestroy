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

// Function: mpegTS
// Address: 0x171cf8 - 0x171d3c
void mpegTS_0x171cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegTS_0x171cf8");
#endif

    switch (ctx->pc) {
        case 0x171d18u: goto label_171d18;
        default: break;
    }

    ctx->pc = 0x171cf8u;

    // 0x171cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171cfc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x171cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x171d00: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x171d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x171d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x171d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d08: 0x248413b0  addiu       $a0, $a0, 0x13B0
    ctx->pc = 0x171d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    // 0x171d0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x171d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x171d10: 0xc05d78e  jal         func_175E38
    ctx->pc = 0x171D10u;
    SET_GPR_U32(ctx, 31, 0x171D18u);
    ctx->pc = 0x171D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D10u;
    // 0x171d14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175E38u, 0x171D10u, 0x171D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D18u;
label_171d18:
    // 0x171d18: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x171d18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171d20: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x171d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171d24: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x171d24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x171d28: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x171d28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x171d2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x171d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171d30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x171d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171d34: 0x3e00008  jr          $ra
    ctx->pc = 0x171D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D34u;
        // 0x171d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D3Cu;
}
