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

// Function: entry_001110b0
// Address: 0x1110b0 - 0x111258
void entry_001110b0_0x1110b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001110b0_0x1110b0");
#endif

    switch (ctx->pc) {
        case 0x1110fcu: goto label_1110fc;
        case 0x11112cu: goto label_11112c;
        case 0x11115cu: goto label_11115c;
        case 0x1111c8u: goto label_1111c8;
        case 0x1111d8u: goto label_1111d8;
        case 0x1111e8u: goto label_1111e8;
        case 0x111210u: goto label_111210;
        case 0x11121cu: goto label_11121c;
        case 0x11123cu: goto label_11123c;
        default: break;
    }

    ctx->pc = 0x1110b0u;

    // 0x1110b0: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x1110b4: 0x50400115  beql        $v0, $zero, . + 4 + (0x115 << 2)
    ctx->pc = 0x1110B4u;
    {
        const bool branch_taken_0x1110b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110b4) {
            ctx->pc = 0x1110B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1110B4u;
            // 0x1110b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1110BCu;
    // 0x1110bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1110c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1110c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1110c8: 0x8c633f90  lw          $v1, 0x3F90($v1)
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16272)));
    // 0x1110cc: 0x600008  jr          $v1
    ctx->pc = 0x1110CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1110D8u: goto label_1110d8;
            case 0x111108u: goto label_111108;
            case 0x111138u: goto label_111138;
            case 0x111168u: goto label_111168;
            case 0x111178u: goto label_111178;
            case 0x111188u: goto label_111188;
            case 0x1111A8u: goto label_1111a8;
            case 0x1111E0u: goto label_1111e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1110CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1110D4u;
    // 0x1110d4: 0x0  nop
    ctx->pc = 0x1110d4u;
    // NOP
label_1110d8:
    // 0x1110d8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1110d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1110dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1110e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1110e4: 0x50640109  beql        $v1, $a0, . + 4 + (0x109 << 2)
    ctx->pc = 0x1110E4u;
    {
        const bool branch_taken_0x1110e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1110e4) {
            ctx->pc = 0x1110E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1110E4u;
            // 0x1110e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1110ECu;
    // 0x1110ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1110ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1110f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f4: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1110F4u;
    SET_GPR_U32(ctx, 31, 0x1110FCu);
    ctx->pc = 0x1110F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110F4u;
    // 0x1110f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1110F4u, 0x1110FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110FCu;
label_1110fc:
    // 0x1110fc: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1110FCu;
    {
        const bool branch_taken_0x1110fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110FCu;
        // 0x111100: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110fc) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111104u;
    // 0x111104: 0x0  nop
    ctx->pc = 0x111104u;
    // NOP
label_111108:
    // 0x111108: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11110c: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x11110cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x111110: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111118: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x11111c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111124: 0xc0442a8  jal         func_110AA0
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x111128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111124u;
    // 0x111128: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AA0u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x11112Cu;
    {
        const bool branch_taken_0x11112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11112Cu;
        // 0x111130: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11112c) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111134u;
    // 0x111134: 0x0  nop
    ctx->pc = 0x111134u;
    // NOP
label_111138:
    // 0x111138: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x111138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11113c: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x11113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x111140: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111148: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x11114c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111150: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111154: 0xc04425e  jal         func_110978
    ctx->pc = 0x111154u;
    SET_GPR_U32(ctx, 31, 0x11115Cu);
    ctx->pc = 0x111158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111154u;
    // 0x111158: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x111154u, 0x11115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11115Cu;
label_11115c:
    // 0x11115c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111164u;
    // 0x111164: 0x0  nop
    ctx->pc = 0x111164u;
    // NOP
label_111168:
    // 0x111168: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x111168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11116c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x11116cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111170: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x111170u;
    {
        const bool branch_taken_0x111170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111170u;
        // 0x111174: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111170) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111178u;
label_111178:
    // 0x111178: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x111178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11117c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x11117cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x111180: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x111180u;
    {
        const bool branch_taken_0x111180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111180u;
        // 0x111184: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111180) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111188u;
label_111188:
    // 0x111188: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x111188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11118c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x111190: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x111190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x111194: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111194u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111198: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x111198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11119c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x11119cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x1111a0: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1111A0u;
    {
        const bool branch_taken_0x1111a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111A0u;
        // 0x1111a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111a0) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1111A8u;
label_1111a8:
    // 0x1111a8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1111ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1111acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1111b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1111b4: 0x106400d5  beq         $v1, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1111B4u;
    {
        const bool branch_taken_0x1111b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1111B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111B4u;
        // 0x1111b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111b4) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1111BCu;
    // 0x1111bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1111bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111c0: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x1111C0u;
    SET_GPR_U32(ctx, 31, 0x1111C8u);
    ctx->pc = 0x1111C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111C0u;
    // 0x1111c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x1111C0u, 0x1111C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111C8u;
label_1111c8:
    // 0x1111c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1111c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1111ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111d0: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1111D0u;
    SET_GPR_U32(ctx, 31, 0x1111D8u);
    ctx->pc = 0x1111D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111D0u;
    // 0x1111d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1111D0u, 0x1111D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111D8u;
label_1111d8:
    // 0x1111d8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1111D8u;
    {
        const bool branch_taken_0x1111d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D8u;
        // 0x1111dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d8) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1111E0u;
label_1111e0:
    // 0x1111e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1111E0u;
    SET_GPR_U32(ctx, 31, 0x1111E8u);
    ctx->pc = 0x1111E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111E0u;
    // 0x1111e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1111E0u, 0x1111E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111E8u;
label_1111e8:
    // 0x1111e8: 0x12a00073  beqz        $s5, . + 4 + (0x73 << 2)
    ctx->pc = 0x1111E8u;
    {
        const bool branch_taken_0x1111e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111E8u;
        // 0x1111ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111e8) {
            ctx->pc = 0x1113B8u;
            return;
        }
    }
    ctx->pc = 0x1111F0u;
    // 0x1111f0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x1111f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1111f4: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x1111f8: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1111F8u;
    {
        const bool branch_taken_0x1111f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1111f8) {
            ctx->pc = 0x1111FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1111F8u;
            // 0x1111fc: 0x24022846  addiu       $v0, $zero, 0x2846 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1112D0u;
            return;
        }
    }
    ctx->pc = 0x111200u;
    // 0x111200: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111208: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x111208u;
    SET_GPR_U32(ctx, 31, 0x111210u);
    ctx->pc = 0x11120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111208u;
    // 0x11120c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x111208u, 0x111210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111210u;
label_111210:
    // 0x111210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111214: 0xc04171a  jal         func_105C68
    ctx->pc = 0x111214u;
    SET_GPR_U32(ctx, 31, 0x11121Cu);
    ctx->pc = 0x111218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111214u;
    // 0x111218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x111214u, 0x11121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11121Cu;
    {
        const bool branch_taken_0x11121c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11121Cu;
        // 0x111220: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11121c) {
            ctx->pc = 0x111290u;
            return;
        }
    }
    ctx->pc = 0x111224u;
    // 0x111224: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111228: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11122c: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11122Cu;
    {
        const bool branch_taken_0x11122c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x111230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11122Cu;
        // 0x111230: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11122c) {
            ctx->pc = 0x11127Cu;
            return;
        }
    }
    ctx->pc = 0x111234u;
    // 0x111234: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111234u;
    SET_GPR_U32(ctx, 31, 0x11123Cu);
    ctx->pc = 0x111238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111234u;
    // 0x111238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111234u, 0x11123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11123Cu;
label_11123c:
    // 0x11123c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11123cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111240: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111244: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111248: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111248u;
    {
        const bool branch_taken_0x111248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111248u;
        // 0x11124c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111248) {
            ctx->pc = 0x111278u;
            return;
        }
    }
    ctx->pc = 0x111250u;
    // 0x111250: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x111250u;
    {
        const bool branch_taken_0x111250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111250u;
        // 0x111254: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111250) {
            ctx->pc = 0x111274u;
            return;
        }
    }
    ctx->pc = 0x111258u;
}
