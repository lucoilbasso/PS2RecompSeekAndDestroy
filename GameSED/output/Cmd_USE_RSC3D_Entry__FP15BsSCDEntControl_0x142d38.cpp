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

// Function: Cmd_USE_RSC3D_Entry__FP15BsSCDEntControl
// Address: 0x142d38 - 0x142dcc
void Cmd_USE_RSC3D_Entry__FP15BsSCDEntControl_0x142d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_RSC3D_Entry__FP15BsSCDEntControl_0x142d38");
#endif

    switch (ctx->pc) {
        case 0x142d64u: goto label_142d64;
        case 0x142d6cu: goto label_142d6c;
        case 0x142d88u: goto label_142d88;
        case 0x142d94u: goto label_142d94;
        case 0x142db4u: goto label_142db4;
        default: break;
    }

    ctx->pc = 0x142d38u;

    // 0x142d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x142d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142d48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x142d4c: 0x8c920024  lw          $s2, 0x24($a0)
    ctx->pc = 0x142d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x142d50: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x142d54: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x142D54u;
    {
        const bool branch_taken_0x142d54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D54u;
        // 0x142d58: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d54) {
            ctx->pc = 0x142DA0u;
            goto label_142da0;
        }
    }
    ctx->pc = 0x142D5Cu;
    // 0x142d5c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x142D5Cu;
    SET_GPR_U32(ctx, 31, 0x142D64u);
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x142D5Cu, 0x142D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D64u;
label_142d64:
    // 0x142d64: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x142D64u;
    SET_GPR_U32(ctx, 31, 0x142D6Cu);
    ctx->pc = 0x142D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D64u;
    // 0x142d68: 0x24040330  addiu       $a0, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x142D64u, 0x142D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D6Cu;
label_142d6c:
    // 0x142d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d74: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x142d78: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x142d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x142d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d80: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x142D80u;
    SET_GPR_U32(ctx, 31, 0x142D88u);
    ctx->pc = 0x142D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D80u;
    // 0x142d84: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x142D80u, 0x142D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D88u;
label_142d88:
    // 0x142d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d8c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x142D8Cu;
    SET_GPR_U32(ctx, 31, 0x142D94u);
    ctx->pc = 0x142D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D8Cu;
    // 0x142d90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x142D8Cu, 0x142D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D94u;
label_142d94:
    // 0x142d94: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x142d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
    // 0x142d98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142D98u;
    {
        const bool branch_taken_0x142d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D98u;
        // 0x142d9c: 0xae500048  sw          $s0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d98) {
            ctx->pc = 0x142DB4u;
            goto label_142db4;
        }
    }
    ctx->pc = 0x142DA0u;
label_142da0:
    // 0x142da0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x142da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x142da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142da8: 0x24a56930  addiu       $a1, $a1, 0x6930
    ctx->pc = 0x142da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26928));
    // 0x142dac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x142DACu;
    SET_GPR_U32(ctx, 31, 0x142DB4u);
    ctx->pc = 0x142DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DACu;
    // 0x142db0: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x142DACu, 0x142DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DB4u;
label_142db4:
    // 0x142db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142dbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142dc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x142DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DC4u;
        // 0x142dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142DCCu;
}
