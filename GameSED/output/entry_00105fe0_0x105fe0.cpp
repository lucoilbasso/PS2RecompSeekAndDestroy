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

// Function: entry_00105fe0
// Address: 0x105fe0 - 0x10601c
void entry_00105fe0_0x105fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105fe0_0x105fe0");
#endif

    switch (ctx->pc) {
        case 0x105fe8u: goto label_105fe8;
        default: break;
    }

    ctx->pc = 0x105fe0u;

    // 0x105fe0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x105FE0u;
    SET_GPR_U32(ctx, 31, 0x105FE8u);
    ctx->pc = 0x105FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FE0u;
    // 0x105fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x105FE0u, 0x105FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FE8u;
label_105fe8:
    // 0x105fe8: 0x26651fe0  addiu       $a1, $s3, 0x1FE0
    ctx->pc = 0x105fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8160));
    // 0x105fec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x105fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105ff0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x105ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x105ff4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x105ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x105ff8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x105ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x105ffc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x105ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x106000: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x106000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x106004: 0x8f828898  lw          $v0, -0x7768($gp)
    ctx->pc = 0x106004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x106008: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x106008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x10600c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10600Cu;
    {
        const bool branch_taken_0x10600c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10600Cu;
        // 0x106010: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10600c) {
            ctx->pc = 0x10601Cu;
            return;
        }
    }
    ctx->pc = 0x106014u;
    // 0x106014: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106014u;
    SET_GPR_U32(ctx, 31, 0x10601Cu);
    ctx->pc = 0x106018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106014u;
    // 0x106018: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106014u, 0x10601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10601Cu;
}
