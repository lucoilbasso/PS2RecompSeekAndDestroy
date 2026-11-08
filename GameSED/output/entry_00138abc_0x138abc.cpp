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

// Function: entry_00138abc
// Address: 0x138abc - 0x138ad4
void entry_00138abc_0x138abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138abc_0x138abc");
#endif

    ctx->pc = 0x138abcu;

    // 0x138abc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x138ac0: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x138ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x138ac4: 0x0  nop
    ctx->pc = 0x138ac4u;
    // NOP
    // 0x138ac8: 0x0  nop
    ctx->pc = 0x138ac8u;
    // NOP
    // 0x138acc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x138ACCu;
    {
        const bool branch_taken_0x138acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138acc) {
            ctx->pc = 0x138AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138ACCu;
            // 0x138ad0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138AB0u;
            return;
        }
    }
    ctx->pc = 0x138AD4u;
}
