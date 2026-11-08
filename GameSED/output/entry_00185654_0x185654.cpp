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

// Function: entry_00185654
// Address: 0x185654 - 0x1856a4
void entry_00185654_0x185654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185654_0x185654");
#endif

    ctx->pc = 0x185654u;

    // 0x185654: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x185654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x185658: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x185658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x18565c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x185668: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x185668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18566c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x185670: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x185670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x185674: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x185674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x185678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18567c: 0x8e510148  lw          $s1, 0x148($s2)
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x185680: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x185680u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185684: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x185684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x185688: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x185688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x18568c: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x18568cu;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x185690: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x185690u;
    {
        const bool branch_taken_0x185690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185690u;
        // 0x185694: 0x2c970001  sltiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185690) {
            ctx->pc = 0x1856A4u;
            return;
        }
    }
    ctx->pc = 0x185698u;
    // 0x185698: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x185698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x18569c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18569Cu;
    {
        const bool branch_taken_0x18569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18569c) {
            ctx->pc = 0x1856A8u;
            return;
        }
    }
    ctx->pc = 0x1856A4u;
}
