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

// Function: entry_001640a8
// Address: 0x1640a8 - 0x1640d0
void entry_001640a8_0x1640a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640a8_0x1640a8");
#endif

    ctx->pc = 0x1640a8u;

    // 0x1640a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1640a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1640ac: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1640ACu;
    {
        const bool branch_taken_0x1640ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640ACu;
        // 0x1640b0: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640ac) {
            ctx->pc = 0x1641B0u;
            return;
        }
    }
    ctx->pc = 0x1640B4u;
    // 0x1640b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1640B4u;
    {
        const bool branch_taken_0x1640b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B4u;
        // 0x1640b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640b4) {
            ctx->pc = 0x1640D0u;
            return;
        }
    }
    ctx->pc = 0x1640BCu;
    // 0x1640bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1640bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1640c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1640C0u;
    {
        const bool branch_taken_0x1640c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640C0u;
        // 0x1640c4: 0x2463ffee  addiu       $v1, $v1, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640c0) {
            ctx->pc = 0x1640F0u;
            return;
        }
    }
    ctx->pc = 0x1640C8u;
    // 0x1640c8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1640C8u;
    {
        const bool branch_taken_0x1640c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640C8u;
        // 0x1640cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640c8) {
            ctx->pc = 0x1642F8u;
            return;
        }
    }
    ctx->pc = 0x1640D0u;
}
