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

// Function: ApDebugPageUnPost__Fv
// Address: 0x16f960 - 0x16f994
void ApDebugPageUnPost__Fv_0x16f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPageUnPost__Fv_0x16f960");
#endif

    switch (ctx->pc) {
        case 0x16f960u: goto label_16f960;
        case 0x16f964u: goto label_16f964;
        case 0x16f968u: goto label_16f968;
        case 0x16f96cu: goto label_16f96c;
        case 0x16f970u: goto label_16f970;
        case 0x16f974u: goto label_16f974;
        case 0x16f978u: goto label_16f978;
        case 0x16f97cu: goto label_16f97c;
        case 0x16f980u: goto label_16f980;
        case 0x16f984u: goto label_16f984;
        case 0x16f988u: goto label_16f988;
        case 0x16f98cu: goto label_16f98c;
        case 0x16f990u: goto label_16f990;
        default: break;
    }

    ctx->pc = 0x16f960u;

label_16f960:
    // 0x16f960: 0x8f858b58  lw          $a1, -0x74A8($gp)
    ctx->pc = 0x16f960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
label_16f964:
    // 0x16f964: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16f968:
    // 0x16f968: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_16f96c:
    if (ctx->pc == 0x16F96Cu) {
        ctx->pc = 0x16F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F968u;
        // 0x16f96c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F970u;
        goto label_16f970;
    }
    ctx->pc = 0x16F968u;
    {
        const bool branch_taken_0x16f968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F968u;
        // 0x16f96c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f968) {
            ctx->pc = 0x16F988u;
            goto label_16f988;
        }
    }
    ctx->pc = 0x16F970u;
label_16f970:
    // 0x16f970: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x16f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16f974:
    // 0x16f974: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x16f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_16f978:
    // 0x16f978: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16f97c:
    // 0x16f97c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f980:
    // 0x16f980: 0x60f809  jalr        $v1
label_16f984:
    if (ctx->pc == 0x16F984u) {
        ctx->pc = 0x16F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F980u;
        // 0x16f984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F988u;
        goto label_16f988;
    }
    ctx->pc = 0x16F980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F988u);
        ctx->pc = 0x16F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F980u;
        // 0x16f984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F980u, 0x16F988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F988u;
label_16f988:
    // 0x16f988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f98c:
    // 0x16f98c: 0x3e00008  jr          $ra
label_16f990:
    if (ctx->pc == 0x16F990u) {
        ctx->pc = 0x16F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F98Cu;
        // 0x16f990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F994u;
        goto label_fallthrough_0x16f98c;
    }
    ctx->pc = 0x16F98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F98Cu;
        // 0x16f990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16f98c:
    ctx->pc = 0x16F994u;
}
