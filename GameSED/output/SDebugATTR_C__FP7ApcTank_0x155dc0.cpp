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

// Function: SDebugATTR_C__FP7ApcTank
// Address: 0x155dc0 - 0x155e28
void SDebugATTR_C__FP7ApcTank_0x155dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SDebugATTR_C__FP7ApcTank_0x155dc0");
#endif

    switch (ctx->pc) {
        case 0x155e00u: goto label_155e00;
        case 0x155e14u: goto label_155e14;
        default: break;
    }

    ctx->pc = 0x155dc0u;

    // 0x155dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155dc4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x155dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155dcc: 0x24639c60  addiu       $v1, $v1, -0x63A0
    ctx->pc = 0x155dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941792));
    // 0x155dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155dd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155ddc: 0x90900577  lbu         $s0, 0x577($a0)
    ctx->pc = 0x155ddcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1399)));
    // 0x155de0: 0x720210e8  pminw       $v0, $s0, $v0
    ctx->pc = 0x155de0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x155de4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x155de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x155de8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155df0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x155df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155df8: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x155DF8u;
    SET_GPR_U32(ctx, 31, 0x155E00u);
    ctx->pc = 0x155DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DF8u;
    // 0x155dfc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x155DF8u, 0x155E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E00u;
label_155e00:
    // 0x155e00: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x155e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x155e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x155e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e0c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x155E0Cu;
    SET_GPR_U32(ctx, 31, 0x155E14u);
    ctx->pc = 0x155E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E0Cu;
    // 0x155e10: 0x24846ce0  addiu       $a0, $a0, 0x6CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x155E0Cu, 0x155E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E14u;
label_155e14:
    // 0x155e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155e20: 0x3e00008  jr          $ra
    ctx->pc = 0x155E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E20u;
        // 0x155e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155E28u;
}
