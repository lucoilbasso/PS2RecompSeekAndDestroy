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

// Function: entry_00100ac8
// Address: 0x100ac8 - 0x100b00
void entry_00100ac8_0x100ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ac8_0x100ac8");
#endif

    ctx->pc = 0x100ac8u;

label_100ac8:
    // 0x100ac8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_100acc:
    // 0x100acc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_100ad0:
    // 0x100ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100ad4:
    // 0x100ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100ad8:
    // 0x100ad8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100adc:
    // 0x100adc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100ae0:
    if (ctx->pc == 0x100AE0u) {
        ctx->pc = 0x100AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ADCu;
        // 0x100ae0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AE4u;
        goto label_100ae4;
    }
    ctx->pc = 0x100ADCu;
    {
        const bool branch_taken_0x100adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ADCu;
        // 0x100ae0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100adc) {
            ctx->pc = 0x100B00u;
            return;
        }
    }
    ctx->pc = 0x100AE4u;
label_100ae4:
    // 0x100ae4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100ae8:
    // 0x100ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100aec:
    // 0x100aec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100af0:
    // 0x100af0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100af4:
    // 0x100af4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100af8:
    // 0x100af8: 0x60f809  jalr        $v1
label_100afc:
    if (ctx->pc == 0x100AFCu) {
        ctx->pc = 0x100AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AF8u;
        // 0x100afc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B00u;
        goto label_fallthrough_0x100af8;
    }
    ctx->pc = 0x100AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100B00u);
        ctx->pc = 0x100AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AF8u;
        // 0x100afc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AF8u, 0x100B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100af8:
    ctx->pc = 0x100B00u;
}
