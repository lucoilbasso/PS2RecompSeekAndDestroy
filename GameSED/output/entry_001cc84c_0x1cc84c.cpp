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

// Function: entry_001cc84c
// Address: 0x1cc84c - 0x1cc87c
void entry_001cc84c_0x1cc84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc84c_0x1cc84c");
#endif

    ctx->pc = 0x1cc84cu;

    // 0x1cc84c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1cc84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cc850: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cc854: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC854u;
    {
        const bool branch_taken_0x1cc854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC854u;
        // 0x1cc858: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc854) {
            ctx->pc = 0x1CC890u;
            return;
        }
    }
    ctx->pc = 0x1CC85Cu;
    // 0x1cc85c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cc860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC860u;
    {
        const bool branch_taken_0x1cc860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC860u;
        // 0x1cc864: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc860) {
            ctx->pc = 0x1CC87Cu;
            return;
        }
    }
    ctx->pc = 0x1CC868u;
    // 0x1cc868: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc86c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cc870: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1cc870u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc874: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1cc874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1cc878: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1cc878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cc87cu;
}
