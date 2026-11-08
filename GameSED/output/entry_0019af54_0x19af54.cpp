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

// Function: entry_0019af54
// Address: 0x19af54 - 0x19af78
void entry_0019af54_0x19af54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af54_0x19af54");
#endif

    ctx->pc = 0x19af54u;

    // 0x19af54: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19af58: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x19af58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x19af5c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AF5Cu;
    {
        const bool branch_taken_0x19af5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF5Cu;
        // 0x19af60: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af5c) {
            ctx->pc = 0x19AF78u;
            return;
        }
    }
    ctx->pc = 0x19AF64u;
    // 0x19af64: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19af68: 0x27a30001  addiu       $v1, $sp, 0x1
    ctx->pc = 0x19af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x19af6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF6Cu;
        // 0x19af70: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19AF9Cu;
            return;
        }
    }
    ctx->pc = 0x19AF74u;
    // 0x19af74: 0x0  nop
    ctx->pc = 0x19af74u;
    // NOP
    ctx->pc = 0x19af78u;
}
