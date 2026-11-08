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

// Function: caseD_3
// Address: 0x112564 - 0x112578
void caseD_3_0x112564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x112564");
#endif

    ctx->pc = 0x112564u;

    // 0x112564: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x112564u;
    {
        const bool branch_taken_0x112564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x112568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112564u;
        // 0x112568: 0x32227fff  andi        $v0, $s1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112564) {
            ctx->pc = 0x11257Cu;
            return;
        }
    }
    ctx->pc = 0x11256Cu;
    // 0x11256c: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x11256cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x112570: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x112570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x112574: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x112574u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    ctx->pc = 0x112578u;
}
