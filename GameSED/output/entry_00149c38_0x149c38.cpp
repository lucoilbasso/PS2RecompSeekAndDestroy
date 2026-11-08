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

// Function: entry_00149c38
// Address: 0x149c38 - 0x149c58
void entry_00149c38_0x149c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149c38_0x149c38");
#endif

    ctx->pc = 0x149c38u;

    // 0x149c38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149C38u;
    {
        const bool branch_taken_0x149c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C38u;
        // 0x149c3c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c38) {
            ctx->pc = 0x149C58u;
            return;
        }
    }
    ctx->pc = 0x149C40u;
    // 0x149c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149c44: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149C44u;
    {
        const bool branch_taken_0x149c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x149C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C44u;
        // 0x149c48: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c44) {
            ctx->pc = 0x149C68u;
            return;
        }
    }
    ctx->pc = 0x149C4Cu;
    // 0x149c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149C4Cu;
    {
        const bool branch_taken_0x149c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C4Cu;
        // 0x149c50: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c4c) {
            ctx->pc = 0x149C6Cu;
            return;
        }
    }
    ctx->pc = 0x149C54u;
    // 0x149c54: 0x0  nop
    ctx->pc = 0x149c54u;
    // NOP
    ctx->pc = 0x149c58u;
}
