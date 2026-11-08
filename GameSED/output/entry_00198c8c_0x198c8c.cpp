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

// Function: entry_00198c8c
// Address: 0x198c8c - 0x198cc8
void entry_00198c8c_0x198c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c8c_0x198c8c");
#endif

    ctx->pc = 0x198c8cu;

    // 0x198c8c: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x198c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x198c90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x198c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x198c94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x198C94u;
    {
        const bool branch_taken_0x198c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198c94) {
            ctx->pc = 0x198CC8u;
            return;
        }
    }
    ctx->pc = 0x198C9Cu;
    // 0x198c9c: 0x1076000a  beq         $v1, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x198C9Cu;
    {
        const bool branch_taken_0x198c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x198CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C9Cu;
        // 0x198ca0: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c9c) {
            ctx->pc = 0x198CC8u;
            return;
        }
    }
    ctx->pc = 0x198CA4u;
    // 0x198ca4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x198ca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ca8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x198ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x198cac: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x198cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198cb4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198cb8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x198cb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198cbc: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x198cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x198cc0: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x198cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x198cc4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x198cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x198cc8u;
}
