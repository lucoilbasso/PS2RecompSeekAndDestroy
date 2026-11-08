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

// Function: entry_00117408
// Address: 0x117408 - 0x117420
void entry_00117408_0x117408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117408_0x117408");
#endif

    ctx->pc = 0x117408u;

    // 0x117408: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x117408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x11740c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x11740Cu;
    {
        const bool branch_taken_0x11740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11740Cu;
        // 0x117410: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11740c) {
            ctx->pc = 0x1175A0u;
            return;
        }
    }
    ctx->pc = 0x117414u;
    // 0x117414: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x117414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x117418: 0x1447fff1  bne         $v0, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x117418u;
    {
        const bool branch_taken_0x117418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x11741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117418u;
        // 0x11741c: 0x45202b  sltu        $a0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117418) {
            ctx->pc = 0x1173E0u;
            return;
        }
    }
    ctx->pc = 0x117420u;
}
