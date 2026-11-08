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

// Function: entry_001abd98
// Address: 0x1abd98 - 0x1abdc0
void entry_001abd98_0x1abd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abd98_0x1abd98");
#endif

    ctx->pc = 0x1abd98u;

    // 0x1abd98: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1abd98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1abd9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1abd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1abda0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abda4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1abda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1abda8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abdac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1abdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1abdb0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABDB0u;
    {
        const bool branch_taken_0x1abdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1ABDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDB0u;
        // 0x1abdb4: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdb0) {
            ctx->pc = 0x1ABDC0u;
            return;
        }
    }
    ctx->pc = 0x1ABDB8u;
    // 0x1abdb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABDB8u;
    {
        const bool branch_taken_0x1abdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDB8u;
        // 0x1abdbc: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdb8) {
            ctx->pc = 0x1ABDC4u;
            return;
        }
    }
    ctx->pc = 0x1ABDC0u;
}
