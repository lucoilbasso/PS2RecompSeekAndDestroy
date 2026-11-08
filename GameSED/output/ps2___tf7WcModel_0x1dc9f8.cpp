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

// Function: __tf7WcModel
// Address: 0x1dc9f8 - 0x1dca48
void ps2___tf7WcModel_0x1dc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcModel_0x1dc9f8");
#endif

    switch (ctx->pc) {
        case 0x1dca1cu: goto label_1dca1c;
        case 0x1dca34u: goto label_1dca34;
        default: break;
    }

    ctx->pc = 0x1dc9f8u;

    // 0x1dc9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc9fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dca00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dca04: 0x24501540  addiu       $s0, $v0, 0x1540
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5440));
    // 0x1dca08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411540u));
    // 0x1dca0c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCA0Cu;
    {
        const bool branch_taken_0x1dca0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA0Cu;
        // 0x1dca10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca0c) {
            ctx->pc = 0x1DCA34u;
            goto label_1dca34;
        }
    }
    ctx->pc = 0x1DCA14u;
    // 0x1dca14: 0xc0771d4  jal         func_1DC750
    ctx->pc = 0x1DCA14u;
    SET_GPR_U32(ctx, 31, 0x1DCA1Cu);
    ctx->pc = 0x1DC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC750u, 0x1DCA14u, 0x1DCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA1Cu;
label_1dca1c:
    // 0x1dca1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dca20: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dca24: 0x24a57d48  addiu       $a1, $a1, 0x7D48
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32072));
    // 0x1dca28: 0x24c61510  addiu       $a2, $a2, 0x1510
    ctx->pc = 0x1dca28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5392));
    // 0x1dca2c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DCA2Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA34u);
    ctx->pc = 0x1DCA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA2Cu;
    // 0x1dca30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DCA2Cu, 0x1DCA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA34u;
label_1dca34:
    // 0x1dca34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dca34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dca38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dca40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA40u;
        // 0x1dca44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA48u;
}
