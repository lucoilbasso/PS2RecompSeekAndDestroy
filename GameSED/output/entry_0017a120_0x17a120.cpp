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

// Function: entry_0017a120
// Address: 0x17a120 - 0x17a140
void entry_0017a120_0x17a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a120_0x17a120");
#endif

    ctx->pc = 0x17a120u;

    // 0x17a120: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17a124: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17a128: 0x8f928d10  lw          $s2, -0x72F0($gp)
    ctx->pc = 0x17a128u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a12c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x17a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a130: 0xaf838d14  sw          $v1, -0x72EC($gp)
    ctx->pc = 0x17a130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 3));
    // 0x17a134: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x17a134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a138: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17A138u;
    {
        const bool branch_taken_0x17a138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a138) {
            ctx->pc = 0x17A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A138u;
            // 0x17a13c: 0x8e500158  lw          $s0, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A160u;
            return;
        }
    }
    ctx->pc = 0x17A140u;
}
