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

// Function: entry_001b3318
// Address: 0x1b3318 - 0x1b3368
void entry_001b3318_0x1b3318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3318_0x1b3318");
#endif

    switch (ctx->pc) {
        case 0x1b3348u: goto label_1b3348;
        case 0x1b3358u: goto label_1b3358;
        case 0x1b3360u: goto label_1b3360;
        default: break;
    }

    ctx->pc = 0x1b3318u;

    // 0x1b3318: 0x27d0a6c0  addiu       $s0, $fp, -0x5940
    ctx->pc = 0x1b3318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944448));
    // 0x1b331c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b3320: 0x2444b180  addiu       $a0, $v0, -0x4E80
    ctx->pc = 0x1b3320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x1b3324: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b3324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3328: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b332c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3334: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b3334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b3338: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b3338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b333c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b333cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3340: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3340u;
    SET_GPR_U32(ctx, 31, 0x1B3348u);
    ctx->pc = 0x1B3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3340u;
    // 0x1b3344: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3340u, 0x1B3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3348u;
label_1b3348:
    // 0x1b3348: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3348u;
    {
        const bool branch_taken_0x1b3348 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3348u;
        // 0x1b334c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3348) {
            ctx->pc = 0x1B3368u;
            return;
        }
    }
    ctx->pc = 0x1B3350u;
    // 0x1b3350: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3350u;
    SET_GPR_U32(ctx, 31, 0x1B3358u);
    ctx->pc = 0x1B3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3350u;
    // 0x1b3354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3350u, 0x1B3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3358u;
label_1b3358:
    // 0x1b3358: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3358u;
    SET_GPR_U32(ctx, 31, 0x1B3360u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3358u, 0x1B3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3360u;
label_1b3360:
    // 0x1b3360: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B3360u;
    {
        const bool branch_taken_0x1b3360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3360u;
        // 0x1b3364: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3360) {
            ctx->pc = 0x1B33B8u;
            return;
        }
    }
    ctx->pc = 0x1B3368u;
}
