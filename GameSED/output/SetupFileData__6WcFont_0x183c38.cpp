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

// Function: SetupFileData__6WcFont
// Address: 0x183c38 - 0x183cb8
void SetupFileData__6WcFont_0x183c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__6WcFont_0x183c38");
#endif

    switch (ctx->pc) {
        case 0x183cacu: goto label_183cac;
        default: break;
    }

    ctx->pc = 0x183c38u;

    // 0x183c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183c3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183c44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x183c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183c48: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x183c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x183c4c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183c50: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x183c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x183c54: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x183c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x183c58: 0x10660002  beq         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x183C58u;
    {
        const bool branch_taken_0x183c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x183C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C58u;
        // 0x183c5c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c58) {
            ctx->pc = 0x183C64u;
            goto label_183c64;
        }
    }
    ctx->pc = 0x183C60u;
    // 0x183c60: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x183c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_183c64:
    // 0x183c64: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x183c68: 0xaca60028  sw          $a2, 0x28($a1)
    ctx->pc = 0x183c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 6));
    // 0x183c6c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x183c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x183c70: 0x50660005  beql        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x183C70u;
    {
        const bool branch_taken_0x183c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x183c70) {
            ctx->pc = 0x183C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183C70u;
            // 0x183c74: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183C88u;
            goto label_183c88;
        }
    }
    ctx->pc = 0x183C78u;
    // 0x183c78: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183c80: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x183c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x183c84: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_183c88:
    // 0x183c88: 0xaca6002c  sw          $a2, 0x2C($a1)
    ctx->pc = 0x183c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 6));
    // 0x183c8c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x183c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x183c90: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x183C90u;
    {
        const bool branch_taken_0x183c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x183c90) {
            ctx->pc = 0x183CA4u;
            goto label_183ca4;
        }
    }
    ctx->pc = 0x183C98u;
    // 0x183c98: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183ca0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x183ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_183ca4:
    // 0x183ca4: 0xc060f2e  jal         func_183CB8
    ctx->pc = 0x183CA4u;
    SET_GPR_U32(ctx, 31, 0x183CACu);
    ctx->pc = 0x183CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183CB8u, 0x183CA4u, 0x183CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CACu;
label_183cac:
    // 0x183cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x183CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CB0u;
        // 0x183cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183CB8u;
}
