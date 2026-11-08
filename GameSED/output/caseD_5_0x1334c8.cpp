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

// Function: caseD_5
// Address: 0x1334c8 - 0x1334d8
void caseD_5_0x1334c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1334c8");
#endif

    ctx->pc = 0x1334c8u;

    // 0x1334c8: 0x1a8002f6  blez        $s4, . + 4 + (0x2F6 << 2)
    ctx->pc = 0x1334C8u;
    {
        const bool branch_taken_0x1334c8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1334CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C8u;
        // 0x1334cc: 0x96700238  lhu         $s0, 0x238($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c8) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1334D0u;
    // 0x1334d0: 0x100002f4  b           . + 4 + (0x2F4 << 2)
    ctx->pc = 0x1334D0u;
    {
        const bool branch_taken_0x1334d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D0u;
        // 0x1334d4: 0xa6600238  sh          $zero, 0x238($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 568), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d0) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1334D8u;
}
