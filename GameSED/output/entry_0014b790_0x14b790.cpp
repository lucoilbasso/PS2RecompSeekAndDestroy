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

// Function: entry_0014b790
// Address: 0x14b790 - 0x14b7cc
void entry_0014b790_0x14b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b790_0x14b790");
#endif

    ctx->pc = 0x14b790u;

    // 0x14b790: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14b794: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x14b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x14b798: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x14b798u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b79c: 0x8e130170  lw          $s3, 0x170($s0)
    ctx->pc = 0x14b79cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x14b7a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x14b7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14b7a4: 0x38c61118  xori        $a2, $a2, 0x1118
    ctx->pc = 0x14b7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4376);
    // 0x14b7a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b7ac: 0x2cd60001  sltiu       $s6, $a2, 0x1
    ctx->pc = 0x14b7acu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14b7b0: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x14b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14b7b4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x14b7b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x14b7b8: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B7B8u;
    {
        const bool branch_taken_0x14b7b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7B8u;
        // 0x14b7bc: 0x2c950001  sltiu       $s5, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7b8) {
            ctx->pc = 0x14B7CCu;
            return;
        }
    }
    ctx->pc = 0x14B7C0u;
    // 0x14b7c0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14b7c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b7c8: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x14b7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    ctx->pc = 0x14b7ccu;
}
