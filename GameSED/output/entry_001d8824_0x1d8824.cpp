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

// Function: entry_001d8824
// Address: 0x1d8824 - 0x1d885c
void entry_001d8824_0x1d8824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8824_0x1d8824");
#endif

    switch (ctx->pc) {
        case 0x1d8844u: goto label_1d8844;
        default: break;
    }

    ctx->pc = 0x1d8824u;

label_1d8824:
    // 0x1d8824: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d8828:
    // 0x1d8828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d882c:
    // 0x1d882c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d882cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8830:
    // 0x1d8830: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d8830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d8834:
    // 0x1d8834: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8838:
    // 0x1d8838: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d883c:
    // 0x1d883c: 0x60f809  jalr        $v1
label_1d8840:
    if (ctx->pc == 0x1D8840u) {
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8844u;
        goto label_1d8844;
    }
    ctx->pc = 0x1D883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8844u);
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D883Cu, 0x1D8844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8848:
    // 0x1d8848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d884c:
    // 0x1d884c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d884cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8850:
    // 0x1d8850: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d8854:
    // 0x1d8854: 0x3e00008  jr          $ra
label_1d8858:
    if (ctx->pc == 0x1D8858u) {
        ctx->pc = 0x1D8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8854u;
        // 0x1d8858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D885Cu;
        goto label_fallthrough_0x1d8854;
    }
    ctx->pc = 0x1D8854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8854u;
        // 0x1d8858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8854:
    ctx->pc = 0x1D885Cu;
}
