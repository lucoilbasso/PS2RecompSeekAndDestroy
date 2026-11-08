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

// Function: entry_001c8728
// Address: 0x1c8728 - 0x1c8764
void entry_001c8728_0x1c8728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8728_0x1c8728");
#endif

    ctx->pc = 0x1c8728u;

    // 0x1c8728: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1c8728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c872c: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c8730: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c8730u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8734: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c8738: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c8738u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c873c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c873cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8740: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x1c8740u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c8744: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1c8744u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c8748: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x1c8748u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c874c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x1c874cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1c8750: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c8750u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c8754: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c8754u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c8758: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x1c8758u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1c875c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C875Cu;
    {
        const bool branch_taken_0x1c875c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c875c) {
            ctx->pc = 0x1C8760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C875Cu;
            // 0x1c8760: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8764u;
            return;
        }
    }
    ctx->pc = 0x1C8764u;
}
