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

// Function: entry_001cb7dc
// Address: 0x1cb7dc - 0x1cb7f8
void entry_001cb7dc_0x1cb7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb7dc_0x1cb7dc");
#endif

    ctx->pc = 0x1cb7dcu;

    // 0x1cb7dc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cb7e0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1cb7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb7e4: 0xa0a203fc  sb          $v0, 0x3FC($a1)
    ctx->pc = 0x1cb7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1020), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb7e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cb7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7ec: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1cb7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1cb7f0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1CB7F0u;
    {
        const bool branch_taken_0x1cb7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F0u;
        // 0x1cb7f4: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f0) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB7F8u;
}
