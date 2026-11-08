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

// Function: entry_0010deb8
// Address: 0x10deb8 - 0x10dec8
void entry_0010deb8_0x10deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010deb8_0x10deb8");
#endif

    ctx->pc = 0x10deb8u;

    // 0x10deb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10debc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10DEBCu;
    {
        const bool branch_taken_0x10debc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEBCu;
        // 0x10dec0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10debc) {
            ctx->pc = 0x10DEECu;
            return;
        }
    }
    ctx->pc = 0x10DEC4u;
    // 0x10dec4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x10dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x10dec8u;
}
