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

// Function: entry_0015a634
// Address: 0x15a634 - 0x15a680
void entry_0015a634_0x15a634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a634_0x15a634");
#endif

    ctx->pc = 0x15a634u;

label_15a634:
    // 0x15a634: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15a634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_15a638:
    // 0x15a638: 0x267100e0  addiu       $s1, $s3, 0xE0
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_15a63c:
    // 0x15a63c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15a640:
    // 0x15a640: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x15a640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15a644:
    // 0x15a644: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x15a644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_15a648:
    // 0x15a648: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x15a648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a64c:
    // 0x15a64c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_15a650:
    // 0x15a650: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_15a654:
    // 0x15a654: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_15a658:
    // 0x15a658: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x15a658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_15a65c:
    // 0x15a65c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a660:
    if (ctx->pc == 0x15A660u) {
        ctx->pc = 0x15A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A65Cu;
        // 0x15a660: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A664u;
        goto label_15a664;
    }
    ctx->pc = 0x15A65Cu;
    {
        const bool branch_taken_0x15a65c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A65Cu;
        // 0x15a660: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a65c) {
            ctx->pc = 0x15A680u;
            return;
        }
    }
    ctx->pc = 0x15A664u;
label_15a664:
    // 0x15a664: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a668:
    // 0x15a668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a66c:
    // 0x15a66c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a670:
    // 0x15a670: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a674:
    // 0x15a674: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a678:
    // 0x15a678: 0x60f809  jalr        $v1
label_15a67c:
    if (ctx->pc == 0x15A67Cu) {
        ctx->pc = 0x15A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A678u;
        // 0x15a67c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A680u;
        goto label_fallthrough_0x15a678;
    }
    ctx->pc = 0x15A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A680u);
        ctx->pc = 0x15A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A678u;
        // 0x15a67c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A678u, 0x15A680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a678:
    ctx->pc = 0x15A680u;
}
