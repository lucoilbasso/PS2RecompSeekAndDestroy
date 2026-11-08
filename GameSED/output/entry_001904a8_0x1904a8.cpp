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

// Function: entry_001904a8
// Address: 0x1904a8 - 0x1904b4
void entry_001904a8_0x1904a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904a8_0x1904a8");
#endif

    ctx->pc = 0x1904a8u;

    // 0x1904a8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1904a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1904ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1904ACu;
    {
        const bool branch_taken_0x1904ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904ACu;
        // 0x1904b0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904ac) {
            ctx->pc = 0x1904C4u;
            return;
        }
    }
    ctx->pc = 0x1904B4u;
}
