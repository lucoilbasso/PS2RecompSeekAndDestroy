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

// Function: $L12
// Address: 0x1d0c94 - 0x1d0ce4
void ps2__L12_0x1d0c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L12_0x1d0c94");
#endif

    ctx->pc = 0x1d0c94u;

    // 0x1d0c94: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1d0c94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0c98: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x1d0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x1d0c9c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1d0c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1d0ca0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1d0ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1d0ca4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1d0ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1d0ca8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1d0ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1d0cac: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1d0cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1d0cb0: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x1d0cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1d0cb4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1d0cb4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1d0cb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0cbc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d0cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d0cc0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0CC0u;
    {
        const bool branch_taken_0x1d0cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0cc0) {
            ctx->pc = 0x1D0CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0CC0u;
            // 0x1d0cc4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D04u;
            return;
        }
    }
    ctx->pc = 0x1D0CC8u;
    // 0x1d0cc8: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x1d0ccc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x1d0cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x1d0cd0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1d0cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1d0cd4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x1d0cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x1d0cd8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1d0cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1d0cdc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x1d0cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x1d0ce0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d0ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->pc = 0x1d0ce4u;
}
