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

// Function: ApDebugPagePost__FP8WcEntity
// Address: 0x16f918 - 0x16f95c
void ApDebugPagePost__FP8WcEntity_0x16f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPagePost__FP8WcEntity_0x16f918");
#endif

    switch (ctx->pc) {
        case 0x16f918u: goto label_16f918;
        case 0x16f91cu: goto label_16f91c;
        case 0x16f920u: goto label_16f920;
        case 0x16f924u: goto label_16f924;
        case 0x16f928u: goto label_16f928;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f930u: goto label_16f930;
        case 0x16f934u: goto label_16f934;
        case 0x16f938u: goto label_16f938;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f940u: goto label_16f940;
        case 0x16f944u: goto label_16f944;
        case 0x16f948u: goto label_16f948;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f950u: goto label_16f950;
        case 0x16f954u: goto label_16f954;
        case 0x16f958u: goto label_16f958;
        default: break;
    }

    ctx->pc = 0x16f918u;

label_16f918:
    // 0x16f918: 0x8f878b58  lw          $a3, -0x74A8($gp)
    ctx->pc = 0x16f918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
label_16f91c:
    // 0x16f91c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16f920:
    // 0x16f920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16f924:
    // 0x16f924: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_16f928:
    if (ctx->pc == 0x16F928u) {
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F92Cu;
        goto label_16f92c;
    }
    ctx->pc = 0x16F924u;
    {
        const bool branch_taken_0x16f924 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f924) {
            ctx->pc = 0x16F950u;
            goto label_16f950;
        }
    }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x16f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f930:
    // 0x16f930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f934:
    // 0x16f934: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16f938:
    // 0x16f938: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16f93c:
    // 0x16f93c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f940:
    // 0x16f940: 0x60f809  jalr        $v1
label_16f944:
    if (ctx->pc == 0x16F944u) {
        ctx->pc = 0x16F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F940u;
        // 0x16f944: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F948u;
        goto label_16f948;
    }
    ctx->pc = 0x16F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F948u);
        ctx->pc = 0x16F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F940u;
        // 0x16f944: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F940u, 0x16F948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F948u;
label_16f948:
    // 0x16f948: 0x8f828b58  lw          $v0, -0x74A8($gp)
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
label_16f94c:
    // 0x16f94c: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x16f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
label_16f950:
    // 0x16f950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f954:
    // 0x16f954: 0x3e00008  jr          $ra
label_16f958:
    if (ctx->pc == 0x16F958u) {
        ctx->pc = 0x16F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F954u;
        // 0x16f958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F95Cu;
        goto label_fallthrough_0x16f954;
    }
    ctx->pc = 0x16F954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F954u;
        // 0x16f958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16f954:
    ctx->pc = 0x16F95Cu;
}
