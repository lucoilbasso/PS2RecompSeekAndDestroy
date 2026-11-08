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

// Function: Cmd_ACTOR_DESTROY_Entry__FP15BsSCDEntControl
// Address: 0x135e80 - 0x135f0c
void Cmd_ACTOR_DESTROY_Entry__FP15BsSCDEntControl_0x135e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_DESTROY_Entry__FP15BsSCDEntControl_0x135e80");
#endif

    switch (ctx->pc) {
        case 0x135e80u: goto label_135e80;
        case 0x135e84u: goto label_135e84;
        case 0x135e88u: goto label_135e88;
        case 0x135e8cu: goto label_135e8c;
        case 0x135e90u: goto label_135e90;
        case 0x135e94u: goto label_135e94;
        case 0x135e98u: goto label_135e98;
        case 0x135e9cu: goto label_135e9c;
        case 0x135ea0u: goto label_135ea0;
        case 0x135ea4u: goto label_135ea4;
        case 0x135ea8u: goto label_135ea8;
        case 0x135eacu: goto label_135eac;
        case 0x135eb0u: goto label_135eb0;
        case 0x135eb4u: goto label_135eb4;
        case 0x135eb8u: goto label_135eb8;
        case 0x135ebcu: goto label_135ebc;
        case 0x135ec0u: goto label_135ec0;
        case 0x135ec4u: goto label_135ec4;
        case 0x135ec8u: goto label_135ec8;
        case 0x135eccu: goto label_135ecc;
        case 0x135ed0u: goto label_135ed0;
        case 0x135ed4u: goto label_135ed4;
        case 0x135ed8u: goto label_135ed8;
        case 0x135edcu: goto label_135edc;
        case 0x135ee0u: goto label_135ee0;
        case 0x135ee4u: goto label_135ee4;
        case 0x135ee8u: goto label_135ee8;
        case 0x135eecu: goto label_135eec;
        case 0x135ef0u: goto label_135ef0;
        case 0x135ef4u: goto label_135ef4;
        case 0x135ef8u: goto label_135ef8;
        case 0x135efcu: goto label_135efc;
        case 0x135f00u: goto label_135f00;
        case 0x135f04u: goto label_135f04;
        case 0x135f08u: goto label_135f08;
        default: break;
    }

    ctx->pc = 0x135e80u;

label_135e80:
    // 0x135e80: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x135e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_135e84:
    // 0x135e84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_135e88:
    // 0x135e88: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x135e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_135e8c:
    // 0x135e8c: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x135e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_135e90:
    // 0x135e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_135e94:
    // 0x135e94: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x135e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_135e98:
    // 0x135e98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x135e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_135e9c:
    // 0x135e9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x135e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_135ea0:
    // 0x135ea0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x135ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_135ea4:
    // 0x135ea4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_135ea8:
    if (ctx->pc == 0x135EA8u) {
        ctx->pc = 0x135EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA4u;
        // 0x135ea8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EACu;
        goto label_135eac;
    }
    ctx->pc = 0x135EA4u;
    {
        const bool branch_taken_0x135ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x135EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA4u;
        // 0x135ea8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ea4) {
            ctx->pc = 0x135EC0u;
            goto label_135ec0;
        }
    }
    ctx->pc = 0x135EACu;
label_135eac:
    // 0x135eac: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_135eb0:
    // 0x135eb0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x135eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_135eb4:
    // 0x135eb4: 0x10000012  b           . + 4 + (0x12 << 2)
label_135eb8:
    if (ctx->pc == 0x135EB8u) {
        ctx->pc = 0x135EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EB4u;
        // 0x135eb8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EBCu;
        goto label_135ebc;
    }
    ctx->pc = 0x135EB4u;
    {
        const bool branch_taken_0x135eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EB4u;
        // 0x135eb8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135eb4) {
            ctx->pc = 0x135F00u;
            goto label_135f00;
        }
    }
    ctx->pc = 0x135EBCu;
label_135ebc:
    // 0x135ebc: 0x0  nop
    ctx->pc = 0x135ebcu;
    // NOP
label_135ec0:
    // 0x135ec0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_135ec4:
    if (ctx->pc == 0x135EC4u) {
        ctx->pc = 0x135EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EC0u;
        // 0x135ec4: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EC8u;
        goto label_135ec8;
    }
    ctx->pc = 0x135EC0u;
    {
        const bool branch_taken_0x135ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x135ec0) {
            ctx->pc = 0x135EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135EC0u;
            // 0x135ec4: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135EF0u;
            goto label_135ef0;
        }
    }
    ctx->pc = 0x135EC8u;
label_135ec8:
    // 0x135ec8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_135ecc:
    // 0x135ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135ed0:
    // 0x135ed0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_135ed4:
    // 0x135ed4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x135ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_135ed8:
    // 0x135ed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x135ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135edc:
    // 0x135edc: 0x60f809  jalr        $v1
label_135ee0:
    if (ctx->pc == 0x135EE0u) {
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EDCu;
        // 0x135ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EE4u;
        goto label_135ee4;
    }
    ctx->pc = 0x135EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x135EE4u);
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EDCu;
        // 0x135ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EDCu, 0x135EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135EE4u;
label_135ee4:
    // 0x135ee4: 0x10000007  b           . + 4 + (0x7 << 2)
label_135ee8:
    if (ctx->pc == 0x135EE8u) {
        ctx->pc = 0x135EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EE4u;
        // 0x135ee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EECu;
        goto label_135eec;
    }
    ctx->pc = 0x135EE4u;
    {
        const bool branch_taken_0x135ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EE4u;
        // 0x135ee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ee4) {
            ctx->pc = 0x135F04u;
            goto label_135f04;
        }
    }
    ctx->pc = 0x135EECu;
label_135eec:
    // 0x135eec: 0x0  nop
    ctx->pc = 0x135eecu;
    // NOP
label_135ef0:
    // 0x135ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135ef4:
    // 0x135ef4: 0x24c66668  addiu       $a2, $a2, 0x6668
    ctx->pc = 0x135ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26216));
label_135ef8:
    // 0x135ef8: 0xc041606  jal         func_105818
label_135efc:
    if (ctx->pc == 0x135EFCu) {
        ctx->pc = 0x135EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EF8u;
        // 0x135efc: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F00u;
        goto label_135f00;
    }
    ctx->pc = 0x135EF8u;
    SET_GPR_U32(ctx, 31, 0x135F00u);
    ctx->pc = 0x135EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135EF8u;
    // 0x135efc: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105818u, 0x135EF8u, 0x135F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F00u;
label_135f00:
    // 0x135f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135f04:
    // 0x135f04: 0x3e00008  jr          $ra
label_135f08:
    if (ctx->pc == 0x135F08u) {
        ctx->pc = 0x135F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F04u;
        // 0x135f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F0Cu;
        goto label_fallthrough_0x135f04;
    }
    ctx->pc = 0x135F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F04u;
        // 0x135f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135f04:
    ctx->pc = 0x135F0Cu;
}
