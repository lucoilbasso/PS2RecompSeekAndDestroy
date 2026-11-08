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

// Function: entry_001833f4
// Address: 0x1833f4 - 0x183404
void entry_001833f4_0x1833f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001833f4_0x1833f4");
#endif

    ctx->pc = 0x1833f4u;

    // 0x1833f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1833f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1833f8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1833F8u;
    {
        const bool branch_taken_0x1833f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833F8u;
        // 0x1833fc: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833f8) {
            ctx->pc = 0x183404u;
            return;
        }
    }
    ctx->pc = 0x183400u;
    // 0x183400: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x183404u;
}
