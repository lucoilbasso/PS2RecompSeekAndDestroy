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

// Function: entry_00117858
// Address: 0x117858 - 0x117888
void entry_00117858_0x117858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117858_0x117858");
#endif

    switch (ctx->pc) {
        case 0x11786cu: goto label_11786c;
        case 0x117874u: goto label_117874;
        default: break;
    }

    ctx->pc = 0x117858u;

    // 0x117858: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x117858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11785c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x117860: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117864: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117864u;
    SET_GPR_U32(ctx, 31, 0x11786Cu);
    ctx->pc = 0x117868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117864u;
    // 0x117868: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117864u, 0x11786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11786Cu;
label_11786c:
    // 0x11786c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11786Cu;
    SET_GPR_U32(ctx, 31, 0x117874u);
    ctx->pc = 0x117870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11786Cu;
    // 0x117870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11786Cu, 0x117874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117874u;
label_117874:
    // 0x117874: 0x2c4303e7  sltiu       $v1, $v0, 0x3E7
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
    // 0x117878: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117878u;
    {
        const bool branch_taken_0x117878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117878u;
        // 0x11787c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117878) {
            ctx->pc = 0x117888u;
            return;
        }
    }
    ctx->pc = 0x117880u;
    // 0x117880: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x117880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x117884: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x117884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x117888u;
}
