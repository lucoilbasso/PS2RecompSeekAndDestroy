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

// Function: entry_001ae0c0
// Address: 0x1ae0c0 - 0x1ae0e0
void entry_001ae0c0_0x1ae0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae0c0_0x1ae0c0");
#endif

    ctx->pc = 0x1ae0c0u;

    // 0x1ae0c0: 0x2c82009e  sltiu       $v0, $a0, 0x9E
    ctx->pc = 0x1ae0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)158) ? 1 : 0);
    // 0x1ae0c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE0C4u;
    {
        const bool branch_taken_0x1ae0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0c4) {
            ctx->pc = 0x1AE0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE0C4u;
            // 0x1ae0c8: 0x2482ffe1  addiu       $v0, $a0, -0x1F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967265));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE0E0u;
            return;
        }
    }
    ctx->pc = 0x1AE0CCu;
    // 0x1ae0cc: 0x2482ff83  addiu       $v0, $a0, -0x7D
    ctx->pc = 0x1ae0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967171));
    // 0x1ae0d0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1ae0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ae0d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae0d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE0D8u;
    {
        const bool branch_taken_0x1ae0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D8u;
        // 0x1ae0dc: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0d8) {
            ctx->pc = 0x1AE0E4u;
            return;
        }
    }
    ctx->pc = 0x1AE0E0u;
}
