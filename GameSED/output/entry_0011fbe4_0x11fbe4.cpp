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

// Function: entry_0011fbe4
// Address: 0x11fbe4 - 0x11fbf8
void entry_0011fbe4_0x11fbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbe4_0x11fbe4");
#endif

    ctx->pc = 0x11fbe4u;

    // 0x11fbe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11fbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11fbe8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11fbec: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11fbf0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11FBF0u;
    {
        const bool branch_taken_0x11fbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF0u;
        // 0x11fbf4: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbf0) {
            ctx->pc = 0x11FB70u;
            return;
        }
    }
    ctx->pc = 0x11FBF8u;
}
