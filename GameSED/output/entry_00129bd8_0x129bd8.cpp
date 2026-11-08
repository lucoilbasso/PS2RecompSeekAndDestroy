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

// Function: entry_00129bd8
// Address: 0x129bd8 - 0x129bf8
void entry_00129bd8_0x129bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129bd8_0x129bd8");
#endif

    ctx->pc = 0x129bd8u;

    // 0x129bd8: 0x2ae30023  slti        $v1, $s7, 0x23
    ctx->pc = 0x129bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x129bdc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x129bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x129be0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129BE0u;
    {
        const bool branch_taken_0x129be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE0u;
        // 0x129be4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129be0) {
            ctx->pc = 0x129BF8u;
            return;
        }
    }
    ctx->pc = 0x129BE8u;
    // 0x129be8: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x129be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x129bec: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x129bf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x129bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129bf4: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x129bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x129bf8u;
}
