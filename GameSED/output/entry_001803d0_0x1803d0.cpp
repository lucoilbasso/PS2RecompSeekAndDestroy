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

// Function: entry_001803d0
// Address: 0x1803d0 - 0x1803e8
void entry_001803d0_0x1803d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001803d0_0x1803d0");
#endif

    ctx->pc = 0x1803d0u;

    // 0x1803d0: 0x179102a  slt         $v0, $t3, $t9
    ctx->pc = 0x1803d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1803d4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1803D4u;
    {
        const bool branch_taken_0x1803d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803D4u;
        // 0x1803d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803d4) {
            ctx->pc = 0x180600u;
            return;
        }
    }
    ctx->pc = 0x1803DCu;
    // 0x1803dc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1803dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1803e0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1803e4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1803e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    ctx->pc = 0x1803e8u;
}
