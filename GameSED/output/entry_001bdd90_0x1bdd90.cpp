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

// Function: entry_001bdd90
// Address: 0x1bdd90 - 0x1bdda8
void entry_001bdd90_0x1bdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdd90_0x1bdd90");
#endif

    ctx->pc = 0x1bdd90u;

    // 0x1bdd90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bdd94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD94u;
    {
        const bool branch_taken_0x1bdd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD94u;
        // 0x1bdd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd94) {
            ctx->pc = 0x1BDDA8u;
            return;
        }
    }
    ctx->pc = 0x1BDD9Cu;
    // 0x1bdd9c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1bdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1bdda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdda4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bdda8u;
}
