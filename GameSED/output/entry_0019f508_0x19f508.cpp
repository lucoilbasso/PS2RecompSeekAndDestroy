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

// Function: entry_0019f508
// Address: 0x19f508 - 0x19f530
void entry_0019f508_0x19f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f508_0x19f508");
#endif

    switch (ctx->pc) {
        case 0x19f524u: goto label_19f524;
        default: break;
    }

    ctx->pc = 0x19f508u;

label_19f508:
    // 0x19f508: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F508u;
    {
        const bool branch_taken_0x19f508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f508) {
            ctx->pc = 0x19F530u;
            return;
        }
    }
    ctx->pc = 0x19F510u;
    // 0x19f510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f518: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f51c: 0xc067c9a  jal         func_19F268
    ctx->pc = 0x19F51Cu;
    SET_GPR_U32(ctx, 31, 0x19F524u);
    ctx->pc = 0x19F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F51Cu;
    // 0x19f520: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F268u, 0x19F51Cu, 0x19F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F524u;
label_19f524:
    // 0x19f524: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f528: 0x5260fff7  beql        $s3, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F528u;
    {
        const bool branch_taken_0x19f528 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f528) {
            ctx->pc = 0x19F52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F528u;
            // 0x19f52c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f508;
        }
    }
    ctx->pc = 0x19F530u;
}
