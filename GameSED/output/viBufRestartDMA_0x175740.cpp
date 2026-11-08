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

// Function: viBufRestartDMA
// Address: 0x175740 - 0x175a68
void viBufRestartDMA_0x175740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufRestartDMA_0x175740");
#endif

    switch (ctx->pc) {
        case 0x1757acu: goto label_1757ac;
        case 0x175870u: goto label_175870;
        case 0x175880u: goto label_175880;
        case 0x175984u: goto label_175984;
        case 0x175998u: goto label_175998;
        case 0x1759c8u: goto label_1759c8;
        case 0x175a1cu: goto label_175a1c;
        case 0x175a3cu: goto label_175a3c;
        default: break;
    }

    ctx->pc = 0x175740u;

    // 0x175740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17574c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175750: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x175750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175754: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x175754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x175758: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x175758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17575c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175760: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175764: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x175764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x175768: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17576c: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x175770: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x175770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x175774: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x175774u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x175778: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x175778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17577c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x17577cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x175780: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175784: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x175784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x175788: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x175788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17578c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17578cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175790: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x175790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x175794: 0x1029023  subu        $s2, $t0, $v0
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x175798: 0x30b6007f  andi        $s6, $a1, 0x7F
    ctx->pc = 0x175798u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x17579c: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x17579cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1757a0: 0x34f30100  ori         $s3, $a3, 0x100
    ctx->pc = 0x1757a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)256);
    // 0x1757a4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1757A4u;
    SET_GPR_U32(ctx, 31, 0x1757ACu);
    ctx->pc = 0x1757A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1757A4u;
    // 0x1757a8: 0x8e140020  lw          $s4, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1757A4u, 0x1757ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757ACu;
label_1757ac:
    // 0x1757ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1757b0: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x1757b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1757b4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1757B4u;
    {
        const bool branch_taken_0x1757b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757b4) {
            ctx->pc = 0x1757B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1757B4u;
            // 0x1757b8: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175868u;
            goto label_175868;
        }
    }
    ctx->pc = 0x1757BCu;
    // 0x1757bc: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1757bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1757c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1757c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1757c8: 0xb21823  subu        $v1, $a1, $s2
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1757cc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1757ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1757d0: 0x83ac0  sll         $a3, $t0, 11
    ctx->pc = 0x1757d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 11));
    // 0x1757d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1757d8: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x1757d8u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1757dc: 0x82a024  and         $s4, $a0, $v0
    ctx->pc = 0x1757dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1757e0: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1757E0u;
    {
        const bool branch_taken_0x1757e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1757E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757E0u;
        // 0x1757e4: 0x2479021  addu        $s2, $s2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757e0) {
            ctx->pc = 0x1757F4u;
            goto label_1757f4;
        }
    }
    ctx->pc = 0x1757E8u;
    // 0x1757e8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1757e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1757ec: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1757ECu;
    {
        const bool branch_taken_0x1757ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1757F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757ECu;
        // 0x1757f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757ec) {
            ctx->pc = 0x1757F8u;
            goto label_1757f8;
        }
    }
    ctx->pc = 0x1757F4u;
label_1757f4:
    // 0x1757f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1757f8:
    // 0x1757f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1757fc: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x1757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x175800: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x175800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x175804: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x175804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x175808: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17580c: 0x52f00  sll         $a1, $a1, 28
    ctx->pc = 0x17580cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x175810: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x175810u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175814: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x175818: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17581c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17581Cu;
    {
        const bool branch_taken_0x17581c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x17581c) {
            ctx->pc = 0x175820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17581Cu;
            // 0x175820: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175824u;
            goto label_175824;
        }
    }
    ctx->pc = 0x175824u;
label_175824:
    // 0x175824: 0x1010  mfhi        $v0
    ctx->pc = 0x175824u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175828: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x175828u;
    {
        const bool branch_taken_0x175828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175828u;
        // 0x17582c: 0x34730100  ori         $s3, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175828) {
            ctx->pc = 0x175850u;
            goto label_175850;
        }
    }
    ctx->pc = 0x175830u;
    // 0x175830: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175830u;
    {
        const bool branch_taken_0x175830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x175830) {
            ctx->pc = 0x175834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175830u;
            // 0x175834: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175838u;
            goto label_175838;
        }
    }
    ctx->pc = 0x175838u;
label_175838:
    // 0x175838: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x175838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17583c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17583cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175840: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x175840u;
    {
        const bool branch_taken_0x175840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175840) {
            ctx->pc = 0x175844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175840u;
            // 0x175844: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17594Cu;
            goto label_17594c;
        }
    }
    ctx->pc = 0x175848u;
    // 0x175848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175848u;
    {
        const bool branch_taken_0x175848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175848u;
        // 0x17584c: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175848) {
            ctx->pc = 0x175858u;
            goto label_175858;
        }
    }
    ctx->pc = 0x175850u;
label_175850:
    // 0x175850: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175854: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_175858:
    // 0x175858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17585c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x175860: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x175860u;
    {
        const bool branch_taken_0x175860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175860u;
        // 0x175864: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175860) {
            ctx->pc = 0x175948u;
            goto label_175948;
        }
    }
    ctx->pc = 0x175868u;
label_175868:
    // 0x175868: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x175868u;
    SET_GPR_U32(ctx, 31, 0x175870u);
    ctx->pc = 0x17586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175868u;
    // 0x17586c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FF0u, 0x175868u, 0x175870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175870u;
label_175870:
    // 0x175870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175874: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175878: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x175878u;
    SET_GPR_U32(ctx, 31, 0x175880u);
    ctx->pc = 0x17587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175878u;
    // 0x17587c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FF0u, 0x175878u, 0x175880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175880u;
label_175880:
    // 0x175880: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x175880u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175884: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x175884u;
    {
        const bool branch_taken_0x175884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x175888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175884u;
        // 0x175888: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175884) {
            ctx->pc = 0x175948u;
            goto label_175948;
        }
    }
    ctx->pc = 0x17588Cu;
    // 0x17588c: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x175890: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175894: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175898: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17589c: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x1758a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1758A0u;
    {
        const bool branch_taken_0x1758a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758a0) {
            ctx->pc = 0x1758A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1758A0u;
            // 0x1758a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1758A8u;
            goto label_1758a8;
        }
    }
    ctx->pc = 0x1758A8u;
label_1758a8:
    // 0x1758a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1758ac: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1758acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1758b0: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x1758b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1758b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1758b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1758b8: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1758bc: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x1758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1758c0: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x1758c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1758c4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1758c8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1758cc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1758ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1758d0: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1758d4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1758d8: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x1758d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x1758dc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1758e0: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1758e4: 0x3010  mfhi        $a2
    ctx->pc = 0x1758e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1758e8: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x1758e8u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1758ec: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1758ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1758f0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1758f4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1758f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1758f8: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x1758f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1758fc: 0x3810  mfhi        $a3
    ctx->pc = 0x1758fcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x175900: 0xac001a  div         $zero, $a1, $t4
    ctx->pc = 0x175900u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175904: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x175904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x175908: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x175908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17590c: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x17590cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
    // 0x175910: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x175910u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x175914: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x175918: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x175918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x17591c: 0x1010  mfhi        $v0
    ctx->pc = 0x17591cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175920: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175920u;
    {
        const bool branch_taken_0x175920 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x175924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175920u;
        // 0x175924: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175920) {
            ctx->pc = 0x17593Cu;
            goto label_17593c;
        }
    }
    ctx->pc = 0x175928u;
    // 0x175928: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x17592c: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17592Cu;
    {
        const bool branch_taken_0x17592c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x17592c) {
            ctx->pc = 0x175930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17592Cu;
            // 0x175930: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175934u;
label_175934:
    // 0x175934: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x175934u;
    {
        const bool branch_taken_0x175934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175934) {
            ctx->pc = 0x175938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175934u;
            // 0x175938: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17594Cu;
            goto label_17594c;
        }
    }
    ctx->pc = 0x17593Cu;
label_17593c:
    // 0x17593c: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x17593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x175940: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x175940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x175944: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x175944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_175948:
    // 0x175948: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x175948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17594c:
    // 0x17594c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17594Cu;
    {
        const bool branch_taken_0x17594c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17594c) {
            ctx->pc = 0x175950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17594Cu;
            // 0x175950: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175988u;
            goto label_175988;
        }
    }
    ctx->pc = 0x175954u;
    // 0x175954: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x175958: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x175958u;
    {
        const bool branch_taken_0x175958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175958u;
        // 0x17595c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175958) {
            ctx->pc = 0x175984u;
            goto label_175984;
        }
    }
    ctx->pc = 0x175960u;
    // 0x175960: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x175964: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x175964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x175968: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x175968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x17596c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17596cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x175970: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x175974: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x175974u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x175978: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x175978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17597c: 0xc05d40c  jal         func_175030
    ctx->pc = 0x17597Cu;
    SET_GPR_U32(ctx, 31, 0x175984u);
    ctx->pc = 0x175980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17597Cu;
    // 0x175980: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175030u, 0x17597Cu, 0x175984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175984u;
label_175984:
    // 0x175984: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x175984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_175988:
    // 0x175988: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x175988u;
    {
        const bool branch_taken_0x175988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175988u;
        // 0x17598c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175988) {
            ctx->pc = 0x1759E4u;
            goto label_1759e4;
        }
    }
    ctx->pc = 0x175990u;
    // 0x175990: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x175990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x175994: 0x0  nop
    ctx->pc = 0x175994u;
    // NOP
label_175998:
    // 0x175998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17599c: 0x0  nop
    ctx->pc = 0x17599cu;
    // NOP
    // 0x1759a0: 0x0  nop
    ctx->pc = 0x1759a0u;
    // NOP
    // 0x1759a4: 0x0  nop
    ctx->pc = 0x1759a4u;
    // NOP
    // 0x1759a8: 0x0  nop
    ctx->pc = 0x1759a8u;
    // NOP
    // 0x1759ac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1759ACu;
    {
        const bool branch_taken_0x1759ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1759B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759ACu;
        // 0x1759b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759ac) {
            ctx->pc = 0x175998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175998;
        }
    }
    ctx->pc = 0x1759B4u;
    // 0x1759b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1759b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1759b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1759bc: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1759bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1759c0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1759c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1759c4: 0x0  nop
    ctx->pc = 0x1759c4u;
    // NOP
label_1759c8:
    // 0x1759c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1759cc: 0x0  nop
    ctx->pc = 0x1759ccu;
    // NOP
    // 0x1759d0: 0x0  nop
    ctx->pc = 0x1759d0u;
    // NOP
    // 0x1759d4: 0x0  nop
    ctx->pc = 0x1759d4u;
    // NOP
    // 0x1759d8: 0x0  nop
    ctx->pc = 0x1759d8u;
    // NOP
    // 0x1759dc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1759DCu;
    {
        const bool branch_taken_0x1759dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1759dc) {
            ctx->pc = 0x1759C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1759c8;
        }
    }
    ctx->pc = 0x1759E4u;
label_1759e4:
    // 0x1759e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1759e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1759e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1759ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1759f0: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1759f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1759f4: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x1759f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x1759f8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1759f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1759fc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1759fcu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 18));
    // 0x175a00: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x175a00u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 20));
    // 0x175a04: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x175a04u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 21));
    // 0x175a08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x175a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175a0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x175A0Cu;
    {
        const bool branch_taken_0x175a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a0c) {
            ctx->pc = 0x175A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175A0Cu;
            // 0x175a10: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175A20u;
            goto label_175a20;
        }
    }
    ctx->pc = 0x175A14u;
    // 0x175a14: 0xc05d426  jal         func_175098
    ctx->pc = 0x175A14u;
    SET_GPR_U32(ctx, 31, 0x175A1Cu);
    ctx->pc = 0x175A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A14u;
    // 0x175a18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x175A14u, 0x175A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A1Cu;
label_175a1c:
    // 0x175a1c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_175a20:
    // 0x175a20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x175a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x175a24: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x175a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x175a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x175a2cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2));
    // 0x175a30: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x175a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x175a34: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175A34u;
    SET_GPR_U32(ctx, 31, 0x175A3Cu);
    ctx->pc = 0x175A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A34u;
    // 0x175a38: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175A34u, 0x175A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A3Cu;
label_175a3c:
    // 0x175a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x175a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175a50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x175a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175a54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x175a54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175a58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x175a58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175a5c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x175a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x175a60: 0x3e00008  jr          $ra
    ctx->pc = 0x175A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A60u;
        // 0x175a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A68u;
}
