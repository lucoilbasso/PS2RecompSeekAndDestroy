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

// Function: entry_001bd360
// Address: 0x1bd360 - 0x1bd380
void entry_001bd360_0x1bd360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd360_0x1bd360");
#endif

    switch (ctx->pc) {
        case 0x1bd368u: goto label_1bd368;
        default: break;
    }

    ctx->pc = 0x1bd360u;

label_1bd360:
    // 0x1bd360: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD360u;
    SET_GPR_U32(ctx, 31, 0x1BD368u);
    ctx->pc = 0x1BD364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD360u;
    // 0x1bd364: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD360u, 0x1BD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD368u;
label_1bd368:
    // 0x1bd368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bd36c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1bd36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bd370: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD370u;
    {
        const bool branch_taken_0x1bd370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD370u;
        // 0x1bd374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd370) {
            ctx->pc = 0x1BD360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd360;
        }
    }
    ctx->pc = 0x1BD378u;
    // 0x1bd378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD378u;
    {
        const bool branch_taken_0x1bd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD378u;
        // 0x1bd37c: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd378) {
            ctx->pc = 0x1BD384u;
            return;
        }
    }
    ctx->pc = 0x1BD380u;
}
