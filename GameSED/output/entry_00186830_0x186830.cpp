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

// Function: entry_00186830
// Address: 0x186830 - 0x186848
void entry_00186830_0x186830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186830_0x186830");
#endif

    ctx->pc = 0x186830u;

    // 0x186830: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186834: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x186834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x186838: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x186838u;
    {
        const bool branch_taken_0x186838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186838u;
        // 0x18683c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186838) {
            ctx->pc = 0x1868ACu;
            return;
        }
    }
    ctx->pc = 0x186840u;
    // 0x186840: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x186840u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
    // 0x186844: 0x0  nop
    ctx->pc = 0x186844u;
    // NOP
    ctx->pc = 0x186848u;
}
