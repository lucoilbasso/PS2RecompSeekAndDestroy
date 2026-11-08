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

// Function: entry_00165ac0
// Address: 0x165ac0 - 0x165ad8
void entry_00165ac0_0x165ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165ac0_0x165ac0");
#endif

    ctx->pc = 0x165ac0u;

    // 0x165ac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165AC4u;
    {
        const bool branch_taken_0x165ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AC4u;
        // 0x165ac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ac4) {
            ctx->pc = 0x165AD8u;
            return;
        }
    }
    ctx->pc = 0x165ACCu;
    // 0x165acc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x165accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165ad0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x165AD0u;
    {
        const bool branch_taken_0x165ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ad0) {
            ctx->pc = 0x165AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165AD0u;
            // 0x165ad4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A90u;
            return;
        }
    }
    ctx->pc = 0x165AD8u;
}
