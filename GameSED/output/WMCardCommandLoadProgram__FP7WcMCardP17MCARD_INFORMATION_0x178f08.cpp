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

// Function: WMCardCommandLoadProgram__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x178f08 - 0x179050
void WMCardCommandLoadProgram__FP7WcMCardP17MCARD_INFORMATION_0x178f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCommandLoadProgram__FP7WcMCardP17MCARD_INFORMATION_0x178f08");
#endif

    switch (ctx->pc) {
        case 0x178f78u: goto label_178f78;
        case 0x178f7cu: goto label_178f7c;
        case 0x178f90u: goto label_178f90;
        case 0x178fa4u: goto label_178fa4;
        case 0x178fc8u: goto label_178fc8;
        case 0x178fdcu: goto label_178fdc;
        case 0x179004u: goto label_179004;
        default: break;
    }

    ctx->pc = 0x178f08u;

    // 0x178f08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x178f0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178f10: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x178f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x178f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f18: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x178f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x178f1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f20: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x178f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x178f24: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x178f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x178f28: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x178f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x178f2c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x178f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x178f30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x178f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178f34: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x178F34u;
    {
        const bool branch_taken_0x178f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F34u;
        // 0x178f38: 0x8e7245c0  lw          $s2, 0x45C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f34) {
            ctx->pc = 0x178F60u;
            goto label_178f60;
        }
    }
    ctx->pc = 0x178F3Cu;
    // 0x178f3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178f40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f44: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x178f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x178f48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x178f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178f4c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x178f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x178f50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178F54u;
    {
        const bool branch_taken_0x178f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178f54) {
            ctx->pc = 0x178F64u;
            goto label_178f64;
        }
    }
    ctx->pc = 0x178F5Cu;
    // 0x178f5c: 0x0  nop
    ctx->pc = 0x178f5cu;
    // NOP
label_178f60:
    // 0x178f60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x178f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178f64:
    // 0x178f64: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x178F64u;
    {
        const bool branch_taken_0x178f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F64u;
        // 0x178f68: 0x3c140026  lui         $s4, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f64) {
            ctx->pc = 0x179030u;
            goto label_179030;
        }
    }
    ctx->pc = 0x178F6Cu;
    // 0x178f6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x178F6Cu;
    {
        const bool branch_taken_0x178f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F6Cu;
        // 0x178f70: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f6c) {
            ctx->pc = 0x178FB0u;
            goto label_178fb0;
        }
    }
    ctx->pc = 0x178F74u;
    // 0x178f74: 0x0  nop
    ctx->pc = 0x178f74u;
    // NOP
label_178f78:
    // 0x178f78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178f7c:
    // 0x178f7c: 0x8e480010  lw          $t0, 0x10($s2)
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x178f80: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x178f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x178f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f88: 0xc05e676  jal         func_1799D8
    ctx->pc = 0x178F88u;
    SET_GPR_U32(ctx, 31, 0x178F90u);
    ctx->pc = 0x178F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F88u;
    // 0x178f8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1799D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1799D8u, 0x178F88u, 0x178F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F90u;
label_178f90:
    // 0x178f90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f94: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x178F94u;
    {
        const bool branch_taken_0x178f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F94u;
        // 0x178f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f94) {
            ctx->pc = 0x17900Cu;
            goto label_17900c;
        }
    }
    ctx->pc = 0x178F9Cu;
    // 0x178f9c: 0xc05e6e2  jal         func_179B88
    ctx->pc = 0x178F9Cu;
    SET_GPR_U32(ctx, 31, 0x178FA4u);
    ctx->pc = 0x178FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F9Cu;
    // 0x178fa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179B88u, 0x178F9Cu, 0x178FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FA4u;
label_178fa4:
    // 0x178fa4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178FA4u;
    {
        const bool branch_taken_0x178fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178fa4) {
            ctx->pc = 0x17900Cu;
            goto label_17900c;
        }
    }
    ctx->pc = 0x178FACu;
    // 0x178fac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_178fb0:
    // 0x178fb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x178FB0u;
    {
        const bool branch_taken_0x178fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FB0u;
        // 0x178fb4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fb0) {
            ctx->pc = 0x17900Cu;
            goto label_17900c;
        }
    }
    ctx->pc = 0x178FB8u;
    // 0x178fb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x178fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fbc: 0x2685d550  addiu       $a1, $s4, -0x2AB0
    ctx->pc = 0x178fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956368));
    // 0x178fc0: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x178FC0u;
    SET_GPR_U32(ctx, 31, 0x178FC8u);
    ctx->pc = 0x178FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FC0u;
    // 0x178fc4: 0x26060540  addiu       $a2, $s0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x178FC0u, 0x178FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FC8u;
label_178fc8:
    // 0x178fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x178fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd4: 0xc05e624  jal         func_179890
    ctx->pc = 0x178FD4u;
    SET_GPR_U32(ctx, 31, 0x178FDCu);
    ctx->pc = 0x178FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FD4u;
    // 0x178fd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179890u, 0x178FD4u, 0x178FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FDCu;
label_178fdc:
    // 0x178fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fe8: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x178FE8u;
    {
        const bool branch_taken_0x178fe8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x178FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FE8u;
        // 0x178fec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fe8) {
            ctx->pc = 0x17900Cu;
            goto label_17900c;
        }
    }
    ctx->pc = 0x178FF0u;
    // 0x178ff0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x178ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x178ff4: 0x50e0ffe1  beql        $a3, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x178FF4u;
    {
        const bool branch_taken_0x178ff4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ff4) {
            ctx->pc = 0x178FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178FF4u;
            // 0x178ff8: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178f7c;
        }
    }
    ctx->pc = 0x178FFCu;
    // 0x178ffc: 0xc05e650  jal         func_179940
    ctx->pc = 0x178FFCu;
    SET_GPR_U32(ctx, 31, 0x179004u);
    ctx->pc = 0x179940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179940u, 0x178FFCu, 0x179004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179004u;
label_179004:
    // 0x179004: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x179004u;
    {
        const bool branch_taken_0x179004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179004) {
            ctx->pc = 0x179008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179004u;
            // 0x179008: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178f78;
        }
    }
    ctx->pc = 0x17900Cu;
label_17900c:
    // 0x17900c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179014: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179014u;
    {
        const bool branch_taken_0x179014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179014u;
        // 0x179018: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179014) {
            ctx->pc = 0x179020u;
            goto label_179020;
        }
    }
    ctx->pc = 0x17901Cu;
    // 0x17901c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17901cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_179020:
    // 0x179020: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179028: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x179028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17902c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_179030:
    // 0x179030: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x179030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179034: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x179034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x179038: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x179038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17903c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17903cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x179040: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x179040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179044: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x179044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x179048: 0x3e00008  jr          $ra
    ctx->pc = 0x179048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179048u;
        // 0x17904c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179050u;
}
