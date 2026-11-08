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

// Function: entry_00184c70
// Address: 0x184c70 - 0x184c88
void entry_00184c70_0x184c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c70_0x184c70");
#endif

    ctx->pc = 0x184c70u;

    // 0x184c70: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x184C70u;
    {
        const bool branch_taken_0x184c70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C70u;
        // 0x184c74: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c70) {
            ctx->pc = 0x184CD0u;
            return;
        }
    }
    ctx->pc = 0x184C78u;
    // 0x184c78: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x184c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x184c7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x184c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c80: 0xae320124  sw          $s2, 0x124($s1)
    ctx->pc = 0x184c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 18));
    // 0x184c84: 0xae330128  sw          $s3, 0x128($s1)
    ctx->pc = 0x184c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 19));
    ctx->pc = 0x184c88u;
}
