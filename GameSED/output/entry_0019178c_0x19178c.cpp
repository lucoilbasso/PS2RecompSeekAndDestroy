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

// Function: entry_0019178c
// Address: 0x19178c - 0x1917ac
void entry_0019178c_0x19178c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019178c_0x19178c");
#endif

    ctx->pc = 0x19178cu;

    // 0x19178c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x191790: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x191794: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x191794u;
    {
        const bool branch_taken_0x191794 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191794) {
            ctx->pc = 0x191838u;
            return;
        }
    }
    ctx->pc = 0x19179Cu;
    // 0x19179c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x19179cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917a0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1917A0u;
    {
        const bool branch_taken_0x1917a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A0u;
        // 0x1917a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917a0) {
            ctx->pc = 0x1917ACu;
            return;
        }
    }
    ctx->pc = 0x1917A8u;
    // 0x1917a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1917a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1917acu;
}
