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

// Function: entry_001d5e48
// Address: 0x1d5e48 - 0x1d5e88
void entry_001d5e48_0x1d5e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e48_0x1d5e48");
#endif

    ctx->pc = 0x1d5e48u;

    // 0x1d5e48: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1d5e4c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x1d5e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d5e50: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5E50u;
    {
        const bool branch_taken_0x1d5e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e50) {
            ctx->pc = 0x1D5E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E50u;
            // 0x1d5e54: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5E88u;
            return;
        }
    }
    ctx->pc = 0x1D5E58u;
    // 0x1d5e58: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d5e5c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5e60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d5e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d5e64: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1d5e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d5e68: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5e6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5e78: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d5e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d5e7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5E7Cu;
    {
        const bool branch_taken_0x1d5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7Cu;
        // 0x1d5e80: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e7c) {
            ctx->pc = 0x1D5ECCu;
            return;
        }
    }
    ctx->pc = 0x1D5E84u;
    // 0x1d5e84: 0x0  nop
    ctx->pc = 0x1d5e84u;
    // NOP
    ctx->pc = 0x1d5e88u;
}
