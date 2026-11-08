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

// Function: entry_001d5378
// Address: 0x1d5378 - 0x1d53a0
void entry_001d5378_0x1d5378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5378_0x1d5378");
#endif

    switch (ctx->pc) {
        case 0x1d5390u: goto label_1d5390;
        default: break;
    }

    ctx->pc = 0x1d5378u;

    // 0x1d5378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d537c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1d5380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5384: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5388: 0xc075964  jal         func_1D6590
    ctx->pc = 0x1D5388u;
    SET_GPR_U32(ctx, 31, 0x1D5390u);
    ctx->pc = 0x1D538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5388u;
    // 0x1d538c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6590u, 0x1D5388u, 0x1D5390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5390u;
label_1d5390:
    // 0x1d5390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5394: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5394u;
    {
        const bool branch_taken_0x1d5394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5394) {
            ctx->pc = 0x1D5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5394u;
            // 0x1d5398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53B4u;
            return;
        }
    }
    ctx->pc = 0x1D539Cu;
    // 0x1d539c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x1d539cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    ctx->pc = 0x1d53a0u;
}
