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

// Function: entry_0017eea4
// Address: 0x17eea4 - 0x17eeb8
void entry_0017eea4_0x17eea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eea4_0x17eea4");
#endif

    ctx->pc = 0x17eea4u;

    // 0x17eea4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x17eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17eea8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17eeac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17eeb0: 0x1620ffdf  bnez        $s1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x17EEB0u;
    {
        const bool branch_taken_0x17eeb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEB0u;
        // 0x17eeb4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeb0) {
            ctx->pc = 0x17EE30u;
            return;
        }
    }
    ctx->pc = 0x17EEB8u;
}
