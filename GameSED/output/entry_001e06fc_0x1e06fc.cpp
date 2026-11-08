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

// Function: entry_001e06fc
// Address: 0x1e06fc - 0x1e0728
void entry_001e06fc_0x1e06fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e06fc_0x1e06fc");
#endif

    ctx->pc = 0x1e06fcu;

    // 0x1e06fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e0700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e0704: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x1e0704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1e0708: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E0708u;
    {
        const bool branch_taken_0x1e0708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0708u;
        // 0x1e070c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0708) {
            ctx->pc = 0x1E06E0u;
            return;
        }
    }
    ctx->pc = 0x1E0710u;
    // 0x1e0710: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1e0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1e0714: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0718: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e0718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e071c: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x1e071cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
    // 0x1e0720: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0724: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1e0724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1e0728u;
}
