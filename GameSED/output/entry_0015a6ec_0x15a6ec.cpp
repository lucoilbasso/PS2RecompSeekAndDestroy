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

// Function: entry_0015a6ec
// Address: 0x15a6ec - 0x15a738
void entry_0015a6ec_0x15a6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a6ec_0x15a6ec");
#endif

    ctx->pc = 0x15a6ecu;

label_15a6ec:
    // 0x15a6ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_15a6f0:
    // 0x15a6f0: 0x26700120  addiu       $s0, $s3, 0x120
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
label_15a6f4:
    // 0x15a6f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_15a6f8:
    // 0x15a6f8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x15a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_15a6fc:
    // 0x15a6fc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x15a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_15a700:
    // 0x15a700: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a704:
    // 0x15a704: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15a704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_15a708:
    // 0x15a708: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15a708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_15a70c:
    // 0x15a70c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x15a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_15a710:
    // 0x15a710: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x15a710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_15a714:
    // 0x15a714: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15a718:
    if (ctx->pc == 0x15A718u) {
        ctx->pc = 0x15A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A714u;
        // 0x15a718: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A71Cu;
        goto label_15a71c;
    }
    ctx->pc = 0x15A714u;
    {
        const bool branch_taken_0x15a714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A714u;
        // 0x15a718: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a714) {
            ctx->pc = 0x15A738u;
            return;
        }
    }
    ctx->pc = 0x15A71Cu;
label_15a71c:
    // 0x15a71c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a720:
    // 0x15a720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a724:
    // 0x15a724: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a728:
    // 0x15a728: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a72c:
    // 0x15a72c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a730:
    // 0x15a730: 0x60f809  jalr        $v1
label_15a734:
    if (ctx->pc == 0x15A734u) {
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A738u;
        goto label_fallthrough_0x15a730;
    }
    ctx->pc = 0x15A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A738u);
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A730u, 0x15A738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a730:
    ctx->pc = 0x15A738u;
}
