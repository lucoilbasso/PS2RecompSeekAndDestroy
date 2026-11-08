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

// Function: EffectRainInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x1257c8 - 0x125ad4
void EffectRainInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1257c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectRainInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1257c8");
#endif

    switch (ctx->pc) {
        case 0x125808u: goto label_125808;
        case 0x125824u: goto label_125824;
        case 0x125890u: goto label_125890;
        case 0x125908u: goto label_125908;
        case 0x125978u: goto label_125978;
        case 0x1259c4u: goto label_1259c4;
        case 0x125a50u: goto label_125a50;
        default: break;
    }

    ctx->pc = 0x1257c8u;

    // 0x1257c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1257cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1257ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1257d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1257d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1257d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1257d8: 0x249201b0  addiu       $s2, $a0, 0x1B0
    ctx->pc = 0x1257d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1257dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1257dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1257e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1257e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257e4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1257e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1257e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1257e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1257ec: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x1257ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1257f0: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x1257f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1257f4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1257F4u;
    {
        const bool branch_taken_0x1257f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F4u;
        // 0x1257f8: 0xe7b40048  swc1        $f20, 0x48($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257f4) {
            ctx->pc = 0x125800u;
            goto label_125800;
        }
    }
    ctx->pc = 0x1257FCu;
    // 0x1257fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1257fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125800:
    // 0x125800: 0xc068086  jal         func_1A0218
    ctx->pc = 0x125800u;
    SET_GPR_U32(ctx, 31, 0x125808u);
    ctx->pc = 0x125804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125800u;
    // 0x125804: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x125800u, 0x125808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125808u;
label_125808:
    // 0x125808: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125808u;
    {
        const bool branch_taken_0x125808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125808u;
        // 0x12580c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125808) {
            ctx->pc = 0x125824u;
            goto label_125824;
        }
    }
    ctx->pc = 0x125810u;
    // 0x125810: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x125810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x125814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125818: 0x24a55d00  addiu       $a1, $a1, 0x5D00
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23808));
    // 0x12581c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12581Cu;
    SET_GPR_U32(ctx, 31, 0x125824u);
    ctx->pc = 0x125820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12581Cu;
    // 0x125820: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12581Cu, 0x125824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125824u;
label_125824:
    // 0x125824: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x125824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x125828: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12582c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x12582cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x125830: 0x24425d10  addiu       $v0, $v0, 0x5D10
    ctx->pc = 0x125830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x125834: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x125838: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12583c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x12583cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255D10u));
    // 0x125840: 0x24635d20  addiu       $v1, $v1, 0x5D20
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23840));
    // 0x125844: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x125844u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x255D18u));
    // 0x125848: 0x3c022022  lui         $v0, 0x2022
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8226 << 16));
    // 0x12584c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x12584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x125850: 0x24930ad0  addiu       $s3, $a0, 0xAD0
    ctx->pc = 0x125850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 2768));
    // 0x125854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125858: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x125858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12585c: 0x2447f640  addiu       $a3, $v0, -0x9C0
    ctx->pc = 0x12585cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x125860: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255D28u));
    // 0x125864: 0x24081999  addiu       $t0, $zero, 0x1999
    ctx->pc = 0x125864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6553));
    // 0x125868: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x125868u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x255D20u));
    // 0x12586c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x12586cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125870: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x125870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x125874: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x125874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125878: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x125878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12587c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x12587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x125880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125884: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x125884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x125888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12588c: 0x0  nop
    ctx->pc = 0x12588cu;
    // NOP
label_125890:
    // 0x125890: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x125890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x125894: 0x24c22000  addiu       $v0, $a2, 0x2000
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8192));
    // 0x125898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12589c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x12589cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1258a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1258a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1258a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1258a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1258a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1258ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1258b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1258b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1258b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1258b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1258b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1258bc: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1258bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1258c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1258c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1258c4: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x1258c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1258c8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1258cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1258ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1258d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1258d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1258d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1258d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1258d8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1258D8u;
    {
        const bool branch_taken_0x1258d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1258DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D8u;
        // 0x1258dc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258d8) {
            ctx->pc = 0x125890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125890;
        }
    }
    ctx->pc = 0x1258E0u;
    // 0x1258e0: 0x3c022022  lui         $v0, 0x2022
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8226 << 16));
    // 0x1258e4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1258e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1258e8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1258e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1258ec: 0x2446f640  addiu       $a2, $v0, -0x9C0
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x1258f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1258f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1258f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1258f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1258f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258fc: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1258fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x125900: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125904: 0x0  nop
    ctx->pc = 0x125904u;
    // NOP
label_125908:
    // 0x125908: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x125908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x12590c: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x12590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x125910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x125914: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x125914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x125918: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12591c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125920: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x125920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125924: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x125928: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x125928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12592c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x12592cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x125930: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x125930u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x125934: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x125934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x125938: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x125938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12593c: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x12593cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x125940: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x125944: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125948: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x125948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12594c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x12594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x125950: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x125950u;
    {
        const bool branch_taken_0x125950 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x125954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125950u;
        // 0x125954: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125950) {
            ctx->pc = 0x125908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125908;
        }
    }
    ctx->pc = 0x125958u;
    // 0x125958: 0x3c014196  lui         $at, 0x4196
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16790 << 16));
    // 0x12595c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12595cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x125960: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x125960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125964: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x125968: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x125968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12596c: 0xc79680e4  lwc1        $f22, -0x7F1C($gp)
    ctx->pc = 0x12596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125970: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125974: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x125974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_125978:
    // 0x125978: 0x26250007  addiu       $a1, $s1, 0x7
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x12597c: 0x2a230000  slti        $v1, $s1, 0x0
    ctx->pc = 0x12597cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x125980: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x125980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125984: 0x24043a98  addiu       $a0, $zero, 0x3A98
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
    // 0x125988: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x125988u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x12598c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x125990: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x125994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x125994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125998: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x125998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12599c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1259a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1259a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1259a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1259a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1259a8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1259a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1259ac: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1259acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1259b0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1259b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1259b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1259b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1259b8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1259b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1259bc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1259BCu;
    SET_GPR_U32(ctx, 31, 0x1259C4u);
    ctx->pc = 0x1259C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1259BCu;
    // 0x1259c0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1259BCu, 0x1259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259C4u;
label_1259c4:
    // 0x1259c4: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x1259c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x1259c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1259c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1259cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1259ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1259d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1259d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1259d8: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1259dc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1259dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1259e0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1259e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1259e4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1259E4u;
    {
        const bool branch_taken_0x1259e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1259E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259E4u;
        // 0x1259e8: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259e4) {
            ctx->pc = 0x125A00u;
            goto label_125a00;
        }
    }
    ctx->pc = 0x1259ECu;
    // 0x1259ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1259ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1259f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1259f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1259f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1259F4u;
    {
        const bool branch_taken_0x1259f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259F4u;
        // 0x1259f8: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259f4) {
            ctx->pc = 0x125A10u;
            goto label_125a10;
        }
    }
    ctx->pc = 0x1259FCu;
    // 0x1259fc: 0x0  nop
    ctx->pc = 0x1259fcu;
    // NOP
label_125a00:
    // 0x125a00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125a08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x125a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x125a0c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x125a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_125a10:
    // 0x125a10: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x125a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x125a14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x125a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x125a18: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x125a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x125a1c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x125a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125a20: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x125a20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x125a24: 0x232001a  div         $zero, $s1, $s2
    ctx->pc = 0x125a24u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x125a28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x125a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x125a2c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x125A2Cu;
    {
        const bool branch_taken_0x125a2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a2c) {
            ctx->pc = 0x125A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A2Cu;
            // 0x125a30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A34u;
            goto label_125a34;
        }
    }
    ctx->pc = 0x125A34u;
label_125a34:
    // 0x125a34: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x125a38: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x125a3c: 0x1810  mfhi        $v1
    ctx->pc = 0x125a3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x125a40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x125a44: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x125a48: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x125A48u;
    SET_GPR_U32(ctx, 31, 0x125A50u);
    ctx->pc = 0x125A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A48u;
    // 0x125a4c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x125A48u, 0x125A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A50u;
label_125a50:
    // 0x125a50: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x125a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x125a60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125a64: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x125a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x125a68: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x125a6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x125a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x125a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a74: 0x2a250040  slti        $a1, $s1, 0x40
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x125a78: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125A78u;
    {
        const bool branch_taken_0x125a78 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x125A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A78u;
        // 0x125a7c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a78) {
            ctx->pc = 0x125A90u;
            goto label_125a90;
        }
    }
    ctx->pc = 0x125A80u;
    // 0x125a80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x125a80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A88u;
        // 0x125a8c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125AA0u;
            goto label_125aa0;
        }
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125a98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x125a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x125a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x125a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_125aa0:
    // 0x125aa0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x125aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x125aa4: 0x14a0ffb4  bnez        $a1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x125AA4u;
    {
        const bool branch_taken_0x125aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AA4u;
        // 0x125aa8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125aa4) {
            ctx->pc = 0x125978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125978;
        }
    }
    ctx->pc = 0x125AACu;
    // 0x125aac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125ab0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x125ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125ab4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125ab8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x125ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125ac0: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x125ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125ac4: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x125ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x125ac8: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x125ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125acc: 0x3e00008  jr          $ra
    ctx->pc = 0x125ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125ACCu;
        // 0x125ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125AD4u;
}
