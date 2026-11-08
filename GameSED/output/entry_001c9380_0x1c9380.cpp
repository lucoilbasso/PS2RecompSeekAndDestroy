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

// Function: entry_001c9380
// Address: 0x1c9380 - 0x1c93bc
void entry_001c9380_0x1c9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9380_0x1c9380");
#endif

    ctx->pc = 0x1c9380u;

    // 0x1c9380: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1c9380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9384: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1c9384u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9388: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c938c: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1c938cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9390: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9394: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c9394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9398: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x1c9398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c939c: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1c939cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c93a0: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x1c93a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c93a4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x1c93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1c93a8: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c93a8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c93ac: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c93b0: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x1c93b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1c93b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C93B4u;
    {
        const bool branch_taken_0x1c93b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93b4) {
            ctx->pc = 0x1C93B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93B4u;
            // 0x1c93b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C93BCu;
            return;
        }
    }
    ctx->pc = 0x1C93BCu;
}
