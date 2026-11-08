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

// Function: entry_001cc960
// Address: 0x1cc960 - 0x1cc978
void entry_001cc960_0x1cc960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc960_0x1cc960");
#endif

    ctx->pc = 0x1cc960u;

    // 0x1cc960: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cc964: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cc968: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1cc96c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc970: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1CC970u;
    {
        const bool branch_taken_0x1cc970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC970u;
        // 0x1cc974: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc970) {
            ctx->pc = 0x1CCA34u;
            return;
        }
    }
    ctx->pc = 0x1CC978u;
}
