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

// Function: ApRsc3DStageBGSetup__FP8ApcRsc3D
// Address: 0x143d50 - 0x143df8
void ApRsc3DStageBGSetup__FP8ApcRsc3D_0x143d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DStageBGSetup__FP8ApcRsc3D_0x143d50");
#endif

    switch (ctx->pc) {
        case 0x143d78u: goto label_143d78;
        case 0x143d80u: goto label_143d80;
        case 0x143dd0u: goto label_143dd0;
        case 0x143dd8u: goto label_143dd8;
        case 0x143de4u: goto label_143de4;
        default: break;
    }

    ctx->pc = 0x143d50u;

    // 0x143d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143d64: 0x8e110068  lw          $s1, 0x68($s0)
    ctx->pc = 0x143d64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x143d68: 0x5220001f  beql        $s1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x143D68u;
    {
        const bool branch_taken_0x143d68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d68) {
            ctx->pc = 0x143D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143D68u;
            // 0x143d6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143DE8u;
            goto label_143de8;
        }
    }
    ctx->pc = 0x143D70u;
    // 0x143d70: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143D70u;
    SET_GPR_U32(ctx, 31, 0x143D78u);
    ctx->pc = 0x143D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D70u;
    // 0x143d74: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143D70u, 0x143D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D78u;
label_143d78:
    // 0x143d78: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143D78u;
    SET_GPR_U32(ctx, 31, 0x143D80u);
    ctx->pc = 0x143D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D78u;
    // 0x143d7c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143D78u, 0x143D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D80u;
label_143d80:
    // 0x143d80: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x143d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x143d84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x143d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x143d88: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x143d88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143d8c: 0xfe020238  sd          $v0, 0x238($s0)
    ctx->pc = 0x143d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 568), GPR_U64(ctx, 2));
    // 0x143d90: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x143d90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x143d94: 0xfe040240  sd          $a0, 0x240($s0)
    ctx->pc = 0x143d94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 576), GPR_U64(ctx, 4));
    // 0x143d98: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x143d98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x143d9c: 0xfe020248  sd          $v0, 0x248($s0)
    ctx->pc = 0x143d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 584), GPR_U64(ctx, 2));
    // 0x143da0: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x143da0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x143da4: 0xfe040250  sd          $a0, 0x250($s0)
    ctx->pc = 0x143da4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 592), GPR_U64(ctx, 4));
    // 0x143da8: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x143da8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x143dac: 0xfe020258  sd          $v0, 0x258($s0)
    ctx->pc = 0x143dacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 600), GPR_U64(ctx, 2));
    // 0x143db0: 0xdc640028  ld          $a0, 0x28($v1)
    ctx->pc = 0x143db0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x143db4: 0xfe040260  sd          $a0, 0x260($s0)
    ctx->pc = 0x143db4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 608), GPR_U64(ctx, 4));
    // 0x143db8: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x143db8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x143dbc: 0xfe020268  sd          $v0, 0x268($s0)
    ctx->pc = 0x143dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 616), GPR_U64(ctx, 2));
    // 0x143dc0: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x143dc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x143dc4: 0xfe040270  sd          $a0, 0x270($s0)
    ctx->pc = 0x143dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 624), GPR_U64(ctx, 4));
    // 0x143dc8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143DC8u;
    SET_GPR_U32(ctx, 31, 0x143DD0u);
    ctx->pc = 0x143DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DC8u;
    // 0x143dcc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143DC8u, 0x143DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DD0u;
label_143dd0:
    // 0x143dd0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143DD0u;
    SET_GPR_U32(ctx, 31, 0x143DD8u);
    ctx->pc = 0x143DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DD0u;
    // 0x143dd4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143DD0u, 0x143DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DD8u;
label_143dd8:
    // 0x143dd8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x143dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x143ddc: 0xc0523be  jal         func_148EF8
    ctx->pc = 0x143DDCu;
    SET_GPR_U32(ctx, 31, 0x143DE4u);
    ctx->pc = 0x143DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DDCu;
    // 0x143de0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148EF8u, 0x143DDCu, 0x143DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DE4u;
label_143de4:
    // 0x143de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143de8:
    // 0x143de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143df0: 0x3e00008  jr          $ra
    ctx->pc = 0x143DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DF0u;
        // 0x143df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143DF8u;
}
