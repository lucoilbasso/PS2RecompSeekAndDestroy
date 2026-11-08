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

// Function: entry_00154fb0
// Address: 0x154fb0 - 0x154fc0
void entry_00154fb0_0x154fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154fb0_0x154fb0");
#endif

    ctx->pc = 0x154fb0u;

    // 0x154fb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x154fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x154fb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x154fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154fb8: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x154FB8u;
    {
        const bool branch_taken_0x154fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB8u;
        // 0x154fbc: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fb8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154FC0u;
}
