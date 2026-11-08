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

// Function: caseD_24
// Address: 0x1660f8 - 0x166110
void caseD_24_0x1660f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_24_0x1660f8");
#endif

    ctx->pc = 0x1660f8u;

    // 0x1660f8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1660fc: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x166100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166104: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x166104u;
    {
        const bool branch_taken_0x166104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166104u;
        // 0x166108: 0x24c6af78  addiu       $a2, $a2, -0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166104) {
            ctx->pc = 0x1661F8u;
            return;
        }
    }
    ctx->pc = 0x16610Cu;
    // 0x16610c: 0x0  nop
    ctx->pc = 0x16610cu;
    // NOP
    ctx->pc = 0x166110u;
}
