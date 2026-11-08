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

// Function: entry_001929cc
// Address: 0x1929cc - 0x1929dc
void entry_001929cc_0x1929cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001929cc_0x1929cc");
#endif

    ctx->pc = 0x1929ccu;

    // 0x1929cc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1929CCu;
    {
        const bool branch_taken_0x1929cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929CCu;
        // 0x1929d0: 0xe48c0014  swc1        $f12, 0x14($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929cc) {
            ctx->pc = 0x1929DCu;
            return;
        }
    }
    ctx->pc = 0x1929D4u;
    // 0x1929d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1929d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1929d8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1929d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1929dcu;
}
