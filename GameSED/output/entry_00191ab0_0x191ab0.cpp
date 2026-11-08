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

// Function: entry_00191ab0
// Address: 0x191ab0 - 0x191b04
void entry_00191ab0_0x191ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191ab0_0x191ab0");
#endif

    ctx->pc = 0x191ab0u;

label_191ab0:
    // 0x191ab0: 0x246301d0  addiu       $v1, $v1, 0x1D0
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
label_191ab4:
    // 0x191ab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191ab8:
    // 0x191ab8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x191ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_191abc:
    // 0x191abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_191ac0:
    // 0x191ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191ac4:
    // 0x191ac4: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x191ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
label_191ac8:
    // 0x191ac8: 0x8cc201dc  lw          $v0, 0x1DC($a2)
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 476)));
label_191acc:
    // 0x191acc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x191accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_191ad0:
    // 0x191ad0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_191ad4:
    if (ctx->pc == 0x191AD4u) {
        ctx->pc = 0x191AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AD0u;
        // 0x191ad4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AD8u;
        goto label_191ad8;
    }
    ctx->pc = 0x191AD0u;
    {
        const bool branch_taken_0x191ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AD0u;
        // 0x191ad4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ad0) {
            ctx->pc = 0x191B04u;
            return;
        }
    }
    ctx->pc = 0x191AD8u;
label_191ad8:
    // 0x191ad8: 0x8cc201d0  lw          $v0, 0x1D0($a2)
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 464)));
label_191adc:
    // 0x191adc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x191adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_191ae0:
    // 0x191ae0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_191ae4:
    if (ctx->pc == 0x191AE4u) {
        ctx->pc = 0x191AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AE0u;
        // 0x191ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AE8u;
        goto label_191ae8;
    }
    ctx->pc = 0x191AE0u;
    {
        const bool branch_taken_0x191ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AE0u;
        // 0x191ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ae0) {
            ctx->pc = 0x191B08u;
            return;
        }
    }
    ctx->pc = 0x191AE8u;
label_191ae8:
    // 0x191ae8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x191ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_191aec:
    // 0x191aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191af0:
    // 0x191af0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_191af4:
    // 0x191af4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x191af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_191af8:
    // 0x191af8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x191af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_191afc:
    // 0x191afc: 0x60f809  jalr        $v1
label_191b00:
    if (ctx->pc == 0x191B00u) {
        ctx->pc = 0x191B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AFCu;
        // 0x191b00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B04u;
        goto label_fallthrough_0x191afc;
    }
    ctx->pc = 0x191AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x191B04u);
        ctx->pc = 0x191B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AFCu;
        // 0x191b00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191AFCu, 0x191B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x191afc:
    ctx->pc = 0x191B04u;
}
