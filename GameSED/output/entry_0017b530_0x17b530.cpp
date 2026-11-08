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

// Function: entry_0017b530
// Address: 0x17b530 - 0x17b560
void entry_0017b530_0x17b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b530_0x17b530");
#endif

    ctx->pc = 0x17b530u;

label_17b530:
    // 0x17b530: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17b534: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b538: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x17b538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x17b53c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17b540: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x17b540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x17b544: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x17b544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x17b548: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B548u;
    {
        const bool branch_taken_0x17b548 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B548u;
        // 0x17b54c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b548) {
            ctx->pc = 0x17B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b530;
        }
    }
    ctx->pc = 0x17B550u;
    // 0x17b550: 0x265001a0  addiu       $s0, $s2, 0x1A0
    ctx->pc = 0x17b550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x17b554: 0x26510500  addiu       $s1, $s2, 0x500
    ctx->pc = 0x17b554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    // 0x17b558: 0x24130017  addiu       $s3, $zero, 0x17
    ctx->pc = 0x17b558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x17b55c: 0x0  nop
    ctx->pc = 0x17b55cu;
    // NOP
    ctx->pc = 0x17b560u;
}
