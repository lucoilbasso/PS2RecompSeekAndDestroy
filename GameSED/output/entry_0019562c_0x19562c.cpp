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

// Function: entry_0019562c
// Address: 0x19562c - 0x195660
void entry_0019562c_0x19562c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019562c_0x19562c");
#endif

    ctx->pc = 0x19562cu;

    // 0x19562c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x195630: 0x8e04015c  lw          $a0, 0x15C($s0)
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x195634: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x195634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x195638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19563c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x19563cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x195640: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x195640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x195644: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x195648: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19564c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195650: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x195654: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x195654u;
    {
        const bool branch_taken_0x195654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x195658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195654u;
        // 0x195658: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195654) {
            ctx->pc = 0x195660u;
            return;
        }
    }
    ctx->pc = 0x19565Cu;
    // 0x19565c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x195660u;
}
