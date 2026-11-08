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

// Function: entry_001c8e98
// Address: 0x1c8e98 - 0x1c8ee8
void entry_001c8e98_0x1c8e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e98_0x1c8e98");
#endif

    ctx->pc = 0x1c8e98u;

    // 0x1c8e98: 0x13200014  beqz        $t9, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8E98u;
    {
        const bool branch_taken_0x1c8e98 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E98u;
        // 0x1c8e9c: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e98) {
            ctx->pc = 0x1C8EECu;
            return;
        }
    }
    ctx->pc = 0x1C8EA0u;
    // 0x1c8ea0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c8ea4: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1c8ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c8ea8: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c8eac: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1c8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c8eb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8eb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8eb8: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1c8eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ebc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c8ebcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c8ec0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c8ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c8ec4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c8ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8ec8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c8ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c8ecc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8ed0: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c8ed4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8ed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8edc: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c8edcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c8ee0: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1c8ee0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1c8ee4: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1c8ee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    ctx->pc = 0x1c8ee8u;
}
