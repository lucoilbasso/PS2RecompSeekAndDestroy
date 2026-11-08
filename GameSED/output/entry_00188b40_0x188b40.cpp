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

// Function: entry_00188b40
// Address: 0x188b40 - 0x188b88
void entry_00188b40_0x188b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b40_0x188b40");
#endif

    ctx->pc = 0x188b40u;

label_188b40:
    // 0x188b40: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x188b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x188b44: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x188b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188b48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188b4c: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x188b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x188b50: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x188b50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188b54: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x188b58: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x188B58u;
    {
        const bool branch_taken_0x188b58 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x188B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B58u;
        // 0x188b5c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b58) {
            ctx->pc = 0x188B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188b40;
        }
    }
    ctx->pc = 0x188B60u;
    // 0x188b60: 0x25220090  addiu       $v0, $t1, 0x90
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x188b64: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x188b64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188b68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188b6c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x188b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x188b70: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x188b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x188b74: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x188b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x188b78: 0x2448ed60  addiu       $t0, $v0, -0x12A0
    ctx->pc = 0x188b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x188b7c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x188b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x188b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x188b88u;
}
