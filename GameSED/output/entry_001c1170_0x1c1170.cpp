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

// Function: entry_001c1170
// Address: 0x1c1170 - 0x1c1198
void entry_001c1170_0x1c1170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1170_0x1c1170");
#endif

    switch (ctx->pc) {
        case 0x1c1190u: goto label_1c1190;
        default: break;
    }

    ctx->pc = 0x1c1170u;

    // 0x1c1170: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1c1170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1174: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1c1174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1c1178: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1c1178u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c117c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c117cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c1180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1184: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c1188: 0xc06faec  jal         func_1BEBB0
    ctx->pc = 0x1C1188u;
    SET_GPR_U32(ctx, 31, 0x1C1190u);
    ctx->pc = 0x1C118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1188u;
    // 0x1c118c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB0u, 0x1C1188u, 0x1C1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1190u;
label_1c1190:
    // 0x1c1190: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1190u;
    {
        const bool branch_taken_0x1c1190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1190u;
        // 0x1c1194: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1190) {
            ctx->pc = 0x1C11A4u;
            return;
        }
    }
    ctx->pc = 0x1C1198u;
}
