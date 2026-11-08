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

// Function: entry_00107ed8
// Address: 0x107ed8 - 0x107ee8
void entry_00107ed8_0x107ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ed8_0x107ed8");
#endif

    ctx->pc = 0x107ed8u;

    // 0x107ed8: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x107edc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x107EDCu;
    {
        const bool branch_taken_0x107edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EDCu;
        // 0x107ee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107edc) {
            ctx->pc = 0x107F0Cu;
            return;
        }
    }
    ctx->pc = 0x107EE4u;
    // 0x107ee4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x107ee8u;
}
