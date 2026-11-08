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

// Function: caseD_137208
// Address: 0x137208 - 0x137220
void caseD_137208_0x137208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_137208_0x137208");
#endif

    ctx->pc = 0x137208u;

    // 0x137208: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x137208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x13720c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13720Cu;
    {
        const bool branch_taken_0x13720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13720c) {
            ctx->pc = 0x137210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13720Cu;
            // 0x137210: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137214u;
    // 0x137214: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x137214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x137218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137218u;
    {
        const bool branch_taken_0x137218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137218u;
        // 0x13721c: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137218) {
            ctx->pc = 0x137228u;
            return;
        }
    }
    ctx->pc = 0x137220u;
}
