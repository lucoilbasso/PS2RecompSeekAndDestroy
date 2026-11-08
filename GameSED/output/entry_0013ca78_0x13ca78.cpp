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

// Function: entry_0013ca78
// Address: 0x13ca78 - 0x13ca88
void entry_0013ca78_0x13ca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca78_0x13ca78");
#endif

    ctx->pc = 0x13ca78u;

    // 0x13ca78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ca7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13ca7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ca80: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13CA80u;
    {
        const bool branch_taken_0x13ca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca80) {
            ctx->pc = 0x13CA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA80u;
            // 0x13ca84: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CA40u;
            return;
        }
    }
    ctx->pc = 0x13CA88u;
}
