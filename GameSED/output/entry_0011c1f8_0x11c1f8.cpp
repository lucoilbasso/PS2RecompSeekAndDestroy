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

// Function: entry_0011c1f8
// Address: 0x11c1f8 - 0x11c228
void entry_0011c1f8_0x11c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c1f8_0x11c1f8");
#endif

    ctx->pc = 0x11c1f8u;

label_11c1f8:
    // 0x11c1f8: 0x2e51021  addu        $v0, $s7, $a1
    ctx->pc = 0x11c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x11c1fc: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x11c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x11c200: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x11c200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c204: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11c208: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11c20c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C20Cu;
    {
        const bool branch_taken_0x11c20c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C20Cu;
        // 0x11c210: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c20c) {
            ctx->pc = 0x11C1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c1f8;
        }
    }
    ctx->pc = 0x11C214u;
    // 0x11c214: 0x26880008  addiu       $t0, $s4, 0x8
    ctx->pc = 0x11c214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11c218: 0x26e70008  addiu       $a3, $s7, 0x8
    ctx->pc = 0x11c218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x11c21c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x11c220: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x11c224: 0x0  nop
    ctx->pc = 0x11c224u;
    // NOP
    ctx->pc = 0x11c228u;
}
