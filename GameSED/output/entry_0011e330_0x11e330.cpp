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

// Function: entry_0011e330
// Address: 0x11e330 - 0x11e348
void entry_0011e330_0x11e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e330_0x11e330");
#endif

    ctx->pc = 0x11e330u;

    // 0x11e330: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E330u;
    {
        const bool branch_taken_0x11e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x11e330) {
            ctx->pc = 0x11E334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E330u;
            // 0x11e334: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E338u;
    // 0x11e338: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x11e338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e33c: 0x10c7ffd0  beq         $a2, $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x11E33Cu;
    {
        const bool branch_taken_0x11e33c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x11e33c) {
            ctx->pc = 0x11E280u;
            return;
        }
    }
    ctx->pc = 0x11E344u;
    // 0x11e344: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x11e344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x11e348u;
}
