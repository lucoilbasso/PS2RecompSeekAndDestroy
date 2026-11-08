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

// Function: HitCheckHandle__7ApcUnitP7WcActori
// Address: 0x159dc0 - 0x159e3c
void HitCheckHandle__7ApcUnitP7WcActori_0x159dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitCheckHandle__7ApcUnitP7WcActori_0x159dc0");
#endif

    switch (ctx->pc) {
        case 0x159e30u: goto label_159e30;
        default: break;
    }

    ctx->pc = 0x159dc0u;

    // 0x159dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159dc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x159dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159dcc: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x159dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x159dd0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x159dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159dd4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x159dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x159dd8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x159DD8u;
    {
        const bool branch_taken_0x159dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DD8u;
        // 0x159ddc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dd8) {
            ctx->pc = 0x159E0Cu;
            goto label_159e0c;
        }
    }
    ctx->pc = 0x159DE0u;
    // 0x159de0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x159de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x159de4: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x159de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x159de8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159DE8u;
    {
        const bool branch_taken_0x159de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DE8u;
        // 0x159dec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159de8) {
            ctx->pc = 0x159E00u;
            goto label_159e00;
        }
    }
    ctx->pc = 0x159DF0u;
    // 0x159df0: 0x8ce20184  lw          $v0, 0x184($a3)
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x159df4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x159df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x159df8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159DF8u;
    {
        const bool branch_taken_0x159df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159df8) {
            ctx->pc = 0x159E04u;
            goto label_159e04;
        }
    }
    ctx->pc = 0x159E00u;
label_159e00:
    // 0x159e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x159e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159e04:
    // 0x159e04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x159E04u;
    {
        const bool branch_taken_0x159e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E04u;
        // 0x159e08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e04) {
            ctx->pc = 0x159E34u;
            goto label_159e34;
        }
    }
    ctx->pc = 0x159E0Cu;
label_159e0c:
    // 0x159e0c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x159e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x159e10: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x159e14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159E14u;
    {
        const bool branch_taken_0x159e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159e14) {
            ctx->pc = 0x159E28u;
            goto label_159e28;
        }
    }
    ctx->pc = 0x159E1Cu;
    // 0x159e1c: 0x8d020260  lw          $v0, 0x260($t0)
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 608)));
    // 0x159e20: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159E20u;
    {
        const bool branch_taken_0x159e20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x159E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E20u;
        // 0x159e24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e20) {
            ctx->pc = 0x159E34u;
            goto label_159e34;
        }
    }
    ctx->pc = 0x159E28u;
label_159e28:
    // 0x159e28: 0xc055e78  jal         func_1579E0
    ctx->pc = 0x159E28u;
    SET_GPR_U32(ctx, 31, 0x159E30u);
    ctx->pc = 0x1579E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1579E0u, 0x159E28u, 0x159E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E30u;
label_159e30:
    // 0x159e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159e34:
    // 0x159e34: 0x3e00008  jr          $ra
    ctx->pc = 0x159E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E34u;
        // 0x159e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159E3Cu;
}
