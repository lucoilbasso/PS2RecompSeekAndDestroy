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

// Function: entry_0013cac0
// Address: 0x13cac0 - 0x13caf8
void entry_0013cac0_0x13cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cac0_0x13cac0");
#endif

    ctx->pc = 0x13cac0u;

label_13cac0:
    // 0x13cac0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13cac4:
    // 0x13cac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13cac8:
    // 0x13cac8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cacc:
    // 0x13cacc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13cad0:
    if (ctx->pc == 0x13CAD0u) {
        ctx->pc = 0x13CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CACCu;
        // 0x13cad0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAD4u;
        goto label_13cad4;
    }
    ctx->pc = 0x13CACCu;
    {
        const bool branch_taken_0x13cacc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CACCu;
        // 0x13cad0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cacc) {
            ctx->pc = 0x13CAF8u;
            return;
        }
    }
    ctx->pc = 0x13CAD4u;
label_13cad4:
    // 0x13cad4: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13cad8:
    // 0x13cad8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13cadc:
    if (ctx->pc == 0x13CADCu) {
        ctx->pc = 0x13CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD8u;
        // 0x13cadc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAE0u;
        goto label_13cae0;
    }
    ctx->pc = 0x13CAD8u;
    {
        const bool branch_taken_0x13cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD8u;
        // 0x13cadc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cad8) {
            ctx->pc = 0x13CAF8u;
            return;
        }
    }
    ctx->pc = 0x13CAE0u;
label_13cae0:
    // 0x13cae0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13cae4:
    // 0x13cae4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13cae8:
    // 0x13cae8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13caec:
    // 0x13caec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13caf0:
    // 0x13caf0: 0x60f809  jalr        $v1
label_13caf4:
    if (ctx->pc == 0x13CAF4u) {
        ctx->pc = 0x13CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAF0u;
        // 0x13caf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAF8u;
        goto label_fallthrough_0x13caf0;
    }
    ctx->pc = 0x13CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13CAF8u);
        ctx->pc = 0x13CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAF0u;
        // 0x13caf4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CAF0u, 0x13CAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13caf0:
    ctx->pc = 0x13CAF8u;
}
