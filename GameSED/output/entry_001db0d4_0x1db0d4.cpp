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

// Function: entry_001db0d4
// Address: 0x1db0d4 - 0x1db120
void entry_001db0d4_0x1db0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db0d4_0x1db0d4");
#endif

    switch (ctx->pc) {
        case 0x1db110u: goto label_1db110;
        default: break;
    }

    ctx->pc = 0x1db0d4u;

label_1db0d4:
    // 0x1db0d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1db0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1db0d8:
    // 0x1db0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db0dc:
    // 0x1db0dc: 0x8e0401b4  lw          $a0, 0x1B4($s0)
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_1db0e0:
    // 0x1db0e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db0e4:
    // 0x1db0e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1db0e8:
    // 0x1db0e8: 0x8c421108  lw          $v0, 0x1108($v0)
    ctx->pc = 0x1db0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
label_1db0ec:
    // 0x1db0ec: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1db0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1db0f0:
    // 0x1db0f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1db0f4:
    // 0x1db0f4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1db0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db0f8:
    // 0x1db0f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1db0fc:
    // 0x1db0fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1db100:
    // 0x1db100: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1db100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1db104:
    // 0x1db104: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db108:
    // 0x1db108: 0x60f809  jalr        $v1
label_1db10c:
    if (ctx->pc == 0x1DB10Cu) {
        ctx->pc = 0x1DB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB108u;
        // 0x1db10c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB110u;
        goto label_1db110;
    }
    ctx->pc = 0x1DB108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB110u);
        ctx->pc = 0x1DB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB108u;
        // 0x1db10c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB108u, 0x1DB110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB110u;
label_1db110:
    // 0x1db110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db114:
    // 0x1db114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1db118:
    // 0x1db118: 0x3e00008  jr          $ra
label_1db11c:
    if (ctx->pc == 0x1DB11Cu) {
        ctx->pc = 0x1DB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB118u;
        // 0x1db11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB120u;
        goto label_fallthrough_0x1db118;
    }
    ctx->pc = 0x1DB118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB118u;
        // 0x1db11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db118:
    ctx->pc = 0x1DB120u;
}
