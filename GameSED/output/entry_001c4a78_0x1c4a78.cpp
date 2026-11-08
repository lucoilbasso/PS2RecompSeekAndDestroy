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

// Function: entry_001c4a78
// Address: 0x1c4a78 - 0x1c4aa8
void entry_001c4a78_0x1c4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a78_0x1c4a78");
#endif

    ctx->pc = 0x1c4a78u;

    // 0x1c4a78: 0x2609dc80  addiu       $t1, $s0, -0x2380
    ctx->pc = 0x1c4a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1c4a7c: 0x8e02dc80  lw          $v0, -0x2380($s0)
    ctx->pc = 0x1c4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958208)));
    // 0x1c4a80: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x1c4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1c4a84: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1c4a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a88: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c4a8c: 0x2584dcc0  addiu       $a0, $t4, -0x2340
    ctx->pc = 0x1c4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958272));
    // 0x1c4a90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c4a94: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x1c4a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x1c4a98: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1c4a98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a9c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1c4a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c4aa0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1C4AA0u;
    {
        const bool branch_taken_0x1c4aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AA0u;
        // 0x1c4aa4: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aa0) {
            ctx->pc = 0x1C4BCCu;
            return;
        }
    }
    ctx->pc = 0x1C4AA8u;
}
