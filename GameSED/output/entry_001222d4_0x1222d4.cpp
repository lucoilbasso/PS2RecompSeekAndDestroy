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

// Function: entry_001222d4
// Address: 0x1222d4 - 0x122310
void entry_001222d4_0x1222d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001222d4_0x1222d4");
#endif

    switch (ctx->pc) {
        case 0x1222ecu: goto label_1222ec;
        default: break;
    }

    ctx->pc = 0x1222d4u;

    // 0x1222d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1222d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1222d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1222d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1222dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1222e0: 0x2652fe80  addiu       $s2, $s2, -0x180
    ctx->pc = 0x1222e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966912));
    // 0x1222e4: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1222E4u;
    SET_GPR_U32(ctx, 31, 0x1222ECu);
    ctx->pc = 0x1222E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222E4u;
    // 0x1222e8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1222E4u, 0x1222ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222ECu;
label_1222ec:
    // 0x1222ec: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1222ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1222f0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1222f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f4: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1222f8: 0x681fff5  bgez        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x1222F8u;
    {
        const bool branch_taken_0x1222f8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222F8u;
        // 0x1222fc: 0x528021  addu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222f8) {
            ctx->pc = 0x1222D0u;
            return;
        }
    }
    ctx->pc = 0x122300u;
    // 0x122300: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x122300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x122304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122308: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x122308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x12230c: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x12230cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
    ctx->pc = 0x122310u;
}
