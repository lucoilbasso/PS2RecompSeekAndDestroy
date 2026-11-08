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

// Function: entry_0015a3ac
// Address: 0x15a3ac - 0x15a3d0
void entry_0015a3ac_0x15a3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a3ac_0x15a3ac");
#endif

    ctx->pc = 0x15a3acu;

label_15a3ac:
    // 0x15a3ac: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a3b0:
    // 0x15a3b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a3b4:
    if (ctx->pc == 0x15A3B4u) {
        ctx->pc = 0x15A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3B0u;
        // 0x15a3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3B8u;
        goto label_15a3b8;
    }
    ctx->pc = 0x15A3B0u;
    {
        const bool branch_taken_0x15a3b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3B0u;
        // 0x15a3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3b0) {
            ctx->pc = 0x15A3D0u;
            return;
        }
    }
    ctx->pc = 0x15A3B8u;
label_15a3b8:
    // 0x15a3b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a3bc:
    // 0x15a3bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a3c0:
    // 0x15a3c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a3c4:
    // 0x15a3c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a3c8:
    // 0x15a3c8: 0x60f809  jalr        $v1
label_15a3cc:
    if (ctx->pc == 0x15A3CCu) {
        ctx->pc = 0x15A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3C8u;
        // 0x15a3cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3D0u;
        goto label_fallthrough_0x15a3c8;
    }
    ctx->pc = 0x15A3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A3D0u);
        ctx->pc = 0x15A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3C8u;
        // 0x15a3cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A3C8u, 0x15A3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a3c8:
    ctx->pc = 0x15A3D0u;
}
