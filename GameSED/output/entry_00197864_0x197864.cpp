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

// Function: entry_00197864
// Address: 0x197864 - 0x19789c
void entry_00197864_0x197864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197864_0x197864");
#endif

    ctx->pc = 0x197864u;

    // 0x197864: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x197864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x197868: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x197868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19786c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19786Cu;
    {
        const bool branch_taken_0x19786c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19786Cu;
        // 0x197870: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19786c) {
            ctx->pc = 0x1978A0u;
            return;
        }
    }
    ctx->pc = 0x197874u;
    // 0x197874: 0x10760009  beq         $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x197874u;
    {
        const bool branch_taken_0x197874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x197878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197874u;
        // 0x197878: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197874) {
            ctx->pc = 0x19789Cu;
            return;
        }
    }
    ctx->pc = 0x19787Cu;
    // 0x19787c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x19787cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197880: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x197880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x197884: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x197884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197888: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x19788c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x19788cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x197890: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x197890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197894: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x197894u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x197898: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x197898u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x19789cu;
}
