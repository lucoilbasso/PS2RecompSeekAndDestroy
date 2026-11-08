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

// Function: Cmd_HETOH_LEGS_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x16eea8 - 0x16ef24
void Cmd_HETOH_LEGS_PARAM_Entry__FP15BsSCDEntControl_0x16eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_HETOH_LEGS_PARAM_Entry__FP15BsSCDEntControl_0x16eea8");
#endif

    switch (ctx->pc) {
        case 0x16eed4u: goto label_16eed4;
        case 0x16eee0u: goto label_16eee0;
        case 0x16eef8u: goto label_16eef8;
        case 0x16ef08u: goto label_16ef08;
        default: break;
    }

    ctx->pc = 0x16eea8u;

    // 0x16eea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16eea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16eeac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eeb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16eeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16eeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16eeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eeb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16eebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16eebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eec0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16eec4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16eec8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x16eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16eecc: 0xc04110c  jal         func_104430
    ctx->pc = 0x16EECCu;
    SET_GPR_U32(ctx, 31, 0x16EED4u);
    ctx->pc = 0x16EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EECCu;
    // 0x16eed0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16EECCu, 0x16EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EED4u;
label_16eed4:
    // 0x16eed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eed8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16EED8u;
    SET_GPR_U32(ctx, 31, 0x16EEE0u);
    ctx->pc = 0x16EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EED8u;
    // 0x16eedc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16EED8u, 0x16EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EEE0u;
label_16eee0:
    // 0x16eee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16eee4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x16eee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eee8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EEE8u;
    {
        const bool branch_taken_0x16eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEE8u;
        // 0x16eeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eee8) {
            ctx->pc = 0x16EF00u;
            goto label_16ef00;
        }
    }
    ctx->pc = 0x16EEF0u;
    // 0x16eef0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16EEF0u;
    SET_GPR_U32(ctx, 31, 0x16EEF8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16EEF0u, 0x16EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EEF8u;
label_16eef8:
    // 0x16eef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EEF8u;
    {
        const bool branch_taken_0x16eef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEF8u;
        // 0x16eefc: 0xae4202b0  sw          $v0, 0x2B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eef8) {
            ctx->pc = 0x16EF0Cu;
            goto label_16ef0c;
        }
    }
    ctx->pc = 0x16EF00u;
label_16ef00:
    // 0x16ef00: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16EF00u;
    SET_GPR_U32(ctx, 31, 0x16EF08u);
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16EF00u, 0x16EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF08u;
label_16ef08:
    // 0x16ef08: 0xe62002e4  swc1        $f0, 0x2E4($s1)
    ctx->pc = 0x16ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 740), bits); }
label_16ef0c:
    // 0x16ef0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ef0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ef10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ef14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ef14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ef18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16ef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ef1c: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF1Cu;
        // 0x16ef20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EF24u;
}
