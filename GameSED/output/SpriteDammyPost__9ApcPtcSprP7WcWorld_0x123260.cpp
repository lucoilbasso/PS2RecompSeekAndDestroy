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

// Function: SpriteDammyPost__9ApcPtcSprP7WcWorld
// Address: 0x123260 - 0x123294
void SpriteDammyPost__9ApcPtcSprP7WcWorld_0x123260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteDammyPost__9ApcPtcSprP7WcWorld_0x123260");
#endif

    switch (ctx->pc) {
        case 0x123260u: goto label_123260;
        case 0x123264u: goto label_123264;
        case 0x123268u: goto label_123268;
        case 0x12326cu: goto label_12326c;
        case 0x123270u: goto label_123270;
        case 0x123274u: goto label_123274;
        case 0x123278u: goto label_123278;
        case 0x12327cu: goto label_12327c;
        case 0x123280u: goto label_123280;
        case 0x123284u: goto label_123284;
        case 0x123288u: goto label_123288;
        case 0x12328cu: goto label_12328c;
        case 0x123290u: goto label_123290;
        default: break;
    }

    ctx->pc = 0x123260u;

label_123260:
    // 0x123260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_123264:
    // 0x123264: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x123264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123268:
    // 0x123268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12326c:
    // 0x12326c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123270:
    // 0x123270: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x123270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_123274:
    // 0x123274: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x123274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_123278:
    // 0x123278: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x123278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12327c:
    // 0x12327c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_123280:
    // 0x123280: 0x60f809  jalr        $v1
label_123284:
    if (ctx->pc == 0x123284u) {
        ctx->pc = 0x123284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123280u;
        // 0x123284: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123288u;
        goto label_123288;
    }
    ctx->pc = 0x123280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123288u);
        ctx->pc = 0x123284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123280u;
        // 0x123284: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123280u, 0x123288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123288u;
label_123288:
    // 0x123288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12328c:
    // 0x12328c: 0x3e00008  jr          $ra
label_123290:
    if (ctx->pc == 0x123290u) {
        ctx->pc = 0x123290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12328Cu;
        // 0x123290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123294u;
        goto label_fallthrough_0x12328c;
    }
    ctx->pc = 0x12328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12328Cu;
        // 0x123290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12328c:
    ctx->pc = 0x123294u;
}
