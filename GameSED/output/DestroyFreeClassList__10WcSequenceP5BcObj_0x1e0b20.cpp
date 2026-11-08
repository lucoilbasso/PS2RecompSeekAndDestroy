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

// Function: DestroyFreeClassList__10WcSequenceP5BcObj
// Address: 0x1e0b20 - 0x1e0b64
void DestroyFreeClassList__10WcSequenceP5BcObj_0x1e0b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DestroyFreeClassList__10WcSequenceP5BcObj_0x1e0b20");
#endif

    switch (ctx->pc) {
        case 0x1e0b20u: goto label_1e0b20;
        case 0x1e0b24u: goto label_1e0b24;
        case 0x1e0b28u: goto label_1e0b28;
        case 0x1e0b2cu: goto label_1e0b2c;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b34u: goto label_1e0b34;
        case 0x1e0b38u: goto label_1e0b38;
        case 0x1e0b3cu: goto label_1e0b3c;
        case 0x1e0b40u: goto label_1e0b40;
        case 0x1e0b44u: goto label_1e0b44;
        case 0x1e0b48u: goto label_1e0b48;
        case 0x1e0b4cu: goto label_1e0b4c;
        case 0x1e0b50u: goto label_1e0b50;
        case 0x1e0b54u: goto label_1e0b54;
        case 0x1e0b58u: goto label_1e0b58;
        case 0x1e0b5cu: goto label_1e0b5c;
        case 0x1e0b60u: goto label_1e0b60;
        default: break;
    }

    ctx->pc = 0x1e0b20u;

label_1e0b20:
    // 0x1e0b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e0b24:
    // 0x1e0b24: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
label_1e0b28:
    // 0x1e0b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e0b2c:
    // 0x1e0b2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e0b30:
    // 0x1e0b30: 0xc068436  jal         func_1A10D8
label_1e0b34:
    if (ctx->pc == 0x1E0B34u) {
        ctx->pc = 0x1E0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B30u;
        // 0x1e0b34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B38u;
        goto label_1e0b38;
    }
    ctx->pc = 0x1E0B30u;
    SET_GPR_U32(ctx, 31, 0x1E0B38u);
    ctx->pc = 0x1E0B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B30u;
    // 0x1e0b34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1E0B30u, 0x1E0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B38u;
label_1e0b38:
    // 0x1e0b38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0b3c:
    // 0x1e0b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b40:
    // 0x1e0b40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e0b44:
    // 0x1e0b44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0b48:
    // 0x1e0b48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e0b4c:
    // 0x1e0b4c: 0x60f809  jalr        $v1
label_1e0b50:
    if (ctx->pc == 0x1E0B50u) {
        ctx->pc = 0x1E0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B4Cu;
        // 0x1e0b50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B54u;
        goto label_1e0b54;
    }
    ctx->pc = 0x1E0B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0B54u);
        ctx->pc = 0x1E0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B4Cu;
        // 0x1e0b50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B4Cu, 0x1E0B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0B54u;
label_1e0b54:
    // 0x1e0b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0b58:
    // 0x1e0b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0b5c:
    // 0x1e0b5c: 0x3e00008  jr          $ra
label_1e0b60:
    if (ctx->pc == 0x1E0B60u) {
        ctx->pc = 0x1E0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B5Cu;
        // 0x1e0b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B64u;
        goto label_fallthrough_0x1e0b5c;
    }
    ctx->pc = 0x1E0B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B5Cu;
        // 0x1e0b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0b5c:
    ctx->pc = 0x1E0B64u;
}
