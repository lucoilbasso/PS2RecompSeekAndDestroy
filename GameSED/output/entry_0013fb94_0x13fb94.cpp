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

// Function: entry_0013fb94
// Address: 0x13fb94 - 0x13fba8
void entry_0013fb94_0x13fb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fb94_0x13fb94");
#endif

    ctx->pc = 0x13fb94u;

    // 0x13fb94: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13fb98: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13fb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x13fb9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FB9Cu;
    {
        const bool branch_taken_0x13fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB9Cu;
        // 0x13fba0: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb9c) {
            ctx->pc = 0x13FBC4u;
            return;
        }
    }
    ctx->pc = 0x13FBA4u;
    // 0x13fba4: 0x0  nop
    ctx->pc = 0x13fba4u;
    // NOP
    ctx->pc = 0x13fba8u;
}
