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

// Function: caseD_27
// Address: 0x1661b8 - 0x1661d0
void caseD_27_0x1661b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_27_0x1661b8");
#endif

    ctx->pc = 0x1661b8u;

    // 0x1661b8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1661bc: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x1661c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1661c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1661C4u;
    {
        const bool branch_taken_0x1661c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661C4u;
        // 0x1661c8: 0x24c6af98  addiu       $a2, $a2, -0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661c4) {
            ctx->pc = 0x1661F8u;
            return;
        }
    }
    ctx->pc = 0x1661CCu;
    // 0x1661cc: 0x0  nop
    ctx->pc = 0x1661ccu;
    // NOP
    ctx->pc = 0x1661d0u;
}
