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

// Function: entry_001c9878
// Address: 0x1c9878 - 0x1c98b0
void entry_001c9878_0x1c9878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9878_0x1c9878");
#endif

    ctx->pc = 0x1c9878u;

    // 0x1c9878: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C9878u;
    {
        const bool branch_taken_0x1c9878 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9878u;
        // 0x1c987c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9878) {
            ctx->pc = 0x1C9A34u;
            return;
        }
    }
    ctx->pc = 0x1C9880u;
    // 0x1c9880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c9880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9884: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c9884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9888: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c988c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c988cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c9890: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c9890u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c9894: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c9894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c9898: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c9898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c989c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c989cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c98a0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c98a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c98a4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1C98A4u;
    {
        const bool branch_taken_0x1c98a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98A4u;
        // 0x1c98a8: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98a4) {
            ctx->pc = 0x1C9A30u;
            return;
        }
    }
    ctx->pc = 0x1C98ACu;
    // 0x1c98ac: 0x0  nop
    ctx->pc = 0x1c98acu;
    // NOP
    ctx->pc = 0x1c98b0u;
}
