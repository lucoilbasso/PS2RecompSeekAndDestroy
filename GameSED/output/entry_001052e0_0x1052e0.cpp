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

// Function: entry_001052e0
// Address: 0x1052e0 - 0x105340
void entry_001052e0_0x1052e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001052e0_0x1052e0");
#endif

    switch (ctx->pc) {
        case 0x105308u: goto label_105308;
        case 0x105314u: goto label_105314;
        default: break;
    }

    ctx->pc = 0x1052e0u;

    // 0x1052e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1052e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1052e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1052e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1052e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1052ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1052ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1052f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1052f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1052f4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1052f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1052f8: 0x16420027  bne         $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1052F8u;
    {
        const bool branch_taken_0x1052f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1052f8) {
            ctx->pc = 0x105398u;
            return;
        }
    }
    ctx->pc = 0x105300u;
    // 0x105300: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105300u;
    SET_GPR_U32(ctx, 31, 0x105308u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105300u, 0x105308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105308u;
label_105308:
    // 0x105308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10530c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10530Cu;
    SET_GPR_U32(ctx, 31, 0x105314u);
    ctx->pc = 0x105310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10530Cu;
    // 0x105310: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10530Cu, 0x105314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105314u;
label_105314:
    // 0x105314: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105318: 0x1212000d  beq         $s0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x105318u;
    {
        const bool branch_taken_0x105318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x10531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105318u;
        // 0x10531c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105318) {
            ctx->pc = 0x105350u;
            return;
        }
    }
    ctx->pc = 0x105320u;
    // 0x105320: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x105320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x105324: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105324u;
    {
        const bool branch_taken_0x105324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105324u;
        // 0x105328: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105324) {
            ctx->pc = 0x105340u;
            return;
        }
    }
    ctx->pc = 0x10532Cu;
    // 0x10532c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105330: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105330u;
    {
        const bool branch_taken_0x105330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x105330) {
            ctx->pc = 0x105334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105330u;
            // 0x105334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105354u;
            return;
        }
    }
    ctx->pc = 0x105338u;
    // 0x105338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x105338u;
    {
        const bool branch_taken_0x105338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105338) {
            ctx->pc = 0x105354u;
            return;
        }
    }
    ctx->pc = 0x105340u;
}
