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

// Function: entry_001a3660
// Address: 0x1a3660 - 0x1a3690
void entry_001a3660_0x1a3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3660_0x1a3660");
#endif

    ctx->pc = 0x1a3660u;

label_1a3660:
    // 0x1a3660: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1a3660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a3664: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1a3664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a3668: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a366c: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x1a3670: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x1a3674: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a3678: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a367c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3680: 0x441fff7  bgez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A3680u;
    {
        const bool branch_taken_0x1a3680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3680u;
        // 0x1a3684: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3680) {
            ctx->pc = 0x1A3660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3660;
        }
    }
    ctx->pc = 0x1A3688u;
    // 0x1a3688: 0xa505000a  sh          $a1, 0xA($t0)
    ctx->pc = 0x1a3688u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a368c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a3690u;
}
