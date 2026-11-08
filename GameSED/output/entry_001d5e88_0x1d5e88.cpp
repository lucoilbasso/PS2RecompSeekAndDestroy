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

// Function: entry_001d5e88
// Address: 0x1d5e88 - 0x1d5eb0
void entry_001d5e88_0x1d5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e88_0x1d5e88");
#endif

    ctx->pc = 0x1d5e88u;

    // 0x1d5e88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5e8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d5e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d5e90: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x1d5e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d5e94: 0x43027  nor         $a2, $zero, $a0
    ctx->pc = 0x1d5e94u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1d5e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5E98u;
    {
        const bool branch_taken_0x1d5e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E98u;
        // 0x1d5e9c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e98) {
            ctx->pc = 0x1D5EB0u;
            return;
        }
    }
    ctx->pc = 0x1D5EA0u;
    // 0x1d5ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5EA4u;
    {
        const bool branch_taken_0x1d5ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA4u;
        // 0x1d5ea8: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ea4) {
            ctx->pc = 0x1D5EB4u;
            return;
        }
    }
    ctx->pc = 0x1D5EACu;
    // 0x1d5eac: 0x0  nop
    ctx->pc = 0x1d5eacu;
    // NOP
    ctx->pc = 0x1d5eb0u;
}
