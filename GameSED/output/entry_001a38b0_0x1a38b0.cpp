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

// Function: entry_001a38b0
// Address: 0x1a38b0 - 0x1a38c8
void entry_001a38b0_0x1a38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a38b0_0x1a38b0");
#endif

    ctx->pc = 0x1a38b0u;

    // 0x1a38b0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a38b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a38b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A38B4u;
    {
        const bool branch_taken_0x1a38b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38B4u;
        // 0x1a38b8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38b4) {
            ctx->pc = 0x1A38C8u;
            return;
        }
    }
    ctx->pc = 0x1A38BCu;
    // 0x1a38bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a38c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A38C0u;
    {
        const bool branch_taken_0x1a38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38C0u;
        // 0x1a38c4: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38c0) {
            ctx->pc = 0x1A38D8u;
            return;
        }
    }
    ctx->pc = 0x1A38C8u;
}
