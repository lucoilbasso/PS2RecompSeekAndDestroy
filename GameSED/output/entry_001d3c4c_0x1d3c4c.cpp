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

// Function: entry_001d3c4c
// Address: 0x1d3c4c - 0x1d3c94
void entry_001d3c4c_0x1d3c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3c4c_0x1d3c4c");
#endif

    ctx->pc = 0x1d3c4cu;

    // 0x1d3c4c: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3C4Cu;
    {
        const bool branch_taken_0x1d3c4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C4Cu;
        // 0x1d3c50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c4c) {
            ctx->pc = 0x1D3C94u;
            return;
        }
    }
    ctx->pc = 0x1D3C54u;
    // 0x1d3c54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3c58: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1d3c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1d3c5c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1d3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1d3c60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D3C60u;
    {
        const bool branch_taken_0x1d3c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C60u;
        // 0x1d3c64: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c60) {
            ctx->pc = 0x1D3C98u;
            return;
        }
    }
    ctx->pc = 0x1D3C68u;
    // 0x1d3c68: 0x14103f  dsra32      $v0, $s4, 0
    ctx->pc = 0x1d3c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1d3c6c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1d3c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d3c74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3C74u;
    {
        const bool branch_taken_0x1d3c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C74u;
        // 0x1d3c78: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c74) {
            ctx->pc = 0x1D3C94u;
            return;
        }
    }
    ctx->pc = 0x1D3C7Cu;
    // 0x1d3c7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d3c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3c84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d3c88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3c8c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d3c90: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1d3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3c94u;
}
