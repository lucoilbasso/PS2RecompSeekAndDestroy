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

// Function: entry_0014ad6c
// Address: 0x14ad6c - 0x14ad8c
void entry_0014ad6c_0x14ad6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad6c_0x14ad6c");
#endif

    ctx->pc = 0x14ad6cu;

    // 0x14ad6c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x14ad70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14ad70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14ad74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ad78: 0xac560004  sw          $s6, 0x4($v0)
    ctx->pc = 0x14ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
    // 0x14ad7c: 0x920301ab  lbu         $v1, 0x1AB($s0)
    ctx->pc = 0x14ad7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ad80: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x14ad80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ad84: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14AD84u;
    {
        const bool branch_taken_0x14ad84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad84) {
            ctx->pc = 0x14AD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD84u;
            // 0x14ad88: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AD28u;
            return;
        }
    }
    ctx->pc = 0x14AD8Cu;
}
