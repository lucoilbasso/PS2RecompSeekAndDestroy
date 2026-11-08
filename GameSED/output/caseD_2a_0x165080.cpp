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

// Function: caseD_2a
// Address: 0x165080 - 0x1650b0
void caseD_2a_0x165080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2a_0x165080");
#endif

    ctx->pc = 0x165080u;

    // 0x165080: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x165084: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x165084u;
    {
        const bool branch_taken_0x165084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165084) {
            ctx->pc = 0x165088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165084u;
            // 0x165088: 0x260411c0  addiu       $a0, $s0, 0x11C0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1650B0u;
            return;
        }
    }
    ctx->pc = 0x16508Cu;
    // 0x16508c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x165090: 0x260511a0  addiu       $a1, $s0, 0x11A0
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4512));
    // 0x165094: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x165098: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x165098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16509c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16509cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1650a0: 0x260411b0  addiu       $a0, $s0, 0x11B0
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4528));
    // 0x1650a4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1650a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1650a8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1650a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1650ac: 0x260411c0  addiu       $a0, $s0, 0x11C0
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
    ctx->pc = 0x1650b0u;
}
