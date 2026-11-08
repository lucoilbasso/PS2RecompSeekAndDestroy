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

// Function: entry_001341c8
// Address: 0x1341c8 - 0x1341e8
void entry_001341c8_0x1341c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001341c8_0x1341c8");
#endif

    ctx->pc = 0x1341c8u;

    // 0x1341c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1341c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1341cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1341ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1341d0: 0x14730005  bne         $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1341D0u;
    {
        const bool branch_taken_0x1341d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1341D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341D0u;
        // 0x1341d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341d0) {
            ctx->pc = 0x1341E8u;
            return;
        }
    }
    ctx->pc = 0x1341D8u;
    // 0x1341d8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1341dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1341dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1341E0u;
    {
        const bool branch_taken_0x1341e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341E0u;
        // 0x1341e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341e0) {
            ctx->pc = 0x134260u;
            return;
        }
    }
    ctx->pc = 0x1341E8u;
}
