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

// Function: entry_0018fff8
// Address: 0x18fff8 - 0x190020
void entry_0018fff8_0x18fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fff8_0x18fff8");
#endif

    ctx->pc = 0x18fff8u;

    // 0x18fff8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18fff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18fffc: 0x25630004  addiu       $v1, $t3, 0x4
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x190000: 0x25440008  addiu       $a0, $t2, 0x8
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x190004: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x190004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x190008: 0x77580b  movn        $t3, $v1, $s7
    ctx->pc = 0x190008u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x19000c: 0x93500b  movn        $t2, $a0, $s3
    ctx->pc = 0x19000cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x190010: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x190014: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x190014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x190018: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x190018u;
    {
        const bool branch_taken_0x190018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190018u;
        // 0x19001c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190018) {
            ctx->pc = 0x18FF18u;
            return;
        }
    }
    ctx->pc = 0x190020u;
}
