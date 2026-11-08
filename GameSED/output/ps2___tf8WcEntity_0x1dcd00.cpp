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

// Function: __tf8WcEntity
// Address: 0x1dcd00 - 0x1dcd4c
void ps2___tf8WcEntity_0x1dcd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8WcEntity_0x1dcd00");
#endif

    switch (ctx->pc) {
        case 0x1dcd24u: goto label_1dcd24;
        case 0x1dcd38u: goto label_1dcd38;
        default: break;
    }

    ctx->pc = 0x1dcd00u;

    // 0x1dcd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcd04: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dcd08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcd0c: 0x24501580  addiu       $s0, $v0, 0x1580
    ctx->pc = 0x1dcd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x1dcd10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411580u));
    // 0x1dcd14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCD14u;
    {
        const bool branch_taken_0x1dcd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD14u;
        // 0x1dcd18: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd14) {
            ctx->pc = 0x1DCD38u;
            goto label_1dcd38;
        }
    }
    ctx->pc = 0x1DCD1Cu;
    // 0x1dcd1c: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DCD1Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD24u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DCD1Cu, 0x1DCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD24u;
label_1dcd24:
    // 0x1dcd24: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dcd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dcd28: 0x24a57ec8  addiu       $a1, $a1, 0x7EC8
    ctx->pc = 0x1dcd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32456));
    // 0x1dcd2c: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dcd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dcd30: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DCD30u;
    SET_GPR_U32(ctx, 31, 0x1DCD38u);
    ctx->pc = 0x1DCD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD30u;
    // 0x1dcd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DCD30u, 0x1DCD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD38u;
label_1dcd38:
    // 0x1dcd38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD44u;
        // 0x1dcd48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCD4Cu;
}
