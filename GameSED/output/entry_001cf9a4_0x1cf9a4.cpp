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

// Function: entry_001cf9a4
// Address: 0x1cf9a4 - 0x1cf9d8
void entry_001cf9a4_0x1cf9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf9a4_0x1cf9a4");
#endif

    ctx->pc = 0x1cf9a4u;

    // 0x1cf9a4: 0x52050011  beql        $s0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF9A4u;
    {
        const bool branch_taken_0x1cf9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x1cf9a4) {
            ctx->pc = 0x1CF9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF9A4u;
            // 0x1cf9a8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF9ECu;
            return;
        }
    }
    ctx->pc = 0x1CF9ACu;
    // 0x1cf9ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf9b0: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x1cf9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1cf9b4: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1cf9b8: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1cf9bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cf9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cf9c0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1cf9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cf9c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cf9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cf9c8: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x1cf9c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cf9cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF9CCu;
    {
        const bool branch_taken_0x1cf9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9CCu;
        // 0x1cf9d0: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9cc) {
            ctx->pc = 0x1CF9D8u;
            return;
        }
    }
    ctx->pc = 0x1CF9D4u;
    // 0x1cf9d4: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x1cf9d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
    ctx->pc = 0x1cf9d8u;
}
