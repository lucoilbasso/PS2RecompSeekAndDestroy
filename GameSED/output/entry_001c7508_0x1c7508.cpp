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

// Function: entry_001c7508
// Address: 0x1c7508 - 0x1c7540
void entry_001c7508_0x1c7508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7508_0x1c7508");
#endif

    switch (ctx->pc) {
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7530u: goto label_1c7530;
        default: break;
    }

    ctx->pc = 0x1c7508u;

label_1c7508:
    // 0x1c7508: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x1c7508u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c750c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c750cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1c7510: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1c7510u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7514: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1c7518: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7518u;
    SET_GPR_U32(ctx, 31, 0x1C7520u);
    ctx->pc = 0x1C751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7518u;
    // 0x1c751c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7518u, 0x1C7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7520u;
label_1c7520:
    // 0x1c7520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c7520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7528: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7528u;
    SET_GPR_U32(ctx, 31, 0x1C7530u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7528u, 0x1C7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7530u;
label_1c7530:
    // 0x1c7530: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7534: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C7508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7508;
        }
    }
    ctx->pc = 0x1C753Cu;
    // 0x1c753c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1c7540u;
}
