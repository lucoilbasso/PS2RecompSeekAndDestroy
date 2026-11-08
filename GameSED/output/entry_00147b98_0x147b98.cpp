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

// Function: entry_00147b98
// Address: 0x147b98 - 0x147bc8
void entry_00147b98_0x147b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b98_0x147b98");
#endif

    switch (ctx->pc) {
        case 0x147bacu: goto label_147bac;
        case 0x147bbcu: goto label_147bbc;
        default: break;
    }

    ctx->pc = 0x147b98u;

label_147b98:
    // 0x147b98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x147b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x147b9c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x147b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x147ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ba4: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x147BA4u;
    SET_GPR_U32(ctx, 31, 0x147BACu);
    ctx->pc = 0x147BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BA4u;
    // 0x147ba8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x147BA4u, 0x147BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BACu;
label_147bac:
    // 0x147bac: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147BACu;
    {
        const bool branch_taken_0x147bac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x147BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BACu;
        // 0x147bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bac) {
            ctx->pc = 0x147B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147b98;
        }
    }
    ctx->pc = 0x147BB4u;
    // 0x147bb4: 0xc051d60  jal         func_147580
    ctx->pc = 0x147BB4u;
    SET_GPR_U32(ctx, 31, 0x147BBCu);
    ctx->pc = 0x147BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BB4u;
    // 0x147bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147580u, 0x147BB4u, 0x147BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BBCu;
label_147bbc:
    // 0x147bbc: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x147BBCu;
    {
        const bool branch_taken_0x147bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BBCu;
        // 0x147bc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bbc) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147BC4u;
    // 0x147bc4: 0x0  nop
    ctx->pc = 0x147bc4u;
    // NOP
    ctx->pc = 0x147bc8u;
}
