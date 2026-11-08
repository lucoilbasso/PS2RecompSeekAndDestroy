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

// Function: entry_001ad93c
// Address: 0x1ad93c - 0x1ad954
void entry_001ad93c_0x1ad93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad93c_0x1ad93c");
#endif

    ctx->pc = 0x1ad93cu;

    // 0x1ad93c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD93Cu;
    {
        const bool branch_taken_0x1ad93c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD93Cu;
        // 0x1ad940: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad93c) {
            ctx->pc = 0x1AD964u;
            return;
        }
    }
    ctx->pc = 0x1AD944u;
    // 0x1ad944: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ad948: 0x14c2ffaa  bne         $a2, $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1AD948u;
    {
        const bool branch_taken_0x1ad948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD948u;
        // 0x1ad94c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad948) {
            ctx->pc = 0x1AD7F4u;
            return;
        }
    }
    ctx->pc = 0x1AD950u;
    // 0x1ad950: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ad950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1ad954u;
}
