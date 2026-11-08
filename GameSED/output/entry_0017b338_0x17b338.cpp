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

// Function: entry_0017b338
// Address: 0x17b338 - 0x17b360
void entry_0017b338_0x17b338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b338_0x17b338");
#endif

    ctx->pc = 0x17b338u;

label_17b338:
    // 0x17b338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b33c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17b340: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17B340u;
    {
        const bool branch_taken_0x17b340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B340u;
        // 0x17b344: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b340) {
            ctx->pc = 0x17B370u;
            return;
        }
    }
    ctx->pc = 0x17B348u;
    // 0x17b348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b34c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x17b34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b350: 0x0  nop
    ctx->pc = 0x17b350u;
    // NOP
    // 0x17b354: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B354u;
    {
        const bool branch_taken_0x17b354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B354u;
        // 0x17b358: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b354) {
            ctx->pc = 0x17B338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B35Cu;
    // 0x17b35c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x17b360u;
}
