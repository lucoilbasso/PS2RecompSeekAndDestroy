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

// Function: entry_001ca6f0
// Address: 0x1ca6f0 - 0x1ca710
void entry_001ca6f0_0x1ca6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca6f0_0x1ca6f0");
#endif

    ctx->pc = 0x1ca6f0u;

label_1ca6f0:
    // 0x1ca6f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1ca6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca6f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ca6f8: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x1ca6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1ca6fc: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x1ca6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ca700: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1ca700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1ca704: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x1ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ca708: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CA708u;
    {
        const bool branch_taken_0x1ca708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA708u;
        // 0x1ca70c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca708) {
            ctx->pc = 0x1CA6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca6f0;
        }
    }
    ctx->pc = 0x1CA710u;
}
