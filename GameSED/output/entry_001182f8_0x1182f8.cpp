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

// Function: entry_001182f8
// Address: 0x1182f8 - 0x118330
void entry_001182f8_0x1182f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182f8_0x1182f8");
#endif

    ctx->pc = 0x1182f8u;

label_1182f8:
    // 0x1182f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1182f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1182fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1182fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118300: 0x0  nop
    ctx->pc = 0x118300u;
    // NOP
    // 0x118304: 0x0  nop
    ctx->pc = 0x118304u;
    // NOP
    // 0x118308: 0x0  nop
    ctx->pc = 0x118308u;
    // NOP
    // 0x11830c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11830Cu;
    {
        const bool branch_taken_0x11830c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11830Cu;
        // 0x118310: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11830c) {
            ctx->pc = 0x1182F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1182f8;
        }
    }
    ctx->pc = 0x118314u;
    // 0x118314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118318: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x118318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11831c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11831Cu;
    {
        const bool branch_taken_0x11831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11831Cu;
        // 0x118320: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11831c) {
            ctx->pc = 0x1182F0u;
            return;
        }
    }
    ctx->pc = 0x118324u;
    // 0x118324: 0x26421cac  addiu       $v0, $s2, 0x1CAC
    ctx->pc = 0x118324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7340));
    // 0x118328: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x118328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11832c: 0x0  nop
    ctx->pc = 0x11832cu;
    // NOP
    ctx->pc = 0x118330u;
}
