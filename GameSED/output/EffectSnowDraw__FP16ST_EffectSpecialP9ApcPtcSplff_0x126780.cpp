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

// Function: EffectSnowDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x126780 - 0x126c58
void EffectSnowDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x126780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSnowDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x126780");
#endif

    switch (ctx->pc) {
        case 0x126808u: goto label_126808;
        case 0x126818u: goto label_126818;
        case 0x12684cu: goto label_12684c;
        case 0x126884u: goto label_126884;
        case 0x1268a0u: goto label_1268a0;
        case 0x126920u: goto label_126920;
        case 0x126928u: goto label_126928;
        case 0x12694cu: goto label_12694c;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b78u: goto label_126b78;
        case 0x126b98u: goto label_126b98;
        case 0x126ba0u: goto label_126ba0;
        case 0x126bc4u: goto label_126bc4;
        default: break;
    }

    ctx->pc = 0x126780u;

    // 0x126780: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x126780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x126784: 0x2402ffa0  addiu       $v0, $zero, -0x60
    ctx->pc = 0x126784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967200));
    // 0x126788: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x126788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x12678c: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x12678cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x126790: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x126790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x126794: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x126794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x126798: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x126798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x12679c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x12679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1267a0: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x1267a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x1267a4: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x1267a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267a8: 0xa3a30083  sb          $v1, 0x83($sp)
    ctx->pc = 0x1267a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1267ac: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x1267acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x1267b0: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x1267b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267b4: 0xa3a20081  sb          $v0, 0x81($sp)
    ctx->pc = 0x1267b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267b8: 0xc79680fc  lwc1        $f22, -0x7F04($gp)
    ctx->pc = 0x1267b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1267bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1267bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1267c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1267c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1267c4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1267c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1267c8: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1267c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1267cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1267ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267d0: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1267d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1267d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1267d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267d8: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1267d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1267dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1267dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267e0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1267e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1267e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1267e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267e8: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1267e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1267ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1267ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267f0: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x1267f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x1267f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1267f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267f8: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x1267f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x1267fc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1267fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126800: 0x8ef001b0  lw          $s0, 0x1B0($s7)
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 432)));
    // 0x126804: 0x0  nop
    ctx->pc = 0x126804u;
    // NOP
label_126808:
    // 0x126808: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x12680c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126810: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x126810u;
    SET_GPR_U32(ctx, 31, 0x126818u);
    ctx->pc = 0x126814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126810u;
    // 0x126814: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x126810u, 0x126818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126818u;
label_126818:
    // 0x126818: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x126818u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12681c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12681cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x126820: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x126820u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x126824: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x126824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126828: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x126828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12682c: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x12682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x126830: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x126830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126834: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x126834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x126838: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x126838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12683c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12683cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x126840: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x126840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126844: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x126844u;
    SET_GPR_U32(ctx, 31, 0x12684Cu);
    ctx->pc = 0x126848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126844u;
    // 0x126848: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x126844u, 0x12684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12684Cu;
label_12684c:
    // 0x12684c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12684cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x126850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x126850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126854: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x126854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126858: 0x24a5ebf0  addiu       $a1, $a1, -0x1410
    ctx->pc = 0x126858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962160));
    // 0x12685c: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x12685cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126860: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x126860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x126864: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x126864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x126868: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x126868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x12686c: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x12686cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x126870: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x126870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x126874: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x126874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x126878: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x126878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x12687c: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x12687Cu;
    SET_GPR_U32(ctx, 31, 0x126884u);
    ctx->pc = 0x126880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12687Cu;
    // 0x126880: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x12687Cu, 0x126884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126884u;
label_126884:
    // 0x126884: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x126884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x126888: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12688c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12688cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126890: 0x24c65d70  addiu       $a2, $a2, 0x5D70
    ctx->pc = 0x126890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23920));
    // 0x126894: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x126894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x126898: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x126898u;
    SET_GPR_U32(ctx, 31, 0x1268A0u);
    ctx->pc = 0x12689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126898u;
    // 0x12689c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x126898u, 0x1268A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268A0u;
label_1268a0:
    // 0x1268a0: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x1268a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x1268a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1268a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1268a8: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x1268a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
    // 0x1268ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1268acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1268b0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1268b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1268b4: 0x2484f000  addiu       $a0, $a0, -0x1000
    ctx->pc = 0x1268b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
    // 0x1268b8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1268b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1268bc: 0xa4902b  sltu        $s2, $a1, $a0
    ctx->pc = 0x1268bcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1268c0: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1268c4: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x1268c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x1268c8: 0x3c2900a  movz        $s2, $fp, $v0
    ctx->pc = 0x1268c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 30));
    // 0x1268cc: 0x2c633801  sltiu       $v1, $v1, 0x3801
    ctx->pc = 0x1268ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x1268d0: 0x3c3900a  movz        $s2, $fp, $v1
    ctx->pc = 0x1268d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 30));
    // 0x1268d4: 0x16400081  bnez        $s2, . + 4 + (0x81 << 2)
    ctx->pc = 0x1268D4u;
    {
        const bool branch_taken_0x1268d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D4u;
        // 0x1268d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d4) {
            ctx->pc = 0x126ADCu;
            goto label_126adc;
        }
    }
    ctx->pc = 0x1268DCu;
    // 0x1268dc: 0x16a00050  bnez        $s5, . + 4 + (0x50 << 2)
    ctx->pc = 0x1268DCu;
    {
        const bool branch_taken_0x1268dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268DCu;
        // 0x1268e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268dc) {
            ctx->pc = 0x126A20u;
            goto label_126a20;
        }
    }
    ctx->pc = 0x1268E4u;
    // 0x1268e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1268e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1268e8: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1268ec: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1268ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1268f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1268F0u;
    {
        const bool branch_taken_0x1268f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268F0u;
        // 0x1268f4: 0x8fb100b4  lw          $s1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268f0) {
            ctx->pc = 0x126918u;
            goto label_126918;
        }
    }
    ctx->pc = 0x1268F8u;
    // 0x1268f8: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x1268f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x1268fc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x126900: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x126904: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x126904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x126908: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x126908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12690c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12690Cu;
    {
        const bool branch_taken_0x12690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12690Cu;
        // 0x126910: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12690c) {
            ctx->pc = 0x12694Cu;
            goto label_12694c;
        }
    }
    ctx->pc = 0x126914u;
    // 0x126914: 0x0  nop
    ctx->pc = 0x126914u;
    // NOP
label_126918:
    // 0x126918: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126918u;
    SET_GPR_U32(ctx, 31, 0x126920u);
    ctx->pc = 0x12691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126918u;
    // 0x12691c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126918u, 0x126920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126920u;
label_126920:
    // 0x126920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126920u;
    SET_GPR_U32(ctx, 31, 0x126928u);
    ctx->pc = 0x126924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126920u;
    // 0x126924: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126920u, 0x126928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126928u;
label_126928:
    // 0x126928: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x12692c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x126930: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x126934: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x126938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12693c: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x12693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x126940: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x126940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x126944: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x126944u;
    SET_GPR_U32(ctx, 31, 0x12694Cu);
    ctx->pc = 0x126948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126944u;
    // 0x126948: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x126944u, 0x12694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12694Cu;
label_12694c:
    // 0x12694c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x12694cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126950: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x126954: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x126954u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x126958: 0x354a8006  ori         $t2, $t2, 0x8006
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32774);
    // 0x12695c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126960: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x126960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x126964: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x126964u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x126968: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x126968u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x12696c: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x126970: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x126970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x126974: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x126974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x126978: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x126978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12697c: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x12697cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x126980: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x126980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x126984: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x126984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x126988: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x126988u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x12698c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x12698cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x126990: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x126990u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x126994: 0x246a0060  addiu       $t2, $v1, 0x60
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x126998: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x126998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x12699c: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x12699cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1269a0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x1269a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x1269a4: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1269a8: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x1269a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1269ac: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1269acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1269b0: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x1269b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1269b4: 0x24690050  addiu       $t1, $v1, 0x50
    ctx->pc = 0x1269b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1269b8: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x1269b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x1269bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1269bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1269c0: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x1269c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x1269c4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1269c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1269c8: 0x8ee20030  lw          $v0, 0x30($s7)
    ctx->pc = 0x1269c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1269cc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1269ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1269d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1269d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1269d4: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x1269d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x1269d8: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x1269d8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x1269dc: 0xfd2c0000  sd          $t4, 0x0($t1)
    ctx->pc = 0x1269dcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 12));
    // 0x1269e0: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
    // 0x1269e4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x1269e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1269e8: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x1269e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1269ec: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x1269ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1269f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1269f4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1269f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1269f8: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x1269f8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x1269fc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1269fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x126a00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x126a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a08: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x126a08u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x126a0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x126a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126a10: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x126a10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x126a14: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x126a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126a18: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x126a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x126a1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_126a20:
    // 0x126a20: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a28: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a2c: 0x3c024242  lui         $v0, 0x4242
    ctx->pc = 0x126a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16962 << 16));
    // 0x126a30: 0x34424242  ori         $v0, $v0, 0x4242
    ctx->pc = 0x126a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16962);
    // 0x126a34: 0x3c03802a  lui         $v1, 0x802A
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32810 << 16));
    // 0x126a38: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x126a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x126a3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x126a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x126a40: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x126a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x126a44: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x126a44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x126a48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x126a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a4c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x126a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x126a50: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a54: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x126a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x126a58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a5c: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x126a5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x126a60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a64: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x126a64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x126a68: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x126a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a6c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a70: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x126a74: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x126a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x126a80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x126a84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x126a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a88: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x126a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x126a8c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126a90: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x126a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x126a94: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a98: 0xe4b50004  swc1        $f21, 0x4($a1)
    ctx->pc = 0x126a98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x126a9c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x126aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126aa4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x126aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x126aa8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x126aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126aac: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x126aacu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x126ab0: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x126ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x126ab4: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x126ab4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x126ab8: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x126ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x126abc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x126abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126ac0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x126ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x126ac4: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x126ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x126ac8: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x126ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x126acc: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x126accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x126ad0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x126ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126ad4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x126ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x126ad8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x126ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126adc:
    // 0x126adc: 0x3aa3001b  xori        $v1, $s5, 0x1B
    ctx->pc = 0x126adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)27);
    // 0x126ae0: 0x24041323  addiu       $a0, $zero, 0x1323
    ctx->pc = 0x126ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4899));
    // 0x126ae4: 0x16c40006  bne         $s6, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126AE4u;
    {
        const bool branch_taken_0x126ae4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x126AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AE4u;
        // 0x126ae8: 0x43900a  movz        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ae4) {
            ctx->pc = 0x126B00u;
            goto label_126b00;
        }
    }
    ctx->pc = 0x126AECu;
    // 0x126aec: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x126AECu;
    {
        const bool branch_taken_0x126aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AECu;
        // 0x126af0: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126aec) {
            ctx->pc = 0x126B04u;
            goto label_126b04;
        }
    }
    ctx->pc = 0x126AF4u;
    // 0x126af4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x126AF4u;
    {
        const bool branch_taken_0x126af4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF4u;
        // 0x126af8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af4) {
            ctx->pc = 0x126B00u;
            goto label_126b00;
        }
    }
    ctx->pc = 0x126AFCu;
    // 0x126afc: 0x51900b  movn        $s2, $v0, $s1
    ctx->pc = 0x126afcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_126b00:
    // 0x126b00: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_126b04:
    // 0x126b04: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x126B04u;
    {
        const bool branch_taken_0x126b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b04) {
            ctx->pc = 0x126B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B04u;
            // 0x126b08: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C10u;
            goto label_126c10;
        }
    }
    ctx->pc = 0x126B0Cu;
    // 0x126b0c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b10: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x126b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x126b14: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x126b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126b18: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x126b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x126b1c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x126b20: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x126b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x126b24: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x126b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x126b28: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b2c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x126b30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x126b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x126b34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b38: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x126b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x126b3c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x126b3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126b40: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x126b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x126b44: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x126b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x126b48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126b4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x126b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126b50: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x126b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x126b54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x126b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126b58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126b5c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x126b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x126b60: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x126b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x126b64: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126B64u;
    SET_GPR_U32(ctx, 31, 0x126B6Cu);
    ctx->pc = 0x126B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B64u;
    // 0x126b68: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126B64u, 0x126B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B6Cu;
label_126b6c:
    // 0x126b6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x126b70: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x126b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x126b74: 0x0  nop
    ctx->pc = 0x126b74u;
    // NOP
label_126b78:
    // 0x126b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126b7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x126b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x126b80: 0x0  nop
    ctx->pc = 0x126b80u;
    // NOP
    // 0x126b84: 0x0  nop
    ctx->pc = 0x126b84u;
    // NOP
    // 0x126b88: 0x0  nop
    ctx->pc = 0x126b88u;
    // NOP
    // 0x126b8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126B8Cu;
    {
        const bool branch_taken_0x126b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b8c) {
            ctx->pc = 0x126B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b78;
        }
    }
    ctx->pc = 0x126B94u;
    // 0x126b94: 0x0  nop
    ctx->pc = 0x126b94u;
    // NOP
label_126b98:
    // 0x126b98: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x126B98u;
    SET_GPR_U32(ctx, 31, 0x126BA0u);
    ctx->pc = 0x126B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B98u;
    // 0x126b9c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x126B98u, 0x126BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BA0u;
label_126ba0:
    // 0x126ba0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x126ba4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x126BA4u;
    {
        const bool branch_taken_0x126ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x126BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BA4u;
        // 0x126ba8: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ba4) {
            ctx->pc = 0x126B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b98;
        }
    }
    ctx->pc = 0x126BACu;
    // 0x126bac: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x126bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x126bb0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x126BB0u;
    {
        const bool branch_taken_0x126bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BB0u;
        // 0x126bb4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bb0) {
            ctx->pc = 0x126BC4u;
            goto label_126bc4;
        }
    }
    ctx->pc = 0x126BB8u;
    // 0x126bb8: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x126bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x126bbc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x126BBCu;
    SET_GPR_U32(ctx, 31, 0x126BC4u);
    ctx->pc = 0x126BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BBCu;
    // 0x126bc0: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x126BBCu, 0x126BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BC4u;
label_126bc4:
    // 0x126bc4: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x126bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x126bc8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x126bcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x126bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x126bd0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x126bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x126bd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126bd8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x126bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x126bdc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x126be0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x126be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x126be4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x126be8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x126bec: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x126becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x126bf0: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x126bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x126bf4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x126bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x126bf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126c00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x126c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x126c08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x126c0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_126c10:
    // 0x126c10: 0x2ac21324  slti        $v0, $s6, 0x1324
    ctx->pc = 0x126c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4900) ? 1 : 0);
    // 0x126c14: 0x5440fefc  bnel        $v0, $zero, . + 4 + (-0x104 << 2)
    ctx->pc = 0x126C14u;
    {
        const bool branch_taken_0x126c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c14) {
            ctx->pc = 0x126C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C14u;
            // 0x126c18: 0x8ef001b0  lw          $s0, 0x1B0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126808;
        }
    }
    ctx->pc = 0x126C1Cu;
    // 0x126c1c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x126c20: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x126c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x126c24: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x126c24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x126c28: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x126c28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x126c2c: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x126c2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x126c30: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x126c30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x126c34: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x126c38: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x126c38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x126c3c: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x126c40: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x126c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x126c44: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x126c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x126c48: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x126c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126c4c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x126c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126c50: 0x3e00008  jr          $ra
    ctx->pc = 0x126C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C50u;
        // 0x126c54: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C58u;
}
