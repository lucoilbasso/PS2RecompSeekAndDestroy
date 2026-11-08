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

// Function: WRscVsyncCallback__Fi
// Address: 0x17a108 - 0x17a1ec
void WRscVsyncCallback__Fi_0x17a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WRscVsyncCallback__Fi_0x17a108");
#endif

    switch (ctx->pc) {
        case 0x17a140u: goto label_17a140;
        case 0x17a148u: goto label_17a148;
        case 0x17a15cu: goto label_17a15c;
        case 0x17a170u: goto label_17a170;
        case 0x17a17cu: goto label_17a17c;
        case 0x17a198u: goto label_17a198;
        case 0x17a1b8u: goto label_17a1b8;
        case 0x17a1c0u: goto label_17a1c0;
        default: break;
    }

    ctx->pc = 0x17a108u;

    // 0x17a108: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a10c: 0x8f838d14  lw          $v1, -0x72EC($gp)
    ctx->pc = 0x17a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x17a110: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17a114: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x17a118: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17a11c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a120: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17a124: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17a128: 0x8f928d10  lw          $s2, -0x72F0($gp)
    ctx->pc = 0x17a128u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a12c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x17a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a130: 0xaf838d14  sw          $v1, -0x72EC($gp)
    ctx->pc = 0x17a130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 3));
    // 0x17a134: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x17a134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a138: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17A138u;
    {
        const bool branch_taken_0x17a138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a138) {
            ctx->pc = 0x17A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A138u;
            // 0x17a13c: 0x8e500158  lw          $s0, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A160u;
            goto label_17a160;
        }
    }
    ctx->pc = 0x17A140u;
label_17a140:
    // 0x17a140: 0xc06bd30  jal         func_1AF4C0
    ctx->pc = 0x17A140u;
    SET_GPR_U32(ctx, 31, 0x17A148u);
    ctx->pc = 0x17A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A140u;
    // 0x17a144: 0x8f848d0c  lw          $a0, -0x72F4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4C0u, 0x17A140u, 0x17A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A148u;
label_17a148:
    // 0x17a148: 0x8f848d0c  lw          $a0, -0x72F4($gp)
    ctx->pc = 0x17a148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x17a14c: 0x1044fffc  beq         $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17A14Cu;
    {
        const bool branch_taken_0x17a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x17a14c) {
            ctx->pc = 0x17A140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a140;
        }
    }
    ctx->pc = 0x17A154u;
    // 0x17a154: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17A154u;
    SET_GPR_U32(ctx, 31, 0x17A15Cu);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17A154u, 0x17A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A15Cu;
label_17a15c:
    // 0x17a15c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x17a15cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_17a160:
    // 0x17a160: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A160u;
    {
        const bool branch_taken_0x17a160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a160) {
            ctx->pc = 0x17A164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A160u;
            // 0x17a164: 0x8e50015c  lw          $s0, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1A8u;
            goto label_17a1a8;
        }
    }
    ctx->pc = 0x17A168u;
    // 0x17a168: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17a16c: 0x0  nop
    ctx->pc = 0x17a16cu;
    // NOP
label_17a170:
    // 0x17a170: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17a170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a174: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x17A174u;
    SET_GPR_U32(ctx, 31, 0x17A17Cu);
    ctx->pc = 0x17A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A174u;
    // 0x17a178: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x17A174u, 0x17A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A17Cu;
label_17a17c:
    // 0x17a17c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a180: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17a184: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x17a184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a188: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A188u;
    {
        const bool branch_taken_0x17a188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a188) {
            ctx->pc = 0x17A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A188u;
            // 0x17a18c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A19Cu;
            goto label_17a19c;
        }
    }
    ctx->pc = 0x17A190u;
    // 0x17a190: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17A190u;
    SET_GPR_U32(ctx, 31, 0x17A198u);
    ctx->pc = 0x17A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A190u;
    // 0x17a194: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17A190u, 0x17A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A198u;
label_17a198:
    // 0x17a198: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x17a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a19c:
    // 0x17a19c: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A19Cu;
    {
        const bool branch_taken_0x17a19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a19c) {
            ctx->pc = 0x17A1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A19Cu;
            // 0x17a1a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a170;
        }
    }
    ctx->pc = 0x17A1A4u;
    // 0x17a1a4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x17a1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_17a1a8:
    // 0x17a1a8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A1A8u;
    {
        const bool branch_taken_0x17a1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a1a8) {
            ctx->pc = 0x17A1C8u;
            goto label_17a1c8;
        }
    }
    ctx->pc = 0x17A1B0u;
    // 0x17a1b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17a1b4: 0x0  nop
    ctx->pc = 0x17a1b4u;
    // NOP
label_17a1b8:
    // 0x17a1b8: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17A1B8u;
    SET_GPR_U32(ctx, 31, 0x17A1C0u);
    ctx->pc = 0x17A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1B8u;
    // 0x17a1bc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17A1B8u, 0x17A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1C0u;
label_17a1c0:
    // 0x17a1c0: 0x5600fffd  bnel        $s0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17A1C0u;
    {
        const bool branch_taken_0x17a1c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a1c0) {
            ctx->pc = 0x17A1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A1C0u;
            // 0x17a1c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a1b8;
        }
    }
    ctx->pc = 0x17A1C8u;
label_17a1c8:
    // 0x17a1c8: 0xf  sync
    ctx->pc = 0x17a1c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x17a1cc: 0x42000038  ei
    ctx->pc = 0x17a1ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x17a1d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a1d8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17a1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a1dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17a1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a1e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17a1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1E4u;
        // 0x17a1e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A1ECu;
}
