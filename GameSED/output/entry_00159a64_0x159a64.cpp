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

// Function: entry_00159a64
// Address: 0x159a64 - 0x159a98
void entry_00159a64_0x159a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159a64_0x159a64");
#endif

    ctx->pc = 0x159a64u;

    // 0x159a64: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x159A64u;
    {
        const bool branch_taken_0x159a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A64u;
        // 0x159a68: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a64) {
            ctx->pc = 0x159A98u;
            return;
        }
    }
    ctx->pc = 0x159A6Cu;
    // 0x159a6c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159a6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x159a70: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159a70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159a74: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159a74u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x159a78: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159a78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x159a7c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159a80: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x159a80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159a84: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159a84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159a88: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159a88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159a8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159A8Cu;
    {
        const bool branch_taken_0x159a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A8Cu;
        // 0x159a90: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a8c) {
            ctx->pc = 0x159AA8u;
            return;
        }
    }
    ctx->pc = 0x159A94u;
    // 0x159a94: 0x0  nop
    ctx->pc = 0x159a94u;
    // NOP
    ctx->pc = 0x159a98u;
}
