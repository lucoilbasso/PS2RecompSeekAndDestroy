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

// Function: entry_0012b2b4
// Address: 0x12b2b4 - 0x12b2d8
void entry_0012b2b4_0x12b2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b2b4_0x12b2b4");
#endif

    ctx->pc = 0x12b2b4u;

    // 0x12b2b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12b2b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12b2b8: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x12b2b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12b2bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b2c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12b2c4: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x12b2c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x12b2c8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12b2cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12b2d0: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x12B2D0u;
    {
        const bool branch_taken_0x12b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D0u;
        // 0x12b2d4: 0xa3a300b3  sb          $v1, 0xB3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2d0) {
            ctx->pc = 0x12AFE8u;
            return;
        }
    }
    ctx->pc = 0x12B2D8u;
}
