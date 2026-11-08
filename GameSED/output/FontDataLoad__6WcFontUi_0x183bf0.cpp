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

// Function: FontDataLoad__6WcFontUi
// Address: 0x183bf0 - 0x183c34
void FontDataLoad__6WcFontUi_0x183bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontDataLoad__6WcFontUi_0x183bf0");
#endif

    switch (ctx->pc) {
        case 0x183c14u: goto label_183c14;
        case 0x183c1cu: goto label_183c1c;
        case 0x183c24u: goto label_183c24;
        default: break;
    }

    ctx->pc = 0x183bf0u;

    // 0x183bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183bf4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x183bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x183bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x183c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x183c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x183c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c0c: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x183C0Cu;
    SET_GPR_U32(ctx, 31, 0x183C14u);
    ctx->pc = 0x183C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C0Cu;
    // 0x183c10: 0x8c440170  lw          $a0, 0x170($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x183C0Cu, 0x183C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C14u;
label_183c14:
    // 0x183c14: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x183C14u;
    SET_GPR_U32(ctx, 31, 0x183C1Cu);
    ctx->pc = 0x183C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C14u;
    // 0x183c18: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x183C14u, 0x183C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C1Cu;
label_183c1c:
    // 0x183c1c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x183C1Cu;
    SET_GPR_U32(ctx, 31, 0x183C24u);
    ctx->pc = 0x183C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C1Cu;
    // 0x183c20: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x183C1Cu, 0x183C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C24u;
label_183c24:
    // 0x183c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183c28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x183C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C2Cu;
        // 0x183c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C34u;
}
