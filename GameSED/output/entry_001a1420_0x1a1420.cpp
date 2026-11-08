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

// Function: entry_001a1420
// Address: 0x1a1420 - 0x1a144c
void entry_001a1420_0x1a1420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1420_0x1a1420");
#endif

    switch (ctx->pc) {
        case 0x1a1444u: goto label_1a1444;
        default: break;
    }

    ctx->pc = 0x1a1420u;

label_1a1420:
    // 0x1a1420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1424:
    // 0x1a1424: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a1424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1428:
    // 0x1a1428: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a1428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a142c:
    // 0x1a142c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1a142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1a1430:
    // 0x1a1430: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1a1434:
    // 0x1a1434: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1438:
    // 0x1a1438: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a143c:
    // 0x1a143c: 0x60f809  jalr        $v1
label_1a1440:
    if (ctx->pc == 0x1A1440u) {
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1444u;
        goto label_1a1444;
    }
    ctx->pc = 0x1A143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1444u);
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A143Cu, 0x1A1444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1444u;
label_1a1444:
    // 0x1a1444: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_1a1448:
    if (ctx->pc == 0x1A1448u) {
        ctx->pc = 0x1A1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1444u;
        // 0x1a1448: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A144Cu;
        goto label_fallthrough_0x1a1444;
    }
    ctx->pc = 0x1A1444u;
    {
        const bool branch_taken_0x1a1444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1444) {
            ctx->pc = 0x1A1448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1444u;
            // 0x1a1448: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1420;
        }
    }
label_fallthrough_0x1a1444:
    ctx->pc = 0x1A144Cu;
}
