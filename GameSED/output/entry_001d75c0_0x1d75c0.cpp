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

// Function: entry_001d75c0
// Address: 0x1d75c0 - 0x1d75f8
void entry_001d75c0_0x1d75c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d75c0_0x1d75c0");
#endif

    ctx->pc = 0x1d75c0u;

label_1d75c0:
    // 0x1d75c0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d75c4:
    // 0x1d75c4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d75c8:
    // 0x1d75c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d75c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d75cc:
    // 0x1d75cc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d75d0:
    // 0x1d75d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d75d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d75d4:
    // 0x1d75d4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d75d8:
    if (ctx->pc == 0x1D75D8u) {
        ctx->pc = 0x1D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D4u;
        // 0x1d75d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75DCu;
        goto label_1d75dc;
    }
    ctx->pc = 0x1D75D4u;
    {
        const bool branch_taken_0x1d75d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D4u;
        // 0x1d75d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75d4) {
            ctx->pc = 0x1D75F8u;
            return;
        }
    }
    ctx->pc = 0x1D75DCu;
label_1d75dc:
    // 0x1d75dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d75e0:
    // 0x1d75e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75e4:
    // 0x1d75e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d75e8:
    // 0x1d75e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d75e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d75ec:
    // 0x1d75ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d75f0:
    // 0x1d75f0: 0x60f809  jalr        $v1
label_1d75f4:
    if (ctx->pc == 0x1D75F4u) {
        ctx->pc = 0x1D75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75F0u;
        // 0x1d75f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75F8u;
        goto label_fallthrough_0x1d75f0;
    }
    ctx->pc = 0x1D75F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D75F8u);
        ctx->pc = 0x1D75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75F0u;
        // 0x1d75f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D75F0u, 0x1D75F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d75f0:
    ctx->pc = 0x1D75F8u;
}
