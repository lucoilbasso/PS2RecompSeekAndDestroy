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

// Function: entry_00198a90
// Address: 0x198a90 - 0x198af0
void entry_00198a90_0x198a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a90_0x198a90");
#endif

    switch (ctx->pc) {
        case 0x198a98u: goto label_198a98;
        case 0x198aa0u: goto label_198aa0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198adcu: goto label_198adc;
        case 0x198ae4u: goto label_198ae4;
        default: break;
    }

    ctx->pc = 0x198a90u;

    // 0x198a90: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198A90u;
    SET_GPR_U32(ctx, 31, 0x198A98u);
    ctx->pc = 0x198A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A90u;
    // 0x198a94: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198A90u, 0x198A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A98u;
label_198a98:
    // 0x198a98: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198A98u;
    SET_GPR_U32(ctx, 31, 0x198AA0u);
    ctx->pc = 0x198A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A98u;
    // 0x198a9c: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198A98u, 0x198AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AA0u;
label_198aa0:
    // 0x198aa0: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x198aa4: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x198AA4u;
    {
        const bool branch_taken_0x198aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198aa4) {
            ctx->pc = 0x198AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198AA4u;
            // 0x198aa8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198AF0u;
            return;
        }
    }
    ctx->pc = 0x198AACu;
    // 0x198aac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198AACu;
    SET_GPR_U32(ctx, 31, 0x198AB4u);
    ctx->pc = 0x198AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AACu;
    // 0x198ab0: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198AACu, 0x198AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AB4u;
label_198ab4:
    // 0x198ab4: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x198ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x198ab8: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x198ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x198abc: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x198ac0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x198ac4: 0xaee30018  sw          $v1, 0x18($s7)
    ctx->pc = 0x198ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 3));
    // 0x198ac8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x198acc: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x198ad0: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x198ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x198ad4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198AD4u;
    SET_GPR_U32(ctx, 31, 0x198ADCu);
    ctx->pc = 0x198AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AD4u;
    // 0x198ad8: 0xae77008c  sw          $s7, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198AD4u, 0x198ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ADCu;
label_198adc:
    // 0x198adc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198ADCu;
    SET_GPR_U32(ctx, 31, 0x198AE4u);
    ctx->pc = 0x198AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198ADCu;
    // 0x198ae0: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198ADCu, 0x198AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AE4u;
label_198ae4:
    // 0x198ae4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198AE4u;
    {
        const bool branch_taken_0x198ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE4u;
        // 0x198ae8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ae4) {
            ctx->pc = 0x198B14u;
            return;
        }
    }
    ctx->pc = 0x198AECu;
    // 0x198aec: 0x0  nop
    ctx->pc = 0x198aecu;
    // NOP
    ctx->pc = 0x198af0u;
}
