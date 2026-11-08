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

// Function: caseD_2
// Address: 0x10e2f0 - 0x10e308
void caseD_2_0x10e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x10e2f0");
#endif

    ctx->pc = 0x10e2f0u;

    // 0x10e2f0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x10e2f4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x10e2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x10e2f8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x10e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x10e2fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10e2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x10e300: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x10E300u;
    {
        const bool branch_taken_0x10e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E300u;
        // 0x10e304: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e300) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E308u;
}
