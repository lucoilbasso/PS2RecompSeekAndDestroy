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

// Function: default
// Address: 0x178ed0 - 0x178f04
void ps2_default_0x178ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x178ed0");
#endif

    switch (ctx->pc) {
        case 0x178ed8u: goto label_178ed8;
        case 0x178ee0u: goto label_178ee0;
        case 0x178efcu: goto label_178efc;
        default: break;
    }

    ctx->pc = 0x178ed0u;

    // 0x178ed0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x178ED0u;
    SET_GPR_U32(ctx, 31, 0x178ED8u);
    ctx->pc = 0x178ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178ED0u;
    // 0x178ed4: 0x8c44d184  lw          $a0, -0x2E7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178ED0u, 0x178ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ED8u;
label_178ed8:
    // 0x178ed8: 0xc06bcc4  jal         func_1AF310
    ctx->pc = 0x178ED8u;
    SET_GPR_U32(ctx, 31, 0x178EE0u);
    ctx->pc = 0x178EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178ED8u;
    // 0x178edc: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF310u, 0x178ED8u, 0x178EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EE0u;
label_178ee0:
    // 0x178ee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178ee4: 0x1443ffc8  bne         $v0, $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x178EE4u;
    {
        const bool branch_taken_0x178ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x178EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EE4u;
        // 0x178ee8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ee4) {
            ctx->pc = 0x178E08u;
            return;
        }
    }
    ctx->pc = 0x178EECu;
    // 0x178eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ef0: 0x24a57a60  addiu       $a1, $a1, 0x7A60
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
    // 0x178ef4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x178EF4u;
    SET_GPR_U32(ctx, 31, 0x178EFCu);
    ctx->pc = 0x178EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EF4u;
    // 0x178ef8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x178EF4u, 0x178EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EFCu;
label_178efc:
    // 0x178efc: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x178EFCu;
    {
        const bool branch_taken_0x178efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178efc) {
            ctx->pc = 0x178E08u;
            return;
        }
    }
    ctx->pc = 0x178F04u;
}
