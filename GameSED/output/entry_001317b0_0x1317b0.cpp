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

// Function: entry_001317b0
// Address: 0x1317b0 - 0x1317d4
void entry_001317b0_0x1317b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001317b0_0x1317b0");
#endif

    ctx->pc = 0x1317b0u;

label_1317b0:
    // 0x1317b0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1317b4:
    if (ctx->pc == 0x1317B4u) {
        ctx->pc = 0x1317B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B0u;
        // 0x1317b4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317B8u;
        goto label_1317b8;
    }
    ctx->pc = 0x1317B0u;
    {
        const bool branch_taken_0x1317b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B0u;
        // 0x1317b4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317b0) {
            ctx->pc = 0x1317D4u;
            return;
        }
    }
    ctx->pc = 0x1317B8u;
label_1317b8:
    // 0x1317b8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1317b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1317bc:
    // 0x1317bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1317bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1317c0:
    // 0x1317c0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1317c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1317c4:
    // 0x1317c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1317c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1317c8:
    // 0x1317c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1317c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1317cc:
    // 0x1317cc: 0x60f809  jalr        $v1
label_1317d0:
    if (ctx->pc == 0x1317D0u) {
        ctx->pc = 0x1317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317CCu;
        // 0x1317d0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317D4u;
        goto label_fallthrough_0x1317cc;
    }
    ctx->pc = 0x1317CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1317D4u);
        ctx->pc = 0x1317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317CCu;
        // 0x1317d0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1317CCu, 0x1317D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1317cc:
    ctx->pc = 0x1317D4u;
}
