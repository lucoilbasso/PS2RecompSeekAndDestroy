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

// Function: entry_0017e0a0
// Address: 0x17e0a0 - 0x17e0d0
void entry_0017e0a0_0x17e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e0a0_0x17e0a0");
#endif

    ctx->pc = 0x17e0a0u;

    // 0x17e0a0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x17E0A0u;
    {
        const bool branch_taken_0x17e0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0A0u;
        // 0x17e0a4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0a0) {
            ctx->pc = 0x17E140u;
            return;
        }
    }
    ctx->pc = 0x17E0A8u;
    // 0x17e0a8: 0x8d630020  lw          $v1, 0x20($t3)
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x17e0ac: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17E0ACu;
    {
        const bool branch_taken_0x17e0ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ACu;
        // 0x17e0b0: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0ac) {
            ctx->pc = 0x17E140u;
            return;
        }
    }
    ctx->pc = 0x17E0B4u;
    // 0x17e0b4: 0x8d620028  lw          $v0, 0x28($t3)
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x17e0b8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x17e0b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0bc: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x17e0bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e0c0: 0xf7bbc  dsll32      $t7, $t7, 14
    ctx->pc = 0x17e0c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 14));
    // 0x17e0c4: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x17e0c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e0c8: 0xe74f8  dsll        $t6, $t6, 19
    ctx->pc = 0x17e0c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 19);
    // 0x17e0cc: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x17e0d0u;
}
