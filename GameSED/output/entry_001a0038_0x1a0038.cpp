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

// Function: entry_001a0038
// Address: 0x1a0038 - 0x1a0060
void entry_001a0038_0x1a0038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0038_0x1a0038");
#endif

    ctx->pc = 0x1a0038u;

    // 0x1a0038: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1a0038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1a003c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A003Cu;
    {
        const bool branch_taken_0x1a003c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A003Cu;
        // 0x1a0040: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a003c) {
            ctx->pc = 0x1A0068u;
            return;
        }
    }
    ctx->pc = 0x1A0044u;
    // 0x1a0044: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0048: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x1a0048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1a004c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A004Cu;
    {
        const bool branch_taken_0x1a004c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A004Cu;
        // 0x1a0050: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a004c) {
            ctx->pc = 0x1A0060u;
            return;
        }
    }
    ctx->pc = 0x1A0054u;
    // 0x1a0054: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a0054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a0058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a005c: 0x83382b  sltu        $a3, $a0, $v1
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1a0060u;
}
