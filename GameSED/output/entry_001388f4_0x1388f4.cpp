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

// Function: entry_001388f4
// Address: 0x1388f4 - 0x138920
void entry_001388f4_0x1388f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388f4_0x1388f4");
#endif

    switch (ctx->pc) {
        case 0x138910u: goto label_138910;
        default: break;
    }

    ctx->pc = 0x1388f4u;

    // 0x1388f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1388f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1388f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1388f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1388fc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1388fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x138900: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x138900u;
    {
        const bool branch_taken_0x138900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x138904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138900u;
        // 0x138904: 0x2470b840  addiu       $s0, $v1, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138900) {
            ctx->pc = 0x138938u;
            return;
        }
    }
    ctx->pc = 0x138908u;
    // 0x138908: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x138908u;
    SET_GPR_U32(ctx, 31, 0x138910u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x138908u, 0x138910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138910u;
label_138910:
    // 0x138910: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138910u;
    {
        const bool branch_taken_0x138910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138910u;
        // 0x138914: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138910) {
            ctx->pc = 0x138920u;
            return;
        }
    }
    ctx->pc = 0x138918u;
    // 0x138918: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138918u;
    {
        const bool branch_taken_0x138918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138918u;
        // 0x13891c: 0xae000400  sw          $zero, 0x400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138918) {
            ctx->pc = 0x13896Cu;
            return;
        }
    }
    ctx->pc = 0x138920u;
}
