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

// Function: SDebugATTR_B__FP7ApcTank
// Address: 0x155d58 - 0x155dc0
void SDebugATTR_B__FP7ApcTank_0x155d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SDebugATTR_B__FP7ApcTank_0x155d58");
#endif

    switch (ctx->pc) {
        case 0x155d98u: goto label_155d98;
        case 0x155dacu: goto label_155dac;
        default: break;
    }

    ctx->pc = 0x155d58u;

    // 0x155d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155d5c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x155d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x155d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155d64: 0x24639c48  addiu       $v1, $v1, -0x63B8
    ctx->pc = 0x155d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941768));
    // 0x155d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155d6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x155d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155d74: 0x90900576  lbu         $s0, 0x576($a0)
    ctx->pc = 0x155d74u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1398)));
    // 0x155d78: 0x720210e8  pminw       $v0, $s0, $v0
    ctx->pc = 0x155d78u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x155d7c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x155d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x155d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155d88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x155d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x155d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155d90: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x155D90u;
    SET_GPR_U32(ctx, 31, 0x155D98u);
    ctx->pc = 0x155D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D90u;
    // 0x155d94: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x155D90u, 0x155D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D98u;
label_155d98:
    // 0x155d98: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x155d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x155d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155da0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x155da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155da4: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x155DA4u;
    SET_GPR_U32(ctx, 31, 0x155DACu);
    ctx->pc = 0x155DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DA4u;
    // 0x155da8: 0x24846cd0  addiu       $a0, $a0, 0x6CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x155DA4u, 0x155DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DACu;
label_155dac:
    // 0x155dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155db8: 0x3e00008  jr          $ra
    ctx->pc = 0x155DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DB8u;
        // 0x155dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155DC0u;
}
