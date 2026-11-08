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

// Function: entry_001915cc
// Address: 0x1915cc - 0x1915f0
void entry_001915cc_0x1915cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001915cc_0x1915cc");
#endif

    ctx->pc = 0x1915ccu;

    // 0x1915cc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1915ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1915d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1915d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1915d4: 0x2862003f  slti        $v0, $v1, 0x3F
    ctx->pc = 0x1915d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1915d8: 0x0  nop
    ctx->pc = 0x1915d8u;
    // NOP
    // 0x1915dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1915DCu;
    {
        const bool branch_taken_0x1915dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915dc) {
            ctx->pc = 0x1915C0u;
            return;
        }
    }
    ctx->pc = 0x1915E4u;
    // 0x1915e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1915e8: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x1915e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x1915ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1915ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1915f0u;
}
