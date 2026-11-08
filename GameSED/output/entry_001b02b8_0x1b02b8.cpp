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

// Function: entry_001b02b8
// Address: 0x1b02b8 - 0x1b02d8
void entry_001b02b8_0x1b02b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b02b8_0x1b02b8");
#endif

    ctx->pc = 0x1b02b8u;

    // 0x1b02b8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1b02b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b02bc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1b02bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b02c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b02c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B02C4u;
    {
        const bool branch_taken_0x1b02c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02C4u;
        // 0x1b02c8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02c4) {
            ctx->pc = 0x1B0308u;
            return;
        }
    }
    ctx->pc = 0x1B02CCu;
    // 0x1b02cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B02CCu;
    {
        const bool branch_taken_0x1b02cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02CCu;
        // 0x1b02d0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02cc) {
            ctx->pc = 0x1B02DCu;
            return;
        }
    }
    ctx->pc = 0x1B02D4u;
    // 0x1b02d4: 0x0  nop
    ctx->pc = 0x1b02d4u;
    // NOP
    ctx->pc = 0x1b02d8u;
}
