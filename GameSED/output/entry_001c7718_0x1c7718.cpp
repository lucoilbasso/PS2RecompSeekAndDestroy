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

// Function: entry_001c7718
// Address: 0x1c7718 - 0x1c7748
void entry_001c7718_0x1c7718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7718_0x1c7718");
#endif

    ctx->pc = 0x1c7718u;

    // 0x1c7718: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c771c: 0x4a00020  bltz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C771Cu;
    {
        const bool branch_taken_0x1c771c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1C7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C771Cu;
        // 0x1c7720: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c771c) {
            ctx->pc = 0x1C77A0u;
            return;
        }
    }
    ctx->pc = 0x1C7724u;
    // 0x1c7724: 0x2d29823  subu        $s3, $s6, $s2
    ctx->pc = 0x1c7724u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c7728: 0x660001e  bltz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C7728u;
    {
        const bool branch_taken_0x1c7728 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1C772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7728u;
        // 0x1c772c: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7728) {
            ctx->pc = 0x1C77A4u;
            return;
        }
    }
    ctx->pc = 0x1C7730u;
    // 0x1c7730: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c7730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7734: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x1c7734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x1c7738: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1c7738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c773c: 0x2511bad0  addiu       $s1, $t0, -0x4530
    ctx->pc = 0x1c773cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949584));
    // 0x1c7740: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7744: 0x0  nop
    ctx->pc = 0x1c7744u;
    // NOP
    ctx->pc = 0x1c7748u;
}
