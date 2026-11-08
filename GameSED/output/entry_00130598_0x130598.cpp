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

// Function: entry_00130598
// Address: 0x130598 - 0x1305b8
void entry_00130598_0x130598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130598_0x130598");
#endif

    ctx->pc = 0x130598u;

    // 0x130598: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x130598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x13059c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13059Cu;
    {
        const bool branch_taken_0x13059c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1305A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13059Cu;
        // 0x1305a0: 0xac860134  sw          $a2, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13059c) {
            ctx->pc = 0x1305B8u;
            return;
        }
    }
    ctx->pc = 0x1305A4u;
    // 0x1305a4: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x1305a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1305A8u;
    {
        const bool branch_taken_0x1305a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305a8) {
            ctx->pc = 0x1305ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1305A8u;
            // 0x1305ac: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305BCu;
            return;
        }
    }
    ctx->pc = 0x1305B0u;
    // 0x1305b0: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1305b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1305b4: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x1305b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
    ctx->pc = 0x1305b8u;
}
