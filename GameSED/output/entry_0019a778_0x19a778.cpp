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

// Function: entry_0019a778
// Address: 0x19a778 - 0x19a790
void entry_0019a778_0x19a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a778_0x19a778");
#endif

    ctx->pc = 0x19a778u;

    // 0x19a778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19a77c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19a77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a780: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x19a780u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x19a784: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A784u;
    {
        const bool branch_taken_0x19a784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A784u;
        // 0x19a788: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a784) {
            ctx->pc = 0x19A790u;
            return;
        }
    }
    ctx->pc = 0x19A78Cu;
    // 0x19a78c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x19a790u;
}
