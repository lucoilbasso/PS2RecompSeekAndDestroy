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

// Function: entry_001d1b98
// Address: 0x1d1b98 - 0x1d1bd0
void entry_001d1b98_0x1d1b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b98_0x1d1b98");
#endif

    ctx->pc = 0x1d1b98u;

    // 0x1d1b98: 0x32e50084  andi        $a1, $s7, 0x84
    ctx->pc = 0x1d1b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)132);
    // 0x1d1b9c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D1B9Cu;
    {
        const bool branch_taken_0x1d1b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B9Cu;
        // 0x1d1ba0: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b9c) {
            ctx->pc = 0x1D1C88u;
            return;
        }
    }
    ctx->pc = 0x1D1BA4u;
    // 0x1d1ba4: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x1d1ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d1ba8: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d1bac: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x1d1bacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d1bb0: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D1BB0u;
    {
        const bool branch_taken_0x1d1bb0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB0u;
        // 0x1d1bb4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb0) {
            ctx->pc = 0x1D1C88u;
            return;
        }
    }
    ctx->pc = 0x1D1BB8u;
    // 0x1d1bb8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D1BB8u;
    {
        const bool branch_taken_0x1d1bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB8u;
        // 0x1d1bbc: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb8) {
            ctx->pc = 0x1D1C38u;
            return;
        }
    }
    ctx->pc = 0x1D1BC0u;
    // 0x1d1bc0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1bc4: 0x24f4c3c0  addiu       $s4, $a3, -0x3C40
    ctx->pc = 0x1d1bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d1bc8: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1d1bcc: 0x0  nop
    ctx->pc = 0x1d1bccu;
    // NOP
    ctx->pc = 0x1d1bd0u;
}
