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

// Function: entry_001abaac
// Address: 0x1abaac - 0x1abac8
void entry_001abaac_0x1abaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abaac_0x1abaac");
#endif

    ctx->pc = 0x1abaacu;

    // 0x1abaac: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ABAACu;
    {
        const bool branch_taken_0x1abaac = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1ABAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAACu;
        // 0x1abab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaac) {
            ctx->pc = 0x1ABB18u;
            return;
        }
    }
    ctx->pc = 0x1ABAB4u;
    // 0x1abab4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1abab4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1abab8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1abab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1ababc: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x1ababcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x1abac0: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x1abac0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
    // 0x1abac4: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x1abac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
    ctx->pc = 0x1abac8u;
}
