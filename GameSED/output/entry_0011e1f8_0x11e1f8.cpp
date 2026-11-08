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

// Function: entry_0011e1f8
// Address: 0x11e1f8 - 0x11e210
void entry_0011e1f8_0x11e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e1f8_0x11e1f8");
#endif

    ctx->pc = 0x11e1f8u;

    // 0x11e1f8: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E1F8u;
    {
        const bool branch_taken_0x11e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x11e1f8) {
            ctx->pc = 0x11E1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E1F8u;
            // 0x11e1fc: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E210u;
            return;
        }
    }
    ctx->pc = 0x11E200u;
    // 0x11e200: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e204: 0x10c7ffee  beq         $a2, $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11E204u;
    {
        const bool branch_taken_0x11e204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x11e204) {
            ctx->pc = 0x11E1C0u;
            return;
        }
    }
    ctx->pc = 0x11E20Cu;
    // 0x11e20c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x11e20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x11e210u;
}
