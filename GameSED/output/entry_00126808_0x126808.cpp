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

// Function: entry_00126808
// Address: 0x126808 - 0x126918
void entry_00126808_0x126808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126808_0x126808");
#endif

    switch (ctx->pc) {
        case 0x126818u: goto label_126818;
        case 0x12684cu: goto label_12684c;
        case 0x126884u: goto label_126884;
        case 0x1268a0u: goto label_1268a0;
        default: break;
    }

    ctx->pc = 0x126808u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x126914u;
    // 0x126914: 0x0  nop
    ctx->pc = 0x126914u;
    // NOP
    ctx->pc = 0x126918u;
}
