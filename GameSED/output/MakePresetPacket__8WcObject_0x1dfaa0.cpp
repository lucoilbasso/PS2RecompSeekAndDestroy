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

// Function: MakePresetPacket__8WcObject
// Address: 0x1dfaa0 - 0x1dfb10
void MakePresetPacket__8WcObject_0x1dfaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakePresetPacket__8WcObject_0x1dfaa0");
#endif

    switch (ctx->pc) {
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfae4u: goto label_1dfae4;
        default: break;
    }

    ctx->pc = 0x1dfaa0u;

    // 0x1dfaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfaa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfaa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfab0: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1dfab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dfab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dfab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dfab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dfabc: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x1DFABCu;
    SET_GPR_U32(ctx, 31, 0x1DFAC4u);
    ctx->pc = 0x1DFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFABCu;
    // 0x1dfac0: 0x8e040194  lw          $a0, 0x194($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x1DFABCu, 0x1DFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAC4u;
label_1dfac4:
    // 0x1dfac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfac8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dfac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfacc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dfad0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1dfad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1dfad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFAD4u;
    {
        const bool branch_taken_0x1dfad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAD4u;
        // 0x1dfad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfad4) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFADCu;
    // 0x1dfadc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1DFADCu;
    SET_GPR_U32(ctx, 31, 0x1DFAE4u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1DFADCu, 0x1DFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAE4u;
label_1dfae4:
    // 0x1dfae4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfae8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dfae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1dfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1dfaf0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1dfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1dfaf4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1dfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1dfaf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfafc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfafcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfb00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dfb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB10u;
}
