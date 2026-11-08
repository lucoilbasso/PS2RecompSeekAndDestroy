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

// Function: entry_001aa63c
// Address: 0x1aa63c - 0x1aa664
void entry_001aa63c_0x1aa63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa63c_0x1aa63c");
#endif

    ctx->pc = 0x1aa63cu;

    // 0x1aa63c: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x1aa63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1aa640: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x1aa640u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa644: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1aa644u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1aa648: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1aa648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aa64c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA64Cu;
    {
        const bool branch_taken_0x1aa64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA64Cu;
        // 0x1aa650: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa64c) {
            ctx->pc = 0x1AA664u;
            return;
        }
    }
    ctx->pc = 0x1AA654u;
    // 0x1aa654: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x1aa654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1aa658: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA658u;
    {
        const bool branch_taken_0x1aa658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA658u;
        // 0x1aa65c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa658) {
            ctx->pc = 0x1AA664u;
            return;
        }
    }
    ctx->pc = 0x1AA660u;
    // 0x1aa660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1aa664u;
}
