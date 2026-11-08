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

// Function: entry_0010e01c
// Address: 0x10e01c - 0x10e03c
void entry_0010e01c_0x10e01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e01c_0x10e01c");
#endif

    ctx->pc = 0x10e01cu;

    // 0x10e01c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E01Cu;
    {
        const bool branch_taken_0x10e01c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E01Cu;
        // 0x10e020: 0x24030946  addiu       $v1, $zero, 0x946 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e01c) {
            ctx->pc = 0x10E03Cu;
            return;
        }
    }
    ctx->pc = 0x10E024u;
    // 0x10e024: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x10e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10e028: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10e028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10e02c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E02Cu;
    {
        const bool branch_taken_0x10e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e02c) {
            ctx->pc = 0x10E03Cu;
            return;
        }
    }
    ctx->pc = 0x10E034u;
    // 0x10e034: 0x8e6201c4  lw          $v0, 0x1C4($s3)
    ctx->pc = 0x10e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 452)));
    // 0x10e038: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x10e03cu;
}
