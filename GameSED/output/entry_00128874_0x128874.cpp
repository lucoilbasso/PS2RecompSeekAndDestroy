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

// Function: entry_00128874
// Address: 0x128874 - 0x128898
void entry_00128874_0x128874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128874_0x128874");
#endif

    ctx->pc = 0x128874u;

    // 0x128874: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x128874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x128878: 0x86e20006  lh          $v0, 0x6($s7)
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x12887c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12887cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x128880: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x128880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x128884: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x128884u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x128888: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x128888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12888c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x128890: 0x1440ff01  bnez        $v0, . + 4 + (-0xFF << 2)
    ctx->pc = 0x128890u;
    {
        const bool branch_taken_0x128890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128890u;
        // 0x128894: 0xa3a300b3  sb          $v1, 0xB3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128890) {
            ctx->pc = 0x128498u;
            return;
        }
    }
    ctx->pc = 0x128898u;
}
