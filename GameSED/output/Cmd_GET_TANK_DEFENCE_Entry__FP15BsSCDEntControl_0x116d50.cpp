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

// Function: Cmd_GET_TANK_DEFENCE_Entry__FP15BsSCDEntControl
// Address: 0x116d50 - 0x116dfc
void Cmd_GET_TANK_DEFENCE_Entry__FP15BsSCDEntControl_0x116d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TANK_DEFENCE_Entry__FP15BsSCDEntControl_0x116d50");
#endif

    switch (ctx->pc) {
        case 0x116d70u: goto label_116d70;
        case 0x116d90u: goto label_116d90;
        case 0x116db4u: goto label_116db4;
        case 0x116dc8u: goto label_116dc8;
        case 0x116de4u: goto label_116de4;
        default: break;
    }

    ctx->pc = 0x116d50u;

    // 0x116d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116d60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x116d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116d64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x116d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x116d68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116D68u;
    SET_GPR_U32(ctx, 31, 0x116D70u);
    ctx->pc = 0x116D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D68u;
    // 0x116d6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116D68u, 0x116D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D70u;
label_116d70:
    // 0x116d70: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x116d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x116d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x116d7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116d80: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116D80u;
    {
        const bool branch_taken_0x116d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x116D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D80u;
        // 0x116d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d80) {
            ctx->pc = 0x116D94u;
            goto label_116d94;
        }
    }
    ctx->pc = 0x116D88u;
    // 0x116d88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116D88u;
    SET_GPR_U32(ctx, 31, 0x116D90u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116D88u, 0x116D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D90u;
label_116d90:
    // 0x116d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116d94:
    // 0x116d94: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116d98: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116d9c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x116d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116da0: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x116da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x116da4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116da8: 0x8e10d528  lw          $s0, -0x2AD8($s0)
    ctx->pc = 0x116da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956328)));
    // 0x116dac: 0xc041882  jal         func_106208
    ctx->pc = 0x116DACu;
    SET_GPR_U32(ctx, 31, 0x116DB4u);
    ctx->pc = 0x116DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DACu;
    // 0x116db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116DACu, 0x116DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DB4u;
label_116db4:
    // 0x116db4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116db8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116dbc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116dc0: 0xc041882  jal         func_106208
    ctx->pc = 0x116DC0u;
    SET_GPR_U32(ctx, 31, 0x116DC8u);
    ctx->pc = 0x116DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DC0u;
    // 0x116dc4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116DC0u, 0x116DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DC8u;
label_116dc8:
    // 0x116dc8: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x116dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x116dcc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x116dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x116dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dd8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x116dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x116ddc: 0xc0458a4  jal         func_116290
    ctx->pc = 0x116DDCu;
    SET_GPR_U32(ctx, 31, 0x116DE4u);
    ctx->pc = 0x116DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DDCu;
    // 0x116de0: 0xace300b0  sw          $v1, 0xB0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x116DDCu, 0x116DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DE4u;
label_116de4:
    // 0x116de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116df0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x116df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116df4: 0x3e00008  jr          $ra
    ctx->pc = 0x116DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DF4u;
        // 0x116df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116DFCu;
}
