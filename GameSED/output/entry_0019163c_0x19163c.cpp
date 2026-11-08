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

// Function: entry_0019163c
// Address: 0x19163c - 0x19165c
void entry_0019163c_0x19163c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019163c_0x19163c");
#endif

    ctx->pc = 0x19163cu;

    // 0x19163c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x191640: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191644: 0x14a00026  bnez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x191644u;
    {
        const bool branch_taken_0x191644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x191648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191644u;
        // 0x191648: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191644) {
            ctx->pc = 0x1916E0u;
            return;
        }
    }
    ctx->pc = 0x19164Cu;
    // 0x19164c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x19164cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191650: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191650u;
    {
        const bool branch_taken_0x191650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x191654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191650u;
        // 0x191654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191650) {
            ctx->pc = 0x19165Cu;
            return;
        }
    }
    ctx->pc = 0x191658u;
    // 0x191658: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x19165cu;
}
