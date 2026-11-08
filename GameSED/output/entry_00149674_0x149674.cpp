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

// Function: entry_00149674
// Address: 0x149674 - 0x149690
void entry_00149674_0x149674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149674_0x149674");
#endif

    ctx->pc = 0x149674u;

    // 0x149674: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149674u;
    {
        const bool branch_taken_0x149674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149674u;
        // 0x149678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149674) {
            ctx->pc = 0x149690u;
            return;
        }
    }
    ctx->pc = 0x14967Cu;
    // 0x14967c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149680: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149680u;
    {
        const bool branch_taken_0x149680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149680u;
        // 0x149684: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149680) {
            ctx->pc = 0x1496A0u;
            return;
        }
    }
    ctx->pc = 0x149688u;
    // 0x149688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149688u;
    {
        const bool branch_taken_0x149688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149688u;
        // 0x14968c: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149688) {
            ctx->pc = 0x1496A4u;
            return;
        }
    }
    ctx->pc = 0x149690u;
}
