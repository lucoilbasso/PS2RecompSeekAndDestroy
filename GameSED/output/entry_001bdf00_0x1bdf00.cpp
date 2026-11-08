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

// Function: entry_001bdf00
// Address: 0x1bdf00 - 0x1bdf14
void entry_001bdf00_0x1bdf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdf00_0x1bdf00");
#endif

    ctx->pc = 0x1bdf00u;

    // 0x1bdf00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDF00u;
    {
        const bool branch_taken_0x1bdf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF00u;
        // 0x1bdf04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf00) {
            ctx->pc = 0x1BDF14u;
            return;
        }
    }
    ctx->pc = 0x1BDF08u;
    // 0x1bdf08: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1bdf08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1bdf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bdf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bdf14u;
}
