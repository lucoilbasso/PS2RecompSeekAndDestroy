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

// Function: entry_00197d40
// Address: 0x197d40 - 0x197d68
void entry_00197d40_0x197d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d40_0x197d40");
#endif

    switch (ctx->pc) {
        case 0x197d54u: goto label_197d54;
        default: break;
    }

    ctx->pc = 0x197d40u;

    // 0x197d40: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x197D40u;
    {
        const bool branch_taken_0x197d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d40) {
            ctx->pc = 0x197D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197D40u;
            // 0x197d44: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197D7Cu;
            return;
        }
    }
    ctx->pc = 0x197D48u;
    // 0x197d48: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x197d4c: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x197D4Cu;
    SET_GPR_U32(ctx, 31, 0x197D54u);
    ctx->pc = 0x197D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D4Cu;
    // 0x197d50: 0x26300160  addiu       $s0, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x197D4Cu, 0x197D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D54u;
label_197d54:
    // 0x197d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197d58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D58u;
        // 0x197d5c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197D68u;
            return;
        }
    }
    ctx->pc = 0x197D60u;
    // 0x197d60: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x197D60u;
    SET_GPR_U32(ctx, 31, 0x197D68u);
    ctx->pc = 0x197D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D60u;
    // 0x197d64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x197D60u, 0x197D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D68u;
}
