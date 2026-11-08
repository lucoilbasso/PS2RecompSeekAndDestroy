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

// Function: SetViewScreenClipMatrix__FPA3_fN20fffffffff
// Address: 0x187428 - 0x1875bc
void SetViewScreenClipMatrix__FPA3_fN20fffffffff_0x187428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewScreenClipMatrix__FPA3_fN20fffffffff_0x187428");
#endif

    switch (ctx->pc) {
        case 0x1874acu: goto label_1874ac;
        case 0x1874c0u: goto label_1874c0;
        case 0x187544u: goto label_187544;
        default: break;
    }

    ctx->pc = 0x187428u;

    // 0x187428: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x187428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18742c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x18742cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x187430: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x187430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187434: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x187438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x187438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18743c: 0xe7b90050  swc1        $f25, 0x50($sp)
    ctx->pc = 0x18743cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x187440: 0xe7b80048  swc1        $f24, 0x48($sp)
    ctx->pc = 0x187440u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x187444: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x187448: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x187448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x18744c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x187450: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x187450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x187454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x187454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x187458: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x187458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18745c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187460: 0xe7bf0080  swc1        $f31, 0x80($sp)
    ctx->pc = 0x187460u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x187464: 0x460087c6  mov.s       $f31, $f16
    ctx->pc = 0x187464u;
    ctx->f[31] = FPU_MOV_S(ctx->f[16]);
    // 0x187468: 0xe7be0078  swc1        $f30, 0x78($sp)
    ctx->pc = 0x187468u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x18746c: 0x46007f86  mov.s       $f30, $f15
    ctx->pc = 0x18746cu;
    ctx->f[30] = FPU_MOV_S(ctx->f[15]);
    // 0x187470: 0xe7bd0070  swc1        $f29, 0x70($sp)
    ctx->pc = 0x187470u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x187474: 0x46009746  mov.s       $f29, $f18
    ctx->pc = 0x187474u;
    ctx->f[29] = FPU_MOV_S(ctx->f[18]);
    // 0x187478: 0xe7bc0068  swc1        $f28, 0x68($sp)
    ctx->pc = 0x187478u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x18747c: 0xe7bb0060  swc1        $f27, 0x60($sp)
    ctx->pc = 0x18747cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x187480: 0x460076c6  mov.s       $f27, $f14
    ctx->pc = 0x187480u;
    ctx->f[27] = FPU_MOV_S(ctx->f[14]);
    // 0x187484: 0xe7ba0058  swc1        $f26, 0x58($sp)
    ctx->pc = 0x187484u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x187488: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x187488u;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x18748c: 0xe7b70040  swc1        $f23, 0x40($sp)
    ctx->pc = 0x18748cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x187490: 0x46008dc6  mov.s       $f23, $f17
    ctx->pc = 0x187490u;
    ctx->f[23] = FPU_MOV_S(ctx->f[17]);
    // 0x187494: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x187494u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x187498: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x187498u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x18749c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x18749cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1874a0: 0x46009d46  mov.s       $f21, $f19
    ctx->pc = 0x1874a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[19]);
    // 0x1874a4: 0xc06f07a  jal         func_1BC1E8
    ctx->pc = 0x1874A4u;
    SET_GPR_U32(ctx, 31, 0x1874ACu);
    ctx->pc = 0x1874A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874A4u;
    // 0x1874a8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC1E8u, 0x1874A4u, 0x1874ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874ACu;
label_1874ac:
    // 0x1874ac: 0x0  nop
    ctx->pc = 0x1874acu;
    // NOP
    // 0x1874b0: 0x0  nop
    ctx->pc = 0x1874b0u;
    // NOP
    // 0x1874b4: 0x461ac603  div.s       $f24, $f24, $f26
    ctx->pc = 0x1874b4u;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[24], ctx->f[26]); }
    // 0x1874b8: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x1874B8u;
    SET_GPR_U32(ctx, 31, 0x1874C0u);
    ctx->pc = 0x1874BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874B8u;
    // 0x1874bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x1874B8u, 0x1874C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874C0u;
label_1874c0:
    // 0x1874c0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1874c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1874c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1874c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1874c8: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x1874c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1874cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1874ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1874d0: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1874d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x1874d4: 0x4615a081  sub.s       $f2, $f20, $f21
    ctx->pc = 0x1874d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1874d8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1874d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1874dc: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x1874dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1874e0: 0xe61c002c  swc1        $f28, 0x2C($s0)
    ctx->pc = 0x1874e0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1874e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1874e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874e8: 0x0  nop
    ctx->pc = 0x1874e8u;
    // NOP
    // 0x1874ec: 0x0  nop
    ctx->pc = 0x1874ecu;
    // NOP
    // 0x1874f0: 0x461bce43  div.s       $f25, $f25, $f27
    ctx->pc = 0x1874f0u;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[25], ctx->f[27]); }
    // 0x1874f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1874f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1874f8: 0x4618d682  mul.s       $f26, $f26, $f24
    ctx->pc = 0x1874f8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[24]);
    // 0x1874fc: 0x0  nop
    ctx->pc = 0x1874fcu;
    // NOP
    // 0x187500: 0x0  nop
    ctx->pc = 0x187500u;
    // NOP
    // 0x187504: 0x4618b043  div.s       $f1, $f22, $f24
    ctx->pc = 0x187504u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[22], ctx->f[24]); }
    // 0x187508: 0x4619dec2  mul.s       $f27, $f27, $f25
    ctx->pc = 0x187508u;
    ctx->f[27] = FPU_MUL_S(ctx->f[27], ctx->f[25]);
    // 0x18750c: 0x0  nop
    ctx->pc = 0x18750cu;
    // NOP
    // 0x187510: 0x0  nop
    ctx->pc = 0x187510u;
    // NOP
    // 0x187514: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x187514u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x187518: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x187518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18751c: 0x0  nop
    ctx->pc = 0x18751cu;
    // NOP
    // 0x187520: 0x0  nop
    ctx->pc = 0x187520u;
    // NOP
    // 0x187524: 0x4602a503  div.s       $f20, $f20, $f2
    ctx->pc = 0x187524u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x187528: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x187528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x18752c: 0x0  nop
    ctx->pc = 0x18752cu;
    // NOP
    // 0x187530: 0x0  nop
    ctx->pc = 0x187530u;
    // NOP
    // 0x187534: 0x4619b583  div.s       $f22, $f22, $f25
    ctx->pc = 0x187534u;
    { if (ctx->f[25] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[22], ctx->f[25]); }
    // 0x187538: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x187538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x18753c: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x18753Cu;
    SET_GPR_U32(ctx, 31, 0x187544u);
    ctx->pc = 0x187540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18753Cu;
    // 0x187540: 0xe6160014  swc1        $f22, 0x14($s0) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x18753Cu, 0x187544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187544u;
label_187544:
    // 0x187544: 0x4617e800  add.s       $f0, $f29, $f23
    ctx->pc = 0x187544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[23]);
    // 0x187548: 0x461dbdc1  sub.s       $f23, $f23, $f29
    ctx->pc = 0x187548u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[29]);
    // 0x18754c: 0xc7bd0070  lwc1        $f29, 0x70($sp)
    ctx->pc = 0x18754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x187550: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x187554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x187554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187558: 0xe63c003c  swc1        $f28, 0x3C($s1)
    ctx->pc = 0x187558u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x18755c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18755cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x187560: 0xe63e0030  swc1        $f30, 0x30($s1)
    ctx->pc = 0x187560u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x187564: 0x4601bdc2  mul.s       $f23, $f23, $f1
    ctx->pc = 0x187564u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x187568: 0xe63a0000  swc1        $f26, 0x0($s1)
    ctx->pc = 0x187568u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18756c: 0xe63f0034  swc1        $f31, 0x34($s1)
    ctx->pc = 0x18756cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x187570: 0xe63b0014  swc1        $f27, 0x14($s1)
    ctx->pc = 0x187570u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x187574: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x187574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x187578: 0xe6370028  swc1        $f23, 0x28($s1)
    ctx->pc = 0x187578u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x18757c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18757cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187580: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x187580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187588: 0xc7bf0080  lwc1        $f31, 0x80($sp)
    ctx->pc = 0x187588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x18758c: 0xc7be0078  lwc1        $f30, 0x78($sp)
    ctx->pc = 0x18758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x187590: 0xc7bc0068  lwc1        $f28, 0x68($sp)
    ctx->pc = 0x187590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x187594: 0xc7bb0060  lwc1        $f27, 0x60($sp)
    ctx->pc = 0x187594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x187598: 0xc7ba0058  lwc1        $f26, 0x58($sp)
    ctx->pc = 0x187598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x18759c: 0xc7b90050  lwc1        $f25, 0x50($sp)
    ctx->pc = 0x18759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1875a0: 0xc7b80048  lwc1        $f24, 0x48($sp)
    ctx->pc = 0x1875a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1875a4: 0xc7b70040  lwc1        $f23, 0x40($sp)
    ctx->pc = 0x1875a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1875a8: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x1875a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1875ac: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x1875acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1875b0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1875b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1875b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1875B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1875B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875B4u;
        // 0x1875b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1875B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1875BCu;
}
