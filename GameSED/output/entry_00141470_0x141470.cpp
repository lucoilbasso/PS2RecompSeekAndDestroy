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

// Function: entry_00141470
// Address: 0x141470 - 0x1414b0
void entry_00141470_0x141470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141470_0x141470");
#endif

    ctx->pc = 0x141470u;

    // 0x141470: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x141470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x141474: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x141474u;
    {
        const bool branch_taken_0x141474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141474u;
        // 0x141478: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141474) {
            ctx->pc = 0x1414C8u;
            return;
        }
    }
    ctx->pc = 0x14147Cu;
    // 0x14147c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x14147cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141480: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x141480u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x141484: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x141484) {
            ctx->pc = 0x1414B0u;
            return;
        }
    }
    ctx->pc = 0x14148Cu;
    // 0x14148c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x141490: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x141494: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x141498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14149c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x14149cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1414a0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1414a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1414a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1414A8u;
    {
        const bool branch_taken_0x1414a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414A8u;
        // 0x1414ac: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414a8) {
            ctx->pc = 0x1414C0u;
            return;
        }
    }
    ctx->pc = 0x1414B0u;
}
