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

// Function: entry_001c8ac0
// Address: 0x1c8ac0 - 0x1c8af4
void entry_001c8ac0_0x1c8ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ac0_0x1c8ac0");
#endif

    ctx->pc = 0x1c8ac0u;

    // 0x1c8ac0: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ac4: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1c8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8ac8: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8acc: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8ad0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c8ad0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8ad4: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c8ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ad8: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c8adc: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c8adcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c8ae0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c8ae4: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1c8ae4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c8ae8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8aec: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8AECu;
    {
        const bool branch_taken_0x1c8aec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aec) {
            ctx->pc = 0x1C8AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8AECu;
            // 0x1c8af0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8AF4u;
            return;
        }
    }
    ctx->pc = 0x1C8AF4u;
}
