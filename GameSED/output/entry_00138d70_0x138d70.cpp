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

// Function: entry_00138d70
// Address: 0x138d70 - 0x138d90
void entry_00138d70_0x138d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d70_0x138d70");
#endif

    ctx->pc = 0x138d70u;

    // 0x138d70: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x138D70u;
    {
        const bool branch_taken_0x138d70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D70u;
        // 0x138d74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d70) {
            ctx->pc = 0x138D90u;
            return;
        }
    }
    ctx->pc = 0x138D78u;
    // 0x138d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138d7c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138D7Cu;
    {
        const bool branch_taken_0x138d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x138D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D7Cu;
        // 0x138d80: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d7c) {
            ctx->pc = 0x138DA0u;
            return;
        }
    }
    ctx->pc = 0x138D84u;
    // 0x138d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138D84u;
    {
        const bool branch_taken_0x138d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d84) {
            ctx->pc = 0x138DA8u;
            return;
        }
    }
    ctx->pc = 0x138D8Cu;
    // 0x138d8c: 0x0  nop
    ctx->pc = 0x138d8cu;
    // NOP
    ctx->pc = 0x138d90u;
}
