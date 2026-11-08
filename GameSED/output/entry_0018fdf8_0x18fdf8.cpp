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

// Function: entry_0018fdf8
// Address: 0x18fdf8 - 0x18fe10
void entry_0018fdf8_0x18fdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fdf8_0x18fdf8");
#endif

    ctx->pc = 0x18fdf8u;

    // 0x18fdf8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FDF8u;
    {
        const bool branch_taken_0x18fdf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDF8u;
        // 0x18fdfc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdf8) {
            ctx->pc = 0x18FE10u;
            return;
        }
    }
    ctx->pc = 0x18FE00u;
    // 0x18fe00: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x18fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x18fe04: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x18fe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x18fe08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FE08u;
    {
        const bool branch_taken_0x18fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE08u;
        // 0x18fe0c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe08) {
            ctx->pc = 0x18FE1Cu;
            return;
        }
    }
    ctx->pc = 0x18FE10u;
}
