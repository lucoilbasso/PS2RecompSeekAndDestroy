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

// Function: entry_00152834
// Address: 0x152834 - 0x152860
void entry_00152834_0x152834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152834_0x152834");
#endif

    ctx->pc = 0x152834u;

    // 0x152834: 0x12830032  beq         $s4, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x152834u;
    {
        const bool branch_taken_0x152834 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x152838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152834u;
        // 0x152838: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152834) {
            ctx->pc = 0x152900u;
            return;
        }
    }
    ctx->pc = 0x15283Cu;
    // 0x15283c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x15283cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152840: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152840u;
    {
        const bool branch_taken_0x152840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152840u;
        // 0x152844: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152840) {
            ctx->pc = 0x152860u;
            return;
        }
    }
    ctx->pc = 0x152848u;
    // 0x152848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15284c: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15284Cu;
    {
        const bool branch_taken_0x15284c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x15284c) {
            ctx->pc = 0x152870u;
            return;
        }
    }
    ctx->pc = 0x152854u;
    // 0x152854: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152854u;
    {
        const bool branch_taken_0x152854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152854u;
        // 0x152858: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152854) {
            ctx->pc = 0x152884u;
            return;
        }
    }
    ctx->pc = 0x15285Cu;
    // 0x15285c: 0x0  nop
    ctx->pc = 0x15285cu;
    // NOP
    ctx->pc = 0x152860u;
}
