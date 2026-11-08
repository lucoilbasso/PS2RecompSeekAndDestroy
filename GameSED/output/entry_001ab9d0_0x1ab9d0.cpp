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

// Function: entry_001ab9d0
// Address: 0x1ab9d0 - 0x1ab9f0
void entry_001ab9d0_0x1ab9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab9d0_0x1ab9d0");
#endif

    ctx->pc = 0x1ab9d0u;

    // 0x1ab9d0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1ab9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ab9d4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1ab9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1ab9d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB9D8u;
    {
        const bool branch_taken_0x1ab9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D8u;
        // 0x1ab9dc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9d8) {
            ctx->pc = 0x1ABA0Cu;
            return;
        }
    }
    ctx->pc = 0x1AB9E0u;
    // 0x1ab9e0: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x1ab9e4: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x1ab9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x1ab9e8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x1ab9ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ab9f0u;
}
