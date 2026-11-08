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

// Function: entry_0013702c
// Address: 0x13702c - 0x137068
void entry_0013702c_0x13702c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013702c_0x13702c");
#endif

    ctx->pc = 0x13702cu;

    // 0x13702c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x137030: 0x34c50002  ori         $a1, $a2, 0x2
    ctx->pc = 0x137030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x137034: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x137034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x137038: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x137038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13703c: 0xa4300b  movn        $a2, $a1, $a0
    ctx->pc = 0x13703cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x137040: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x137040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x137044: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x137044u;
    {
        const bool branch_taken_0x137044 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x137048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137044u;
        // 0x137048: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137044) {
            ctx->pc = 0x137068u;
            return;
        }
    }
    ctx->pc = 0x13704Cu;
    // 0x13704c: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x13704cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x137050: 0x8e640688  lw          $a0, 0x688($s3)
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1672)));
    // 0x137054: 0x34c30080  ori         $v1, $a2, 0x80
    ctx->pc = 0x137054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x137058: 0x8e65068c  lw          $a1, 0x68C($s3)
    ctx->pc = 0x137058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1676)));
    // 0x13705c: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x13705cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x137060: 0x34c20100  ori         $v0, $a2, 0x100
    ctx->pc = 0x137060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x137064: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x137064u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->pc = 0x137068u;
}
