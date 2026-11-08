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

// Function: entry_0019bb30
// Address: 0x19bb30 - 0x19bb48
void entry_0019bb30_0x19bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb30_0x19bb30");
#endif

    ctx->pc = 0x19bb30u;

    // 0x19bb30: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x19bb34: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19bb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19bb38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BB38u;
    {
        const bool branch_taken_0x19bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB38u;
        // 0x19bb3c: 0x681026  xor         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb38) {
            ctx->pc = 0x19BB48u;
            return;
        }
    }
    ctx->pc = 0x19BB40u;
    // 0x19bb40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19BB40u;
    {
        const bool branch_taken_0x19bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB40u;
        // 0x19bb44: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb40) {
            ctx->pc = 0x19BB4Cu;
            return;
        }
    }
    ctx->pc = 0x19BB48u;
}
