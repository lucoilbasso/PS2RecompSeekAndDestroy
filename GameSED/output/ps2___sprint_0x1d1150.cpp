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

// Function: __sprint
// Address: 0x1d1150 - 0x1d1198
void ps2___sprint_0x1d1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sprint_0x1d1150");
#endif

    switch (ctx->pc) {
        case 0x1d1180u: goto label_1d1180;
        default: break;
    }

    ctx->pc = 0x1d1150u;

    // 0x1d1150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1158: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d115c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1160: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d1164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1164u;
    {
        const bool branch_taken_0x1d1164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1164u;
        // 0x1d1168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1164) {
            ctx->pc = 0x1D1178u;
            goto label_1d1178;
        }
    }
    ctx->pc = 0x1D116Cu;
    // 0x1d116c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D116Cu;
    {
        const bool branch_taken_0x1d116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D116Cu;
        // 0x1d1170: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d116c) {
            ctx->pc = 0x1D1188u;
            goto label_1d1188;
        }
    }
    ctx->pc = 0x1D1174u;
    // 0x1d1174: 0x0  nop
    ctx->pc = 0x1d1174u;
    // NOP
label_1d1178:
    // 0x1d1178: 0xc075294  jal         func_1D4A50
    ctx->pc = 0x1D1178u;
    SET_GPR_U32(ctx, 31, 0x1D1180u);
    ctx->pc = 0x1D4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4A50u, 0x1D1178u, 0x1D1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1180u;
label_1d1180:
    // 0x1d1180: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d1180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d1184: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d1184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1d1188:
    // 0x1d1188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d118c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d118cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1190: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1190u;
        // 0x1d1194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1198u;
}
