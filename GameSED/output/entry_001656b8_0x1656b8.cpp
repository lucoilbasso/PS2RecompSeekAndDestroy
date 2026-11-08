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

// Function: entry_001656b8
// Address: 0x1656b8 - 0x1656e8
void entry_001656b8_0x1656b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001656b8_0x1656b8");
#endif

    ctx->pc = 0x1656b8u;

    // 0x1656b8: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x1656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x1656bc: 0x265001b4  addiu       $s0, $s2, 0x1B4
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x1656c0: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1656c4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1656c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1656c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1656cc: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x1656ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
    // 0x1656d0: 0x16200028  bnez        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1656D0u;
    {
        const bool branch_taken_0x1656d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D0u;
        // 0x1656d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656d0) {
            ctx->pc = 0x165774u;
            return;
        }
    }
    ctx->pc = 0x1656D8u;
    // 0x1656d8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1656d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656dc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1656DCu;
    {
        const bool branch_taken_0x1656dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656DCu;
        // 0x1656e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656dc) {
            ctx->pc = 0x1656E8u;
            return;
        }
    }
    ctx->pc = 0x1656E4u;
    // 0x1656e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1656e8u;
}
