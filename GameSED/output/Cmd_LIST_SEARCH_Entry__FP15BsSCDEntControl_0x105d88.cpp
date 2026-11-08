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

// Function: Cmd_LIST_SEARCH_Entry__FP15BsSCDEntControl
// Address: 0x105d88 - 0x105e38
void Cmd_LIST_SEARCH_Entry__FP15BsSCDEntControl_0x105d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIST_SEARCH_Entry__FP15BsSCDEntControl_0x105d88");
#endif

    switch (ctx->pc) {
        case 0x105da4u: goto label_105da4;
        case 0x105dd0u: goto label_105dd0;
        case 0x105df0u: goto label_105df0;
        default: break;
    }

    ctx->pc = 0x105d88u;

    // 0x105d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105d94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105d98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105d9c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105D9Cu;
    SET_GPR_U32(ctx, 31, 0x105DA4u);
    ctx->pc = 0x105DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D9Cu;
    // 0x105da0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105D9Cu, 0x105DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DA4u;
label_105da4:
    // 0x105da4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x105da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105da8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x105da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x105dac: 0x2450fcb0  addiu       $s0, $v0, -0x350
    ctx->pc = 0x105dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x105db0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x105db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x105db4: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x105db4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x105db8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x105db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x105dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x105dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105dc0: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105DC0u;
    {
        const bool branch_taken_0x105dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x105dc0) {
            ctx->pc = 0x105DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105DC0u;
            // 0x105dc4: 0x8e020400  lw          $v0, 0x400($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105DD8u;
            goto label_105dd8;
        }
    }
    ctx->pc = 0x105DC8u;
    // 0x105dc8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105DC8u;
    SET_GPR_U32(ctx, 31, 0x105DD0u);
    ctx->pc = 0x105DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105DC8u;
    // 0x105dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105DC8u, 0x105DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DD0u;
label_105dd0:
    // 0x105dd0: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x105dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x105dd4: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x105dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_105dd8:
    // 0x105dd8: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x105dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x105ddc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105DDCu;
    {
        const bool branch_taken_0x105ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DDCu;
        // 0x105de0: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ddc) {
            ctx->pc = 0x105E18u;
            goto label_105e18;
        }
    }
    ctx->pc = 0x105DE4u;
    // 0x105de4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x105de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x105de8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x105de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dec: 0x2447dc00  addiu       $a3, $v0, -0x2400
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
label_105df0:
    // 0x105df0: 0x8cc20400  lw          $v0, 0x400($a2)
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1024)));
    // 0x105df4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x105df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x105df8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x105df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105dfc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x105dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x105e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105e04: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105E04u;
    {
        const bool branch_taken_0x105e04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x105E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E04u;
        // 0x105e08: 0x28850400  slti        $a1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e04) {
            ctx->pc = 0x105E20u;
            goto label_105e20;
        }
    }
    ctx->pc = 0x105E0Cu;
    // 0x105e0c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x105E0Cu;
    {
        const bool branch_taken_0x105e0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E0Cu;
        // 0x105e10: 0xacc40400  sw          $a0, 0x400($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e0c) {
            ctx->pc = 0x105DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105df0;
        }
    }
    ctx->pc = 0x105E14u;
    // 0x105e14: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x105e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
label_105e18:
    // 0x105e18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105e1c: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x105e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_105e20:
    // 0x105e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105e28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105e2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105e30: 0x3e00008  jr          $ra
    ctx->pc = 0x105E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E30u;
        // 0x105e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E38u;
}
