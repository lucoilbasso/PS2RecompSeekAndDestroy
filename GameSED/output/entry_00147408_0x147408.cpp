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

// Function: entry_00147408
// Address: 0x147408 - 0x147428
void entry_00147408_0x147408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147408_0x147408");
#endif

    ctx->pc = 0x147408u;

    // 0x147408: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x147408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x14740c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147410: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x147410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x147414: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x147414u;
    {
        const bool branch_taken_0x147414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147414u;
        // 0x147418: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147414) {
            ctx->pc = 0x1473E0u;
            return;
        }
    }
    ctx->pc = 0x14741Cu;
    // 0x14741c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14741Cu;
    {
        const bool branch_taken_0x14741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14741Cu;
        // 0x147420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14741c) {
            ctx->pc = 0x1474D0u;
            return;
        }
    }
    ctx->pc = 0x147424u;
    // 0x147424: 0x0  nop
    ctx->pc = 0x147424u;
    // NOP
    ctx->pc = 0x147428u;
}
