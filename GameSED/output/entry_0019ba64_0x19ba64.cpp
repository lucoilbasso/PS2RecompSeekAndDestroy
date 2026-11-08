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

// Function: entry_0019ba64
// Address: 0x19ba64 - 0x19ba78
void entry_0019ba64_0x19ba64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba64_0x19ba64");
#endif

    ctx->pc = 0x19ba64u;

    // 0x19ba64: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ba68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BA68u;
    {
        const bool branch_taken_0x19ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA68u;
        // 0x19ba6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba68) {
            ctx->pc = 0x19BA78u;
            return;
        }
    }
    ctx->pc = 0x19BA70u;
    // 0x19ba70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ba74: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x19ba74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x19ba78u;
}
