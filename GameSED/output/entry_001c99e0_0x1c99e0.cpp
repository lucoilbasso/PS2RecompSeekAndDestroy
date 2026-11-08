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

// Function: entry_001c99e0
// Address: 0x1c99e0 - 0x1c9a30
void entry_001c99e0_0x1c99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c99e0_0x1c99e0");
#endif

    ctx->pc = 0x1c99e0u;

    // 0x1c99e0: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C99E0u;
    {
        const bool branch_taken_0x1c99e0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99E0u;
        // 0x1c99e4: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99e0) {
            ctx->pc = 0x1C9A34u;
            return;
        }
    }
    ctx->pc = 0x1C99E8u;
    // 0x1c99e8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c99ec: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1c99ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c99f0: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c99f4: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1c99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c99f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c99fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c99fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9a00: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9a04: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c9a04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c9a08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c9a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c9a0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c9a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c9a10: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c9a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c9a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9a18: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1c9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9a1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c9a20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c9a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9a24: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c9a24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c9a28: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1c9a28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1c9a2c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1c9a2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    ctx->pc = 0x1c9a30u;
}
