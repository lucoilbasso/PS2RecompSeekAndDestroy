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

// Function: entry_0011d1a4
// Address: 0x11d1a4 - 0x11d1e8
void entry_0011d1a4_0x11d1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d1a4_0x11d1a4");
#endif

    switch (ctx->pc) {
        case 0x11d1b8u: goto label_11d1b8;
        case 0x11d1e4u: goto label_11d1e4;
        default: break;
    }

    ctx->pc = 0x11d1a4u;

    // 0x11d1a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d1ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x11d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11d1b0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11D1B0u;
    SET_GPR_U32(ctx, 31, 0x11D1B8u);
    ctx->pc = 0x11D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1B0u;
    // 0x11d1b4: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11D1B0u, 0x11D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1B8u;
label_11d1b8:
    // 0x11d1b8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x11d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11d1bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11d1c0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x11d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11d1c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x11d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11d1c8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x11d1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11d1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d4: 0x10e30004  beq         $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D1D4u;
    {
        const bool branch_taken_0x11d1d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1D4u;
        // 0x11d1d8: 0xc28821  addu        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d4) {
            ctx->pc = 0x11D1E8u;
            return;
        }
    }
    ctx->pc = 0x11D1DCu;
    // 0x11d1dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11D1DCu;
    SET_GPR_U32(ctx, 31, 0x11D1E4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11D1DCu, 0x11D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1E4u;
label_11d1e4:
    // 0x11d1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11d1e8u;
}
