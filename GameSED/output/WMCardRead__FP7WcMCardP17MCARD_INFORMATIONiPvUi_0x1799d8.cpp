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

// Function: WMCardRead__FP7WcMCardP17MCARD_INFORMATIONiPvUi
// Address: 0x1799d8 - 0x179a7c
void WMCardRead__FP7WcMCardP17MCARD_INFORMATIONiPvUi_0x1799d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardRead__FP7WcMCardP17MCARD_INFORMATIONiPvUi_0x1799d8");
#endif

    switch (ctx->pc) {
        case 0x179a10u: goto label_179a10;
        case 0x179a1cu: goto label_179a1c;
        case 0x179a38u: goto label_179a38;
        default: break;
    }

    ctx->pc = 0x1799d8u;

    // 0x1799d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1799dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1799dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1799e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1799e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1799e4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1799e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1799e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1799ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1799ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1799f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1799f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1799f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1799f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1799fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1799fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a00: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x179a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x179a04: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a0c: 0x0  nop
    ctx->pc = 0x179a0cu;
    // NOP
label_179a10:
    // 0x179a10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a14: 0xc071546  jal         func_1C5518
    ctx->pc = 0x179A14u;
    SET_GPR_U32(ctx, 31, 0x179A1Cu);
    ctx->pc = 0x179A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A14u;
    // 0x179a18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5518u, 0x179A14u, 0x179A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A1Cu;
label_179a1c:
    // 0x179a1c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179A1Cu;
    {
        const bool branch_taken_0x179a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A1Cu;
        // 0x179a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a1c) {
            ctx->pc = 0x179A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179a10;
        }
    }
    ctx->pc = 0x179A24u;
    // 0x179a24: 0x26704030  addiu       $s0, $s3, 0x4030
    ctx->pc = 0x179a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16432));
    // 0x179a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a30: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179A30u;
    SET_GPR_U32(ctx, 31, 0x179A38u);
    ctx->pc = 0x179A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A30u;
    // 0x179a34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179A30u, 0x179A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A38u;
label_179a38:
    // 0x179a38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179a3c: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x179A3Cu;
    {
        const bool branch_taken_0x179a3c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x179A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A3Cu;
        // 0x179a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a3c) {
            ctx->pc = 0x179A5Cu;
            goto label_179a5c;
        }
    }
    ctx->pc = 0x179A44u;
    // 0x179a44: 0x2882ffff  slti        $v0, $a0, -0x1
    ctx->pc = 0x179a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x179a48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x179A48u;
    {
        const bool branch_taken_0x179a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179a48) {
            ctx->pc = 0x179A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A48u;
            // 0x179a4c: 0x2882fffb  slti        $v0, $a0, -0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967291) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A50u;
            goto label_179a50;
        }
    }
    ctx->pc = 0x179A50u;
label_179a50:
    // 0x179a50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179a54: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x179a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x179a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179a5c:
    // 0x179a5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179a60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179a64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179a68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x179a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179a6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x179a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179a70: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179a74: 0x3e00008  jr          $ra
    ctx->pc = 0x179A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A74u;
        // 0x179a78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179A7Cu;
}
