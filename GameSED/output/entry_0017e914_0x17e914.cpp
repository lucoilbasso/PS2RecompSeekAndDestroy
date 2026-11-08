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

// Function: entry_0017e914
// Address: 0x17e914 - 0x17e924
void entry_0017e914_0x17e914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e914_0x17e914");
#endif

    ctx->pc = 0x17e914u;

    // 0x17e914: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17e914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17e918: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17e918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e91c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17E91Cu;
    {
        const bool branch_taken_0x17e91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e91c) {
            ctx->pc = 0x17E920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E91Cu;
            // 0x17e920: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E8D0u;
            return;
        }
    }
    ctx->pc = 0x17E924u;
}
