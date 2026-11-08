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

// Function: entry_0010e0cc
// Address: 0x10e0cc - 0x10e0f8
void entry_0010e0cc_0x10e0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e0cc_0x10e0cc");
#endif

    ctx->pc = 0x10e0ccu;

    // 0x10e0cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10e0d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10e0d4: 0x28c2003f  slti        $v0, $a2, 0x3F
    ctx->pc = 0x10e0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x10e0d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x10E0D8u;
    {
        const bool branch_taken_0x10e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D8u;
        // 0x10e0dc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0d8) {
            ctx->pc = 0x10E0B0u;
            return;
        }
    }
    ctx->pc = 0x10E0E0u;
    // 0x10e0e0: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x10e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x10e0e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x10e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10e0e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10e0ec: 0xace303f0  sw          $v1, 0x3F0($a3)
    ctx->pc = 0x10e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1008), GPR_U32(ctx, 3));
    // 0x10e0f0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x10e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10e0f4: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x10e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
    ctx->pc = 0x10e0f8u;
}
