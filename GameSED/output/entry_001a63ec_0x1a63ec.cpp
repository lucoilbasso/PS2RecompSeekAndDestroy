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

// Function: entry_001a63ec
// Address: 0x1a63ec - 0x1a640c
void entry_001a63ec_0x1a63ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a63ec_0x1a63ec");
#endif

    ctx->pc = 0x1a63ecu;

    // 0x1a63ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a63ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63f0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a63f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a63f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A63F4u;
    {
        const bool branch_taken_0x1a63f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63f4) {
            ctx->pc = 0x1A63F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A63F4u;
            // 0x1a63f8: 0xb02023  subu        $a0, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A640Cu;
            return;
        }
    }
    ctx->pc = 0x1A63FCu;
    // 0x1a63fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a63fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a6404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6408: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x1a6408u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x1a640cu;
}
