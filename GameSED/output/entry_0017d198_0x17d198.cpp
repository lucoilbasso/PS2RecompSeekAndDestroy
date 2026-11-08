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

// Function: entry_0017d198
// Address: 0x17d198 - 0x17d1c8
void entry_0017d198_0x17d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d198_0x17d198");
#endif

    switch (ctx->pc) {
        case 0x17d1bcu: goto label_17d1bc;
        default: break;
    }

    ctx->pc = 0x17d198u;

    // 0x17d198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d19c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1a0: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x17d1a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d1a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D1A8u;
    {
        const bool branch_taken_0x17d1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1A8u;
        // 0x17d1ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1a8) {
            ctx->pc = 0x17D1C8u;
            return;
        }
    }
    ctx->pc = 0x17D1B0u;
    // 0x17d1b0: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x17d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x17d1b4: 0xc068156  jal         func_1A0558
    ctx->pc = 0x17D1B4u;
    SET_GPR_U32(ctx, 31, 0x17D1BCu);
    ctx->pc = 0x17D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1B4u;
    // 0x17d1b8: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0558u, 0x17D1B4u, 0x17D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1BCu;
label_17d1bc:
    // 0x17d1bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17D1BCu;
    {
        const bool branch_taken_0x17d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1BCu;
        // 0x17d1c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1bc) {
            ctx->pc = 0x17D1DCu;
            return;
        }
    }
    ctx->pc = 0x17D1C4u;
    // 0x17d1c4: 0x0  nop
    ctx->pc = 0x17d1c4u;
    // NOP
    ctx->pc = 0x17d1c8u;
}
