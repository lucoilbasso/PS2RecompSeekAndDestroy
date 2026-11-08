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

// Function: LoadPartsParameter__12ApTankWeaponi
// Address: 0x14dc68 - 0x14de00
void LoadPartsParameter__12ApTankWeaponi_0x14dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPartsParameter__12ApTankWeaponi_0x14dc68");
#endif

    switch (ctx->pc) {
        case 0x14dca4u: goto label_14dca4;
        case 0x14dcb0u: goto label_14dcb0;
        case 0x14dcbcu: goto label_14dcbc;
        case 0x14dcc8u: goto label_14dcc8;
        case 0x14dcd4u: goto label_14dcd4;
        case 0x14ddb0u: goto label_14ddb0;
        default: break;
    }

    ctx->pc = 0x14dc68u;

    // 0x14dc68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14dc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14dc6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14dc70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14dc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14dc78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14dc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14dc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14dc84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14dc88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14dc8c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14dc90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14dc94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x14dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x14dc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14dc9c: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DC9Cu;
    SET_GPR_U32(ctx, 31, 0x14DCA4u);
    ctx->pc = 0x14DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC9Cu;
    // 0x14dca0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DC9Cu, 0x14DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCA4u;
label_14dca4:
    // 0x14dca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dca8: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCA8u;
    SET_GPR_U32(ctx, 31, 0x14DCB0u);
    ctx->pc = 0x14DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCA8u;
    // 0x14dcac: 0x8c570010  lw          $s7, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCA8u, 0x14DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCB0u;
label_14dcb0:
    // 0x14dcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcb4: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCB4u;
    SET_GPR_U32(ctx, 31, 0x14DCBCu);
    ctx->pc = 0x14DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCB4u;
    // 0x14dcb8: 0x8c560014  lw          $s6, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCB4u, 0x14DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCBCu;
label_14dcbc:
    // 0x14dcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcc0: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCC0u;
    SET_GPR_U32(ctx, 31, 0x14DCC8u);
    ctx->pc = 0x14DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCC0u;
    // 0x14dcc4: 0x8c540018  lw          $s4, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCC0u, 0x14DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCC8u;
label_14dcc8:
    // 0x14dcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dccc: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCCCu;
    SET_GPR_U32(ctx, 31, 0x14DCD4u);
    ctx->pc = 0x14DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCCCu;
    // 0x14dcd0: 0x8c55001c  lw          $s5, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCCCu, 0x14DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCD4u;
label_14dcd4:
    // 0x14dcd4: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x14DCD4u;
    {
        const bool branch_taken_0x14dcd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCD4u;
        // 0x14dcd8: 0x8c520020  lw          $s2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcd4) {
            ctx->pc = 0x14DD10u;
            goto label_14dd10;
        }
    }
    ctx->pc = 0x14DCDCu;
    // 0x14dcdc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x14dcdcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14dce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14dce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dce4: 0xc78181cc  lwc1        $f1, -0x7E34($gp)
    ctx->pc = 0x14dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dce8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14dcec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14dcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14dcf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14dcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14dcf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14dcf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14dcf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dcf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14dcfc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14dcfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14dd00: 0x705310c8  pmaxw       $v0, $v0, $s3
    ctx->pc = 0x14dd00u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x14dd04: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14dd08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DD08u;
    {
        const bool branch_taken_0x14dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD08u;
        // 0x14dd0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd08) {
            ctx->pc = 0x14DD18u;
            goto label_14dd18;
        }
    }
    ctx->pc = 0x14DD10u;
label_14dd10:
    // 0x14dd10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14dd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14dd14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14dd18:
    // 0x14dd18: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x14DD18u;
    {
        const bool branch_taken_0x14dd18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD18u;
        // 0x14dd1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd18) {
            ctx->pc = 0x14DD58u;
            goto label_14dd58;
        }
    }
    ctx->pc = 0x14DD20u;
    // 0x14dd20: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x14dd20u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14dd24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14dd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dd28: 0xc78181d0  lwc1        $f1, -0x7E30($gp)
    ctx->pc = 0x14dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dd2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14dd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14dd30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14dd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14dd34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14dd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14dd38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14dd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14dd3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dd3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14dd40: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14dd40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14dd44: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14dd44u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14dd48: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14dd4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DD4Cu;
    {
        const bool branch_taken_0x14dd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD4Cu;
        // 0x14dd50: 0x2402030b  addiu       $v0, $zero, 0x30B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 779));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd4c) {
            ctx->pc = 0x14DD5Cu;
            goto label_14dd5c;
        }
    }
    ctx->pc = 0x14DD54u;
    // 0x14dd54: 0x0  nop
    ctx->pc = 0x14dd54u;
    // NOP
label_14dd58:
    // 0x14dd58: 0x2402030b  addiu       $v0, $zero, 0x30B
    ctx->pc = 0x14dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 779));
label_14dd5c:
    // 0x14dd5c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DD5Cu;
    {
        const bool branch_taken_0x14dd5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD5Cu;
        // 0x14dd60: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd5c) {
            ctx->pc = 0x14DD70u;
            goto label_14dd70;
        }
    }
    ctx->pc = 0x14DD64u;
    // 0x14dd64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14DD64u;
    {
        const bool branch_taken_0x14dd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD64u;
        // 0x14dd68: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd64) {
            ctx->pc = 0x14DDA0u;
            goto label_14dda0;
        }
    }
    ctx->pc = 0x14DD6Cu;
    // 0x14dd6c: 0x0  nop
    ctx->pc = 0x14dd6cu;
    // NOP
label_14dd70:
    // 0x14dd70: 0x2402030a  addiu       $v0, $zero, 0x30A
    ctx->pc = 0x14dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x14dd74: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DD74u;
    {
        const bool branch_taken_0x14dd74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD74u;
        // 0x14dd78: 0x24030309  addiu       $v1, $zero, 0x309 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd74) {
            ctx->pc = 0x14DD88u;
            goto label_14dd88;
        }
    }
    ctx->pc = 0x14DD7Cu;
    // 0x14dd7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DD7Cu;
    {
        const bool branch_taken_0x14dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD7Cu;
        // 0x14dd80: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd7c) {
            ctx->pc = 0x14DDA0u;
            goto label_14dda0;
        }
    }
    ctx->pc = 0x14DD84u;
    // 0x14dd84: 0x0  nop
    ctx->pc = 0x14dd84u;
    // NOP
label_14dd88:
    // 0x14dd88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dd8c: 0x3a040201  xori        $a0, $s0, 0x201
    ctx->pc = 0x14dd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)513);
    // 0x14dd90: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x14dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x14dd94: 0xa4980a  movz        $s3, $a1, $a0
    ctx->pc = 0x14dd94u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x14dd98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dd9c: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x14dd9cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_14dda0:
    // 0x14dda0: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x14dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
    // 0x14dda4: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x14dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x14dda8: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14DDA8u;
    SET_GPR_U32(ctx, 31, 0x14DDB0u);
    ctx->pc = 0x14DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDA8u;
    // 0x14ddac: 0xae360018  sw          $s6, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14DDA8u, 0x14DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDB0u;
label_14ddb0:
    // 0x14ddb0: 0xae350020  sw          $s5, 0x20($s1)
    ctx->pc = 0x14ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
    // 0x14ddb4: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x14ddb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x14ddb8: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x14ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    // 0x14ddbc: 0xae340028  sw          $s4, 0x28($s1)
    ctx->pc = 0x14ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
    // 0x14ddc0: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x14ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
    // 0x14ddc4: 0xae350030  sw          $s5, 0x30($s1)
    ctx->pc = 0x14ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 21));
    // 0x14ddc8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x14ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x14ddcc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x14ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x14ddd0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x14ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x14ddd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ddd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ddd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ddd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14dddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14dddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dde0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14dde0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14dde4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14dde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dde8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14dde8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ddec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14ddecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ddf0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x14ddf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14ddf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDF8u;
        // 0x14ddfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DE00u;
}
