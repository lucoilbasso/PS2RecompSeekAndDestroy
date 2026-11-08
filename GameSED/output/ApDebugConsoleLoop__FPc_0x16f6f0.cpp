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

// Function: ApDebugConsoleLoop__FPc
// Address: 0x16f6f0 - 0x16f914
void ApDebugConsoleLoop__FPc_0x16f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugConsoleLoop__FPc_0x16f6f0");
#endif

    switch (ctx->pc) {
        case 0x16f738u: goto label_16f738;
        case 0x16f748u: goto label_16f748;
        case 0x16f758u: goto label_16f758;
        case 0x16f760u: goto label_16f760;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f78cu: goto label_16f78c;
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7e8u: goto label_16f7e8;
        case 0x16f80cu: goto label_16f80c;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f840u: goto label_16f840;
        case 0x16f854u: goto label_16f854;
        case 0x16f85cu: goto label_16f85c;
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8c4u: goto label_16f8c4;
        case 0x16f8d8u: goto label_16f8d8;
        case 0x16f8f8u: goto label_16f8f8;
        case 0x16f900u: goto label_16f900;
        case 0x16f90cu: goto label_16f90c;
        default: break;
    }

    ctx->pc = 0x16f6f0u;

    // 0x16f6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16f6f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16f6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f700: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x16f700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16f704: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x16f704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f708: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x16f708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x16f70c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16f70cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f710: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x16f710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x16f714: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16f714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f718: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16f71c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16f720: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16f720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16f724: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16f728: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x16f728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16f72c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x16f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x16f730: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16F730u;
    SET_GPR_U32(ctx, 31, 0x16F738u);
    ctx->pc = 0x16F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F730u;
    // 0x16f734: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16F730u, 0x16F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F738u;
label_16f738:
    // 0x16f738: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x16f738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x16f73c: 0x247ed3e8  addiu       $fp, $v1, -0x2C18
    ctx->pc = 0x16f73cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956008));
    // 0x16f740: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x16f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x16f744: 0x0  nop
    ctx->pc = 0x16f744u;
    // NOP
label_16f748:
    // 0x16f748: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16f748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f74c: 0x2444ba10  addiu       $a0, $v0, -0x45F0
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
    // 0x16f750: 0xc06ab5a  jal         func_1AAD68
    ctx->pc = 0x16F750u;
    SET_GPR_U32(ctx, 31, 0x16F758u);
    ctx->pc = 0x16F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F750u;
    // 0x16f754: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAD68u, 0x16F750u, 0x16F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F758u;
label_16f758:
    // 0x16f758: 0xc05df12  jal         func_177C48
    ctx->pc = 0x16F758u;
    SET_GPR_U32(ctx, 31, 0x16F760u);
    ctx->pc = 0x16F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F758u;
    // 0x16f75c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C48u, 0x16F758u, 0x16F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F760u;
label_16f760:
    // 0x16f760: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16f764: 0xc05df26  jal         func_177C98
    ctx->pc = 0x16F764u;
    SET_GPR_U32(ctx, 31, 0x16F76Cu);
    ctx->pc = 0x16F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F764u;
    // 0x16f768: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x16F764u, 0x16F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F76Cu;
label_16f76c:
    // 0x16f76c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16f770: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x16f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x16f774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f778: 0x24443600  addiu       $a0, $v0, 0x3600
    ctx->pc = 0x16f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
    // 0x16f77c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16f780: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x16f780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x16f784: 0xc067294  jal         func_19CA50
    ctx->pc = 0x16F784u;
    SET_GPR_U32(ctx, 31, 0x16F78Cu);
    ctx->pc = 0x16F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F784u;
    // 0x16f788: 0x94550040  lhu         $s5, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x16F784u, 0x16F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F78Cu;
label_16f78c:
    // 0x16f78c: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x16f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x16f790: 0x768023  subu        $s0, $v1, $s6
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x16f794: 0x1a00001b  blez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16F794u;
    {
        const bool branch_taken_0x16f794 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x16F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F794u;
        // 0x16f798: 0x2471ff00  addiu       $s1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f794) {
            ctx->pc = 0x16F804u;
            goto label_16f804;
        }
    }
    ctx->pc = 0x16F79Cu;
    // 0x16f79c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x16f79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16f7a0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16F7A0u;
    {
        const bool branch_taken_0x16f7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7A0u;
        // 0x16f7a4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7a0) {
            ctx->pc = 0x16F804u;
            goto label_16f804;
        }
    }
    ctx->pc = 0x16F7A8u;
    // 0x16f7a8: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x16f7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x16f7ac: 0x24533a00  addiu       $s3, $v0, 0x3A00
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x16f7b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16f7b4: 0x0  nop
    ctx->pc = 0x16f7b4u;
    // NOP
label_16f7b8:
    // 0x16f7b8: 0x26843600  addiu       $a0, $s4, 0x3600
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 13824));
    // 0x16f7bc: 0x260300ff  addiu       $v1, $s0, 0xFF
    ctx->pc = 0x16f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    // 0x16f7c0: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x16f7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16f7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16f7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f7cc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x16f7ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x16f7d0: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x16f7d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x16f7d8: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16f7dc: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x16f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x16f7e0: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x16F7E0u;
    SET_GPR_U32(ctx, 31, 0x16F7E8u);
    ctx->pc = 0x16F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7E0u;
    // 0x16f7e4: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x16F7E0u, 0x16F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F7E8u;
label_16f7e8:
    // 0x16f7e8: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x16f7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x16f7ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F7ECu;
    {
        const bool branch_taken_0x16f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7ECu;
        // 0x16f7f0: 0x230182a  slt         $v1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7ec) {
            ctx->pc = 0x16F804u;
            goto label_16f804;
        }
    }
    ctx->pc = 0x16F7F4u;
    // 0x16f7f4: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F7F4u;
    {
        const bool branch_taken_0x16f7f4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x16f7f4) {
            ctx->pc = 0x16F804u;
            goto label_16f804;
        }
    }
    ctx->pc = 0x16F7FCu;
    // 0x16f7fc: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16F7FCu;
    {
        const bool branch_taken_0x16f7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f7fc) {
            ctx->pc = 0x16F800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F7FCu;
            // 0x16f800: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f7b8;
        }
    }
    ctx->pc = 0x16F804u;
label_16f804:
    // 0x16f804: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x16F804u;
    SET_GPR_U32(ctx, 31, 0x16F80Cu);
    ctx->pc = 0x16F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F804u;
    // 0x16f808: 0x8f849154  lw          $a0, -0x6EAC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x16F804u, 0x16F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F80Cu;
label_16f80c:
    // 0x16f80c: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f814: 0xc06b662  jal         func_1AD988
    ctx->pc = 0x16F814u;
    SET_GPR_U32(ctx, 31, 0x16F81Cu);
    ctx->pc = 0x16F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F814u;
    // 0x16f818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD988u, 0x16F814u, 0x16F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F81Cu;
label_16f81c:
    // 0x16f81c: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f820: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f824: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16F824u;
    SET_GPR_U32(ctx, 31, 0x16F82Cu);
    ctx->pc = 0x16F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F824u;
    // 0x16f828: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16F824u, 0x16F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F82Cu;
label_16f82c:
    // 0x16f82c: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f830: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16f834: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x16f834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f838: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16F838u;
    SET_GPR_U32(ctx, 31, 0x16F840u);
    ctx->pc = 0x16F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F838u;
    // 0x16f83c: 0x24467600  addiu       $a2, $v0, 0x7600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16F838u, 0x16F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F840u;
label_16f840:
    // 0x16f840: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f844: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x16f848: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x16f848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f84c: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16F84Cu;
    SET_GPR_U32(ctx, 31, 0x16F854u);
    ctx->pc = 0x16F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F84Cu;
    // 0x16f850: 0x24463600  addiu       $a2, $v0, 0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16F84Cu, 0x16F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F854u;
label_16f854:
    // 0x16f854: 0xc06b4d2  jal         func_1AD348
    ctx->pc = 0x16F854u;
    SET_GPR_U32(ctx, 31, 0x16F85Cu);
    ctx->pc = 0x16F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F854u;
    // 0x16f858: 0x8f849154  lw          $a0, -0x6EAC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD348u, 0x16F854u, 0x16F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F85Cu;
label_16f85c:
    // 0x16f85c: 0x32a24000  andi        $v0, $s5, 0x4000
    ctx->pc = 0x16f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16384);
    // 0x16f860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F860u;
    {
        const bool branch_taken_0x16f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F860u;
        // 0x16f864: 0x8f828b5c  lw          $v0, -0x74A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f860) {
            ctx->pc = 0x16F880u;
            goto label_16f880;
        }
    }
    ctx->pc = 0x16F868u;
    // 0x16f868: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x16f868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f86c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F86Cu;
    {
        const bool branch_taken_0x16f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F86Cu;
        // 0x16f870: 0x32a21000  andi        $v0, $s5, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f86c) {
            ctx->pc = 0x16F884u;
            goto label_16f884;
        }
    }
    ctx->pc = 0x16F874u;
    // 0x16f874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F874u;
    {
        const bool branch_taken_0x16f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F874u;
        // 0x16f878: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f874) {
            ctx->pc = 0x16F890u;
            goto label_16f890;
        }
    }
    ctx->pc = 0x16F87Cu;
    // 0x16f87c: 0x0  nop
    ctx->pc = 0x16f87cu;
    // NOP
label_16f880:
    // 0x16f880: 0x32a21000  andi        $v0, $s5, 0x1000
    ctx->pc = 0x16f880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_16f884:
    // 0x16f884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F884u;
    {
        const bool branch_taken_0x16f884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F884u;
        // 0x16f888: 0x16102a  slt         $v0, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f884) {
            ctx->pc = 0x16F890u;
            goto label_16f890;
        }
    }
    ctx->pc = 0x16F88Cu;
    // 0x16f88c: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x16f88cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_16f890:
    // 0x16f890: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x16f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x16f894: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16F894u;
    {
        const bool branch_taken_0x16f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f894) {
            ctx->pc = 0x16F8D0u;
            goto label_16f8d0;
        }
    }
    ctx->pc = 0x16F89Cu;
    // 0x16f89c: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16F89Cu;
    SET_GPR_U32(ctx, 31, 0x16F8A4u);
    ctx->pc = 0x16F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F89Cu;
    // 0x16f8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16F89Cu, 0x16F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8A4u;
label_16f8a4:
    // 0x16f8a4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x16f8a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x16f8ac: 0x2484bb60  addiu       $a0, $a0, -0x44A0
    ctx->pc = 0x16f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949728));
    // 0x16f8b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f8b4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16f8b8: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x16f8b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f8bc: 0xc06af1c  jal         func_1ABC70
    ctx->pc = 0x16F8BCu;
    SET_GPR_U32(ctx, 31, 0x16F8C4u);
    ctx->pc = 0x16F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8BCu;
    // 0x16f8c0: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC70u, 0x16F8BCu, 0x16F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8C4u;
label_16f8c4:
    // 0x16f8c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16F8C4u;
    {
        const bool branch_taken_0x16f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f8c4) {
            ctx->pc = 0x16F8F8u;
            goto label_16f8f8;
        }
    }
    ctx->pc = 0x16F8CCu;
    // 0x16f8cc: 0x0  nop
    ctx->pc = 0x16f8ccu;
    // NOP
label_16f8d0:
    // 0x16f8d0: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16F8D0u;
    SET_GPR_U32(ctx, 31, 0x16F8D8u);
    ctx->pc = 0x16F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8D0u;
    // 0x16f8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16F8D0u, 0x16F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8D8u;
label_16f8d8:
    // 0x16f8d8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x16f8dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x16f8e0: 0x2484ba70  addiu       $a0, $a0, -0x4590
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949488));
    // 0x16f8e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f8e8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16f8ec: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f8f0: 0xc06af1c  jal         func_1ABC70
    ctx->pc = 0x16F8F0u;
    SET_GPR_U32(ctx, 31, 0x16F8F8u);
    ctx->pc = 0x16F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8F0u;
    // 0x16f8f4: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC70u, 0x16F8F0u, 0x16F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8F8u;
label_16f8f8:
    // 0x16f8f8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x16F8F8u;
    SET_GPR_U32(ctx, 31, 0x16F900u);
    ctx->pc = 0x16F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8F8u;
    // 0x16f8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x16F8F8u, 0x16F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F900u;
label_16f900:
    // 0x16f900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f904: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16F904u;
    SET_GPR_U32(ctx, 31, 0x16F90Cu);
    ctx->pc = 0x16F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F904u;
    // 0x16f908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16F904u, 0x16F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F90Cu;
label_16f90c:
    // 0x16f90c: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x16F90Cu;
    {
        const bool branch_taken_0x16f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F90Cu;
        // 0x16f910: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f90c) {
            ctx->pc = 0x16F748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f748;
        }
    }
    ctx->pc = 0x16F914u;
}
