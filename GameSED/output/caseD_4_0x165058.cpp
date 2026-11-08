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

// Function: caseD_4
// Address: 0x165058 - 0x165080
void caseD_4_0x165058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x165058");
#endif

    ctx->pc = 0x165058u;

    // 0x165058: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16505c: 0x26051180  addiu       $a1, $s0, 0x1180
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
    // 0x165060: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x165060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x165064: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x165064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165068: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x165068u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16506c: 0x26041190  addiu       $a0, $s0, 0x1190
    ctx->pc = 0x16506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4496));
    // 0x165070: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x165070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165074: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x165074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x165078: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x165078u;
    {
        const bool branch_taken_0x165078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165078u;
        // 0x16507c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165078) {
            ctx->pc = 0x16513Cu;
            return;
        }
    }
    ctx->pc = 0x165080u;
}
