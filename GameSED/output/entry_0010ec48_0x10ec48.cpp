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

// Function: entry_0010ec48
// Address: 0x10ec48 - 0x10ec78
void entry_0010ec48_0x10ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec48_0x10ec48");
#endif

    ctx->pc = 0x10ec48u;

    // 0x10ec48: 0x4a2000e  bltzl       $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x10EC48u;
    {
        const bool branch_taken_0x10ec48 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10ec48) {
            ctx->pc = 0x10EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC48u;
            // 0x10ec4c: 0x8e910048  lw          $s1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC84u;
            return;
        }
    }
    ctx->pc = 0x10EC50u;
    // 0x10ec50: 0x8e6201b8  lw          $v0, 0x1B8($s3)
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x10ec54: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10ec54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ec58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EC58u;
    {
        const bool branch_taken_0x10ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC58u;
        // 0x10ec5c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec58) {
            ctx->pc = 0x10EC78u;
            return;
        }
    }
    ctx->pc = 0x10EC60u;
    // 0x10ec60: 0x8e6201bc  lw          $v0, 0x1BC($s3)
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x10ec64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ec68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ec6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10EC6Cu;
    {
        const bool branch_taken_0x10ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC6Cu;
        // 0x10ec70: 0xae0401a8  sw          $a0, 0x1A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec6c) {
            ctx->pc = 0x10ED00u;
            return;
        }
    }
    ctx->pc = 0x10EC74u;
    // 0x10ec74: 0x0  nop
    ctx->pc = 0x10ec74u;
    // NOP
    ctx->pc = 0x10ec78u;
}
