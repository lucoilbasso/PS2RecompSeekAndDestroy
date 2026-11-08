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

// Function: entry_001d2198
// Address: 0x1d2198 - 0x1d21c0
void entry_001d2198_0x1d2198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2198_0x1d2198");
#endif

    ctx->pc = 0x1d2198u;

    // 0x1d2198: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d219c: 0x28023  negu        $s0, $v0
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d21a0: 0x5a000033  blezl       $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D21A0u;
    {
        const bool branch_taken_0x1d21a0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d21a0) {
            ctx->pc = 0x1D21A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D21A0u;
            // 0x1d21a4: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2270u;
            return;
        }
    }
    ctx->pc = 0x1D21A8u;
    // 0x1d21a8: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d21ac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D21ACu;
    {
        const bool branch_taken_0x1d21ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21ACu;
        // 0x1d21b0: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21ac) {
            ctx->pc = 0x1D2220u;
            return;
        }
    }
    ctx->pc = 0x1D21B4u;
    // 0x1d21b4: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d21b8: 0x24f1c3d0  addiu       $s1, $a3, -0x3C30
    ctx->pc = 0x1d21b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d21bc: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1d21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    ctx->pc = 0x1d21c0u;
}
