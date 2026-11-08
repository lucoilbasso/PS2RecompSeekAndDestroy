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

// Function: entry_001d1e38
// Address: 0x1d1e38 - 0x1d1e60
void entry_001d1e38_0x1d1e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1e38_0x1d1e38");
#endif

    ctx->pc = 0x1d1e38u;

    // 0x1d1e38: 0x9e8023  subu        $s0, $a0, $fp
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1d1e3c: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D1E3Cu;
    {
        const bool branch_taken_0x1d1e3c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E3Cu;
        // 0x1d1e40: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e3c) {
            ctx->pc = 0x1D1F18u;
            return;
        }
    }
    ctx->pc = 0x1D1E44u;
    // 0x1d1e44: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1e48: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D1E48u;
    {
        const bool branch_taken_0x1d1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E48u;
        // 0x1d1e4c: 0x3c070026  lui         $a3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e48) {
            ctx->pc = 0x1D1EC8u;
            return;
        }
    }
    ctx->pc = 0x1D1E50u;
    // 0x1d1e50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1e54: 0x24f4c3d0  addiu       $s4, $a3, -0x3C30
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d1e58: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x1d1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x1d1e5c: 0x0  nop
    ctx->pc = 0x1d1e5cu;
    // NOP
    ctx->pc = 0x1d1e60u;
}
