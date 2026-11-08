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

// Function: entry_001c4630
// Address: 0x1c4630 - 0x1c46b8
void entry_001c4630_0x1c4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4630_0x1c4630");
#endif

    ctx->pc = 0x1c4630u;

label_1c4630:
    // 0x1c4630: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4634: 0x0  nop
    ctx->pc = 0x1c4634u;
    // NOP
    // 0x1c4638: 0x0  nop
    ctx->pc = 0x1c4638u;
    // NOP
    // 0x1c463c: 0x0  nop
    ctx->pc = 0x1c463cu;
    // NOP
    // 0x1c4640: 0x0  nop
    ctx->pc = 0x1c4640u;
    // NOP
    // 0x1c4644: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4644u;
    {
        const bool branch_taken_0x1c4644 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c4644) {
            ctx->pc = 0x1C4630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4630;
        }
    }
    ctx->pc = 0x1C464Cu;
    // 0x1c464c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1c464cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1c4650: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c4650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4654: 0x24a5dd40  addiu       $a1, $a1, -0x22C0
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958400));
    // 0x1c4658: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1c4658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x1c465c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1c465cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24DD40u));
    // 0x1c4660: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c4660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4664: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1c4664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x1c4668: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x1c4668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x1c466c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c466cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1c4670: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4674: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x1c4674u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x1c4678: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1c4678u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x24DD50u));
    // 0x1c467c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c467cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1c4680: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1c4680u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24DD60u));
    // 0x1c4684: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c4684u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1c4688: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1c4688u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x24DD70u));
    // 0x1c468c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c468cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1c4690: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x1c4690u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24DD80u));
    // 0x1c4694: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c4694u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1c4698: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1c4698u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x24DD80u));
    // 0x1c469c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c469cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1c46a0: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x1c46a0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x24DD80u));
    // 0x1c46a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1c46a4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1c46a8: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1c46a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x24DD80u));
    // 0x1c46ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c46acu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1c46b0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1c46b0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 7));
    // 0x1c46b4: 0x0  nop
    ctx->pc = 0x1c46b4u;
    // NOP
    ctx->pc = 0x1c46b8u;
}
