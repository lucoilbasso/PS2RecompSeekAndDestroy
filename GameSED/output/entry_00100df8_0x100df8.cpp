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

// Function: entry_00100df8
// Address: 0x100df8 - 0x100e18
void entry_00100df8_0x100df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100df8_0x100df8");
#endif

    ctx->pc = 0x100df8u;

    // 0x100df8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x100dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x100e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x100e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e0c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100E0Cu;
    {
        const bool branch_taken_0x100e0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E0Cu;
        // 0x100e10: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e0c) {
            ctx->pc = 0x100E18u;
            return;
        }
    }
    ctx->pc = 0x100E14u;
    // 0x100e14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x100e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x100e18u;
}
