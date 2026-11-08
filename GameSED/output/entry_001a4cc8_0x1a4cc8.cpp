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

// Function: entry_001a4cc8
// Address: 0x1a4cc8 - 0x1a4ce0
void entry_001a4cc8_0x1a4cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4cc8_0x1a4cc8");
#endif

    ctx->pc = 0x1a4cc8u;

    // 0x1a4cc8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a4ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4CCCu;
    {
        const bool branch_taken_0x1a4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CCCu;
        // 0x1a4cd0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ccc) {
            ctx->pc = 0x1A4CE0u;
            return;
        }
    }
    ctx->pc = 0x1A4CD4u;
    // 0x1a4cd4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4cd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4CD8u;
    {
        const bool branch_taken_0x1a4cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CD8u;
        // 0x1a4cdc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cd8) {
            ctx->pc = 0x1A4CF4u;
            return;
        }
    }
    ctx->pc = 0x1A4CE0u;
}
