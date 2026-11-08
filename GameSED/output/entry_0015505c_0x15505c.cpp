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

// Function: entry_0015505c
// Address: 0x15505c - 0x155098
void entry_0015505c_0x15505c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015505c_0x15505c");
#endif

    ctx->pc = 0x15505cu;

    // 0x15505c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155060: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x155060u;
    {
        const bool branch_taken_0x155060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155060u;
        // 0x155064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155060) {
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x155068u;
    // 0x155068: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x15506c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15506cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155070: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x155074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155078: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x155078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15507c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x15507cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x155080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155088: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15508c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155090: 0x8041da8  j           func_1076A0
    ctx->pc = 0x155090u;
    ctx->pc = 0x155094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155090u;
    // 0x155094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    Ap2DPanel_TRANS_Param__FP8WcEntityP15BsSCDEntControlb_0x1076a0(rdram, ctx, runtime); return;
    ctx->pc = 0x155098u;
}
