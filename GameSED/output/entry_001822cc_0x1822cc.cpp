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

// Function: entry_001822cc
// Address: 0x1822cc - 0x1822e4
void entry_001822cc_0x1822cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001822cc_0x1822cc");
#endif

    ctx->pc = 0x1822ccu;

    // 0x1822cc: 0x14a000d4  bnez        $a1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x1822CCu;
    {
        const bool branch_taken_0x1822cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1822D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822CCu;
        // 0x1822d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822cc) {
            ctx->pc = 0x182620u;
            return;
        }
    }
    ctx->pc = 0x1822D4u;
    // 0x1822d4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1822d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1822d8: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1822d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1822dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1822dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1822e0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1822e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1822e4u;
}
