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

// Function: entry_00152c74
// Address: 0x152c74 - 0x152c8c
void entry_00152c74_0x152c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152c74_0x152c74");
#endif

    ctx->pc = 0x152c74u;

    // 0x152c74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152C74u;
    {
        const bool branch_taken_0x152c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C74u;
        // 0x152c78: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c74) {
            ctx->pc = 0x152C90u;
            return;
        }
    }
    ctx->pc = 0x152C7Cu;
    // 0x152c7c: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152C7Cu;
    {
        const bool branch_taken_0x152c7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x152C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C7Cu;
        // 0x152c80: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c7c) {
            ctx->pc = 0x152C8Cu;
            return;
        }
    }
    ctx->pc = 0x152C84u;
    // 0x152c84: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152C84u;
    {
        const bool branch_taken_0x152c84 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x152C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C84u;
        // 0x152c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c84) {
            ctx->pc = 0x152C94u;
            return;
        }
    }
    ctx->pc = 0x152C8Cu;
}
