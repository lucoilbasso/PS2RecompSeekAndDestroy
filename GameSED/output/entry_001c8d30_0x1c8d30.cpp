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

// Function: entry_001c8d30
// Address: 0x1c8d30 - 0x1c8d68
void entry_001c8d30_0x1c8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8d30_0x1c8d30");
#endif

    ctx->pc = 0x1c8d30u;

    // 0x1c8d30: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C8D30u;
    {
        const bool branch_taken_0x1c8d30 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D30u;
        // 0x1c8d34: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d30) {
            ctx->pc = 0x1C8EECu;
            return;
        }
    }
    ctx->pc = 0x1C8D38u;
    // 0x1c8d38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8d3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8d40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8d44: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8d44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8d48: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8d48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8d4c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c8d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c8d50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8d54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8d58: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8d58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8d5c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1C8D5Cu;
    {
        const bool branch_taken_0x1c8d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D5Cu;
        // 0x1c8d60: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d5c) {
            ctx->pc = 0x1C8EE8u;
            return;
        }
    }
    ctx->pc = 0x1C8D64u;
    // 0x1c8d64: 0x0  nop
    ctx->pc = 0x1c8d64u;
    // NOP
    ctx->pc = 0x1c8d68u;
}
