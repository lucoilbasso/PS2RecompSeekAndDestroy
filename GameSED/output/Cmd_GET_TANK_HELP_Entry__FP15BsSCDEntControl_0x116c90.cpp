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

// Function: Cmd_GET_TANK_HELP_Entry__FP15BsSCDEntControl
// Address: 0x116c90 - 0x116d4c
void Cmd_GET_TANK_HELP_Entry__FP15BsSCDEntControl_0x116c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TANK_HELP_Entry__FP15BsSCDEntControl_0x116c90");
#endif

    switch (ctx->pc) {
        case 0x116ca8u: goto label_116ca8;
        case 0x116cb4u: goto label_116cb4;
        case 0x116cc8u: goto label_116cc8;
        case 0x116cd8u: goto label_116cd8;
        case 0x116d00u: goto label_116d00;
        default: break;
    }

    ctx->pc = 0x116c90u;

    // 0x116c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116c9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116ca0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116CA0u;
    SET_GPR_U32(ctx, 31, 0x116CA8u);
    ctx->pc = 0x116CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CA0u;
    // 0x116ca4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116CA0u, 0x116CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CA8u;
label_116ca8:
    // 0x116ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116CACu;
    SET_GPR_U32(ctx, 31, 0x116CB4u);
    ctx->pc = 0x116CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CACu;
    // 0x116cb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116CACu, 0x116CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CB4u;
label_116cb4:
    // 0x116cb4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x116cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x116cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cc0: 0xc041882  jal         func_106208
    ctx->pc = 0x116CC0u;
    SET_GPR_U32(ctx, 31, 0x116CC8u);
    ctx->pc = 0x116CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CC0u;
    // 0x116cc4: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116CC0u, 0x116CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CC8u;
label_116cc8:
    // 0x116cc8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116ccc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x116cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x116cd0: 0xc041882  jal         func_106208
    ctx->pc = 0x116CD0u;
    SET_GPR_U32(ctx, 31, 0x116CD8u);
    ctx->pc = 0x116CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CD0u;
    // 0x116cd4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116CD0u, 0x116CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CD8u;
label_116cd8:
    // 0x116cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x116cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116ce0: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x116CE0u;
    {
        const bool branch_taken_0x116ce0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x116CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CE0u;
        // 0x116ce4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ce0) {
            ctx->pc = 0x116D28u;
            goto label_116d28;
        }
    }
    ctx->pc = 0x116CE8u;
    // 0x116ce8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x116ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x116cec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x116cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x116cf0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116CF0u;
    {
        const bool branch_taken_0x116cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x116CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CF0u;
        // 0x116cf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cf0) {
            ctx->pc = 0x116D1Cu;
            goto label_116d1c;
        }
    }
    ctx->pc = 0x116CF8u;
    // 0x116cf8: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x116cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x116cfc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x116cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_116d00:
    // 0x116d00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x116d04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116d08: 0x0  nop
    ctx->pc = 0x116d08u;
    // NOP
    // 0x116d0c: 0x0  nop
    ctx->pc = 0x116d0cu;
    // NOP
    // 0x116d10: 0x0  nop
    ctx->pc = 0x116d10u;
    // NOP
    // 0x116d14: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116D14u;
    {
        const bool branch_taken_0x116d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x116D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D14u;
        // 0x116d18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d14) {
            ctx->pc = 0x116D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116d00;
        }
    }
    ctx->pc = 0x116D1Cu;
label_116d1c:
    // 0x116d1c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116d20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116D20u;
    {
        const bool branch_taken_0x116d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D20u;
        // 0x116d24: 0xac4400b0  sw          $a0, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d20) {
            ctx->pc = 0x116D38u;
            goto label_116d38;
        }
    }
    ctx->pc = 0x116D28u;
label_116d28:
    // 0x116d28: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x116d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x116d2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x116d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x116d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116d34: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x116d34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
label_116d38:
    // 0x116d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116d44: 0x3e00008  jr          $ra
    ctx->pc = 0x116D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D44u;
        // 0x116d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116D4Cu;
}
