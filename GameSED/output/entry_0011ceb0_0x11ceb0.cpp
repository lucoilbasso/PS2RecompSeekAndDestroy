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

// Function: entry_0011ceb0
// Address: 0x11ceb0 - 0x11cec4
void entry_0011ceb0_0x11ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ceb0_0x11ceb0");
#endif

    ctx->pc = 0x11ceb0u;

    // 0x11ceb0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11ceb4: 0xe23004  sllv        $a2, $v0, $a3
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x11ceb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11ceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11cebc: 0x14490002  bne         $v0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CEBCu;
    {
        const bool branch_taken_0x11cebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x11CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEBCu;
        // 0x11cec0: 0x28e50003  slti        $a1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cebc) {
            ctx->pc = 0x11CEC8u;
            return;
        }
    }
    ctx->pc = 0x11CEC4u;
}
