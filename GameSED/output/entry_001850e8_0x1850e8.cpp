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

// Function: entry_001850e8
// Address: 0x1850e8 - 0x1850fc
void entry_001850e8_0x1850e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001850e8_0x1850e8");
#endif

    switch (ctx->pc) {
        case 0x1850f8u: goto label_1850f8;
        default: break;
    }

    ctx->pc = 0x1850e8u;

    // 0x1850e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1850E8u;
    {
        const bool branch_taken_0x1850e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1850e8) {
            ctx->pc = 0x1850ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1850E8u;
            // 0x1850ec: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1850FCu;
            return;
        }
    }
    ctx->pc = 0x1850F0u;
    // 0x1850f0: 0xc061422  jal         func_185088
    ctx->pc = 0x1850F0u;
    SET_GPR_U32(ctx, 31, 0x1850F8u);
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1850F0u, 0x1850F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850F8u;
label_1850f8:
    // 0x1850f8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1850f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1850fcu;
}
