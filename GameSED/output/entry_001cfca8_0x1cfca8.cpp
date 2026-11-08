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

// Function: entry_001cfca8
// Address: 0x1cfca8 - 0x1cfcd0
void entry_001cfca8_0x1cfca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfca8_0x1cfca8");
#endif

    ctx->pc = 0x1cfca8u;

    // 0x1cfca8: 0x4c3024  and         $a2, $v0, $t4
    ctx->pc = 0x1cfca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1cfcac: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x1cfcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1cfcb0: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x1cfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1cfcb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cfcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cfcb8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1cfcb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfcbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cfcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cfcc0: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x1cfcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cfcc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFCC4u;
    {
        const bool branch_taken_0x1cfcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC4u;
        // 0x1cfcc8: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcc4) {
            ctx->pc = 0x1CFCD0u;
            return;
        }
    }
    ctx->pc = 0x1CFCCCu;
    // 0x1cfccc: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x1cfcccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
    ctx->pc = 0x1cfcd0u;
}
