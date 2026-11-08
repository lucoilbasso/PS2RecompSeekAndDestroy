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

// Function: entry_0010d698
// Address: 0x10d698 - 0x10d6d0
void entry_0010d698_0x10d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d698_0x10d698");
#endif

    switch (ctx->pc) {
        case 0x10d6a8u: goto label_10d6a8;
        default: break;
    }

    ctx->pc = 0x10d698u;

    // 0x10d698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d69c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10d6a0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D6A0u;
    SET_GPR_U32(ctx, 31, 0x10D6A8u);
    ctx->pc = 0x10D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6A0u;
    // 0x10d6a4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D6A0u, 0x10D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6A8u;
label_10d6a8:
    // 0x10d6a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10d6ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10d6b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d6b8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D6B8u;
    {
        const bool branch_taken_0x10d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x10d6b8) {
            ctx->pc = 0x10D6D0u;
            return;
        }
    }
    ctx->pc = 0x10D6C0u;
    // 0x10d6c0: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x10d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x10d6c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d6c8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x10D6C8u;
    {
        const bool branch_taken_0x10d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6C8u;
        // 0x10d6cc: 0xae2301c0  sw          $v1, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6c8) {
            ctx->pc = 0x10D7CCu;
            return;
        }
    }
    ctx->pc = 0x10D6D0u;
}
