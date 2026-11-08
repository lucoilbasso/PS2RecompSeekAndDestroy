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

// Function: entry_0013e5b8
// Address: 0x13e5b8 - 0x13e5d8
void entry_0013e5b8_0x13e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e5b8_0x13e5b8");
#endif

    ctx->pc = 0x13e5b8u;

    // 0x13e5b8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x13e5b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13e5bc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13e5c0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x13e5c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x13e5c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e5c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13e5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e5cc: 0x1440ff34  bnez        $v0, . + 4 + (-0xCC << 2)
    ctx->pc = 0x13E5CCu;
    {
        const bool branch_taken_0x13e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5CCu;
        // 0x13e5d0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5cc) {
            ctx->pc = 0x13E2A0u;
            return;
        }
    }
    ctx->pc = 0x13E5D4u;
    // 0x13e5d4: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x13e5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13e5d8u;
}
