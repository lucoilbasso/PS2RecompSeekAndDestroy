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

// Function: caseD_6
// Address: 0x1334d8 - 0x1334e0
void caseD_6_0x1334d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1334d8");
#endif

    ctx->pc = 0x1334d8u;

    // 0x1334d8: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x1334D8u;
    {
        const bool branch_taken_0x1334d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D8u;
        // 0x1334dc: 0x9670023a  lhu         $s0, 0x23A($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 570)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d8) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1334E0u;
}
