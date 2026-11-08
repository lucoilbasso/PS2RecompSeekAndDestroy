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

// Function: entry_001a62ec
// Address: 0x1a62ec - 0x1a630c
void entry_001a62ec_0x1a62ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a62ec_0x1a62ec");
#endif

    ctx->pc = 0x1a62ecu;

    // 0x1a62ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a62ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62f0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a62f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a62f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A62F4u;
    {
        const bool branch_taken_0x1a62f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62f4) {
            ctx->pc = 0x1A62F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62F4u;
            // 0x1a62f8: 0xb02023  subu        $a0, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A630Cu;
            return;
        }
    }
    ctx->pc = 0x1A62FCu;
    // 0x1a62fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a62fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6300: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a6304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6308: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x1a630cu;
}
