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

// Function: entry_00195a60
// Address: 0x195a60 - 0x195a88
void entry_00195a60_0x195a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a60_0x195a60");
#endif

    ctx->pc = 0x195a60u;

    // 0x195a60: 0xde630030  ld          $v1, 0x30($s3)
    ctx->pc = 0x195a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x195a64: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x195a68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195a6c: 0xfe030220  sd          $v1, 0x220($s0)
    ctx->pc = 0x195a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 544), GPR_U64(ctx, 3));
    // 0x195a70: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x195a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x195a74: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x195a78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A78u;
    {
        const bool branch_taken_0x195a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A78u;
        // 0x195a7c: 0xc6800154  lwc1        $f0, 0x154($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a78) {
            ctx->pc = 0x195A88u;
            return;
        }
    }
    ctx->pc = 0x195A80u;
    // 0x195a80: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x195a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x195a88u;
}
