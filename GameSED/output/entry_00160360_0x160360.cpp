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

// Function: entry_00160360
// Address: 0x160360 - 0x160390
void entry_00160360_0x160360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160360_0x160360");
#endif

    switch (ctx->pc) {
        case 0x16038cu: goto label_16038c;
        default: break;
    }

    ctx->pc = 0x160360u;

label_160360:
    // 0x160360: 0x8e060f38  lw          $a2, 0xF38($s0)
    ctx->pc = 0x160360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3896)));
label_160364:
    // 0x160364: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
label_160368:
    if (ctx->pc == 0x160368u) {
        ctx->pc = 0x160368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160364u;
        // 0x160368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16036Cu;
        goto label_16036c;
    }
    ctx->pc = 0x160364u;
    {
        const bool branch_taken_0x160364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160364u;
        // 0x160368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160364) {
            ctx->pc = 0x160434u;
            return;
        }
    }
    ctx->pc = 0x16036Cu;
label_16036c:
    // 0x16036c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160370:
    // 0x160370: 0x26100f3c  addiu       $s0, $s0, 0xF3C
    ctx->pc = 0x160370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3900));
label_160374:
    // 0x160374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x160374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160378:
    // 0x160378: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16037c:
    // 0x16037c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16037cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160380:
    // 0x160380: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160384:
    // 0x160384: 0x60f809  jalr        $v1
label_160388:
    if (ctx->pc == 0x160388u) {
        ctx->pc = 0x160388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160384u;
        // 0x160388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16038Cu;
        goto label_16038c;
    }
    ctx->pc = 0x160384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16038Cu);
        ctx->pc = 0x160388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160384u;
        // 0x160388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160384u, 0x16038Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16038Cu;
label_16038c:
    // 0x16038c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x160390u;
}
