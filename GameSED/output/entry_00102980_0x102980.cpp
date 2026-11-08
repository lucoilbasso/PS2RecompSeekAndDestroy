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

// Function: entry_00102980
// Address: 0x102980 - 0x1029c4
void entry_00102980_0x102980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102980_0x102980");
#endif

    switch (ctx->pc) {
        case 0x1029a0u: goto label_1029a0;
        case 0x1029bcu: goto label_1029bc;
        default: break;
    }

    ctx->pc = 0x102980u;

    // 0x102980: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x102980u;
    {
        const bool branch_taken_0x102980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102980) {
            ctx->pc = 0x102984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102980u;
            // 0x102984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029C8u;
            return;
        }
    }
    ctx->pc = 0x102988u;
    // 0x102988: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x102988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x10298c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x10298cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x102990: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102994: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x102994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102998: 0xc04171a  jal         func_105C68
    ctx->pc = 0x102998u;
    SET_GPR_U32(ctx, 31, 0x1029A0u);
    ctx->pc = 0x10299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102998u;
    // 0x10299c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x102998u, 0x1029A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029A0u;
label_1029a0:
    // 0x1029a0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x1029a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1029a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1029a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1029a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1029a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1029ac: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1029ACu;
    {
        const bool branch_taken_0x1029ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1029ac) {
            ctx->pc = 0x1029B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1029ACu;
            // 0x1029b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029C8u;
            return;
        }
    }
    ctx->pc = 0x1029B4u;
    // 0x1029b4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1029B4u;
    SET_GPR_U32(ctx, 31, 0x1029BCu);
    ctx->pc = 0x1029B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1029B4u;
    // 0x1029b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1029B4u, 0x1029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1029BCu;
label_1029bc:
    // 0x1029bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1029bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1029c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1029c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1029c4u;
}
