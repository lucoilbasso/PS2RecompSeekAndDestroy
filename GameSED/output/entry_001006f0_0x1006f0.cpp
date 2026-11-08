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

// Function: entry_001006f0
// Address: 0x1006f0 - 0x100728
void entry_001006f0_0x1006f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001006f0_0x1006f0");
#endif

    ctx->pc = 0x1006f0u;

label_1006f0:
    // 0x1006f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1006f4:
    // 0x1006f4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1006f8:
    // 0x1006f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1006f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1006fc:
    // 0x1006fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1006fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100700:
    // 0x100700: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100704:
    // 0x100704: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100708:
    if (ctx->pc == 0x100708u) {
        ctx->pc = 0x100708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100704u;
        // 0x100708: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10070Cu;
        goto label_10070c;
    }
    ctx->pc = 0x100704u;
    {
        const bool branch_taken_0x100704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100704u;
        // 0x100708: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100704) {
            ctx->pc = 0x100728u;
            return;
        }
    }
    ctx->pc = 0x10070Cu;
label_10070c:
    // 0x10070c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100710:
    // 0x100710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100714:
    // 0x100714: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100718:
    // 0x100718: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10071c:
    // 0x10071c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100720:
    // 0x100720: 0x60f809  jalr        $v1
label_100724:
    if (ctx->pc == 0x100724u) {
        ctx->pc = 0x100724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100720u;
        // 0x100724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100728u;
        goto label_fallthrough_0x100720;
    }
    ctx->pc = 0x100720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100728u);
        ctx->pc = 0x100724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100720u;
        // 0x100724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100720u, 0x100728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100720:
    ctx->pc = 0x100728u;
}
