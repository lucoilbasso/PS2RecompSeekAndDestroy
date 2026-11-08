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

// Function: DrawFunc__9ApcPtcLinP8WcEntity
// Address: 0x12d428 - 0x12de38
void DrawFunc__9ApcPtcLinP8WcEntity_0x12d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9ApcPtcLinP8WcEntity_0x12d428");
#endif

    switch (ctx->pc) {
        case 0x12d490u: goto label_12d490;
        case 0x12d4d8u: goto label_12d4d8;
        case 0x12d508u: goto label_12d508;
        case 0x12d91cu: goto label_12d91c;
        case 0x12d948u: goto label_12d948;
        case 0x12da30u: goto label_12da30;
        case 0x12da38u: goto label_12da38;
        case 0x12da5cu: goto label_12da5c;
        case 0x12dcf8u: goto label_12dcf8;
        case 0x12dd58u: goto label_12dd58;
        case 0x12dd60u: goto label_12dd60;
        case 0x12dd80u: goto label_12dd80;
        case 0x12dd88u: goto label_12dd88;
        case 0x12ddacu: goto label_12ddac;
        default: break;
    }

    ctx->pc = 0x12d428u;

    // 0x12d428: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x12d42c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d430: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x12d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x12d434: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12d434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d438: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x12d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x12d43c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12d43cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d440: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x12d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x12d444: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12d444u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d448: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x12d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x12d44c: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x12d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x12d450: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x12d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x12d454: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x12d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x12d458: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x12d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x12d45c: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x12d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x12d460: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x12d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x12d464: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x12d464u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x12d468: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12d468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x12d46c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x12d46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x12d470: 0x8ca20164  lw          $v0, 0x164($a1)
    ctx->pc = 0x12d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
    // 0x12d474: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x12d474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
    // 0x12d478: 0xc455017c  lwc1        $f21, 0x17C($v0)
    ctx->pc = 0x12d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d47c: 0xc4560180  lwc1        $f22, 0x180($v0)
    ctx->pc = 0x12d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12d480: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12d484: 0x8c94015c  lw          $s4, 0x15C($a0)
    ctx->pc = 0x12d484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x12d488: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x12d488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x12d48c: 0x0  nop
    ctx->pc = 0x12d48cu;
    // NOP
label_12d490:
    // 0x12d490: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12d490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x12d494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d498: 0x0  nop
    ctx->pc = 0x12d498u;
    // NOP
    // 0x12d49c: 0x0  nop
    ctx->pc = 0x12d49cu;
    // NOP
    // 0x12d4a0: 0x0  nop
    ctx->pc = 0x12d4a0u;
    // NOP
    // 0x12d4a4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D4A4u;
    {
        const bool branch_taken_0x12d4a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4A4u;
        // 0x12d4a8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4a4) {
            ctx->pc = 0x12D490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d490;
        }
    }
    ctx->pc = 0x12D4ACu;
    // 0x12d4ac: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12d4b0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4b4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12d4b8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4bc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x12d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12d4c0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x12d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d4c4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4c8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12d4cc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12d4d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12d4d8:
    // 0x12d4d8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d4e0: 0x0  nop
    ctx->pc = 0x12d4e0u;
    // NOP
    // 0x12d4e4: 0x0  nop
    ctx->pc = 0x12d4e4u;
    // NOP
    // 0x12d4e8: 0x0  nop
    ctx->pc = 0x12d4e8u;
    // NOP
    // 0x12d4ec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D4ECu;
    {
        const bool branch_taken_0x12d4ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4ECu;
        // 0x12d4f0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4ec) {
            ctx->pc = 0x12D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d4d8;
        }
    }
    ctx->pc = 0x12D4F4u;
    // 0x12d4f4: 0x12800241  beqz        $s4, . + 4 + (0x241 << 2)
    ctx->pc = 0x12D4F4u;
    {
        const bool branch_taken_0x12d4f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4F4u;
        // 0x12d4f8: 0x27b70100  addiu       $s7, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f4) {
            ctx->pc = 0x12DDFCu;
            goto label_12ddfc;
        }
    }
    ctx->pc = 0x12D4FCu;
    // 0x12d4fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d500: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12d500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d504: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_12d508:
    // 0x12d508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d50c: 0x144301e2  bne         $v0, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x12D50Cu;
    {
        const bool branch_taken_0x12d50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D50Cu;
        // 0x12d510: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d50c) {
            ctx->pc = 0x12DC98u;
            goto label_12dc98;
        }
    }
    ctx->pc = 0x12D514u;
    // 0x12d514: 0x9682001e  lhu         $v0, 0x1E($s4)
    ctx->pc = 0x12d514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x12d518: 0x544001e0  bnel        $v0, $zero, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x12D518u;
    {
        const bool branch_taken_0x12d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d518) {
            ctx->pc = 0x12D51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D518u;
            // 0x12d51c: 0xa680001e  sh          $zero, 0x1E($s4) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 20), 30), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC9Cu;
            goto label_12dc9c;
        }
    }
    ctx->pc = 0x12D520u;
    // 0x12d520: 0x8e840120  lw          $a0, 0x120($s4)
    ctx->pc = 0x12d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x12d524: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x12D524u;
    {
        const bool branch_taken_0x12d524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D524u;
        // 0x12d528: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d524) {
            ctx->pc = 0x12D560u;
            goto label_12d560;
        }
    }
    ctx->pc = 0x12D52Cu;
    // 0x12d52c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x12d52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12d530: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12d530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12d534: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12d534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12d538: 0x24a55e90  addiu       $a1, $a1, 0x5E90
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24208));
    // 0x12d53c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d540: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x12d540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12d544: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x12d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12d548: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12d548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d54c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d550: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D550u;
    {
        const bool branch_taken_0x12d550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D550u;
        // 0x12d554: 0xc4450000  lwc1        $f5, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d550) {
            ctx->pc = 0x12D574u;
            goto label_12d574;
        }
    }
    ctx->pc = 0x12D558u;
    // 0x12d558: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D558u;
    {
        const bool branch_taken_0x12d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D558u;
        // 0x12d55c: 0xc6880058  lwc1        $f8, 0x58($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d558) {
            ctx->pc = 0x12D574u;
            goto label_12d574;
        }
    }
    ctx->pc = 0x12D560u;
label_12d560:
    // 0x12d560: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12d564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d56c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x12d56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12d570: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x12d570u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_12d574:
    // 0x12d574: 0x269200e0  addiu       $s2, $s4, 0xE0
    ctx->pc = 0x12d574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x12d578: 0x268200f0  addiu       $v0, $s4, 0xF0
    ctx->pc = 0x12d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
    // 0x12d57c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12d57cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d580: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x12d580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d584: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12d584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d588: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x12d588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d58c: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x12d58cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12d590: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x12d590u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d594: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x12d594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d598: 0x4a0003bf  vwaitq
    ctx->pc = 0x12d598u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12d59c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x12d59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d5a0: 0xfae60000  sqc2        $vf6, 0x0($s7)
    ctx->pc = 0x12d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12d5a4: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x12d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d5a8: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x12d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d5ac: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x12d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d5b0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12d5b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12d5b4: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x12d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d5b8: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x12d5b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x12d5bc: 0x460511c2  mul.s       $f7, $f2, $f5
    ctx->pc = 0x12d5bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x12d5c0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12d5c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12d5c4: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x12d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d5c8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x12d5c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x12d5cc: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x12d5ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x12d5d0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x12d5d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x12d5d4: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x12d5d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x12d5d8: 0x46051982  mul.s       $f6, $f3, $f5
    ctx->pc = 0x12d5d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x12d5dc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x12d5dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12d5e0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x12d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d5e4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x12d5e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x12d5e8: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x12d5e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x12d5ec: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x12d5ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x12d5f0: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x12d5f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x12d5f4: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x12d5f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x12d5f8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x12d5f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x12d5fc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x12d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d600: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x12d600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x12d604: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x12d604u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x12d608: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x12d608u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x12d60c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x12d60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12d610: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x12d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d614: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x12d614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x12d618: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x12d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12d61c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d620: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x12d620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x12d624: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x12d624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12d628: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x12d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d62c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12d62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12d630: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x12d630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x12d634: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x12d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d638: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12d638u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x12d63c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x12d63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x12d640: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x12d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d644: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x12d644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x12d648: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x12d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x12d64c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12d64cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12d650: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12d650u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d654: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12d654u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d658: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12d658u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12d65c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12d660: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12d664: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12d664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12d668: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12d66c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x12d670: 0x2508eb70  addiu       $t0, $t0, -0x1490
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962032));
    // 0x12d674: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x12d674u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x12d678: 0xd9050010  lqc2        $vf5, 0x10($t0)
    ctx->pc = 0x12d678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x12d67c: 0xd9060020  lqc2        $vf6, 0x20($t0)
    ctx->pc = 0x12d67cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x12d680: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x12d680u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x12d684: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12d684u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d688: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12d688u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d68c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12d68cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d690: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12d690u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d694: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12d694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d698: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12d698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d69c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12d69cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6a0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12d6a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12d6a4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12d6a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6a8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12d6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6ac: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12d6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6b0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12d6b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12d6b4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12d6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6b8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12d6b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6bc: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12d6bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6c0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12d6c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12d6c4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12d6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6c8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12d6c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6cc: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12d6ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d6d0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12d6d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12d6d4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12d6d8: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12d6dc: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12d6e0: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12d6e4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12d6e8: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d6ec: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x12d6ecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d6f0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12d6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d6f4: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12d6f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d6f8: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12d6f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d6fc: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12d6fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d700: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12d700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d704: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12d704u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d708: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12d708u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d70c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12d70cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12d710: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x12d710u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12d714: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x12d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12d718: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12d71c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x12d71cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d720: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12d720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d724: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x12d724u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d728: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x12d728u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d72c: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12d72cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d730: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12d730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d734: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12d734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d738: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12d738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d73c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12d73cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12d740: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x12d740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12d744: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x12d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d748: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x12d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d74c: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x12d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d750: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x12d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d754: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x12d754u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12d758: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x12d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d75c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x12d75cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x12d760: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12d760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12d764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12d764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d768: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x12d768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x12d76c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12d76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12d770: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x12d770u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x12d774: 0xe7b4010c  swc1        $f20, 0x10C($sp)
    ctx->pc = 0x12d774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x12d778: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x12d778u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x12d77c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x12d77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12d780: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x12d780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d784: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12d784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d788: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x12d788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d78c: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x12d78cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12d790: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x12d790u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d794: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x12d794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d798: 0x4a0003bf  vwaitq
    ctx->pc = 0x12d798u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12d79c: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x12d79cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d7a0: 0xfae60000  sqc2        $vf6, 0x0($s7)
    ctx->pc = 0x12d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12d7a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x12d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12d7a8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x12d7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12d7ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12d7acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12d7b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12d7b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d7b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d7b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d7b8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d7bc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x12d7bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7c0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d7c4: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x12d7c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12d7c8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x12d7c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d7cc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12d7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12d7d0: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x12d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12d7d4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x12d7d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x12d7d8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x12d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12d7dc: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x12d7dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12d7e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12d7e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12d7e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12d7e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d7e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d7e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d7ec: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d7f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7f4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x12d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d7f8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x12d7f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d7fc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x12d7fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12d800: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12d800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12d804: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x12d804u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12d808: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x12d808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x12d80c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x12d80cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12d810: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12d810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12d814: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12d814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d818: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d81c: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x12d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d820: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x12d820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d824: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x12d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12d828: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12d828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d82c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x12d82cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d830: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12d830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12d834: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x12d834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12d838: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12d83c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x12d83cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12d840: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12d840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12d844: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12d844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12d848: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12d848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12d84c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12d850: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12d850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d854: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x12d854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d858: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12d858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12d85c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x12d85cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12d860: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12d860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12d864: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x12d864u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12d868: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12d868u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12d86c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12d86cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12d870: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12d870u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12d874: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12d874u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12d878: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x12d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12d87c: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12d880: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x12d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12d884: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12d888: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12d88c: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x12d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x12d890: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12d890u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x12d894: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x12d894u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x12d898: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x12d898u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x12d89c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12d89cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x12d8a0: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x12d8a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8a4: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12d8a4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d8a8: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x12d8a8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d8ac: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x12d8acu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d8b0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12d8b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8b4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12d8b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8b8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12d8b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8bc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12d8bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12d8c0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x12d8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8c4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12d8c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8c8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x12d8c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8cc: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x12d8ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12d8d0: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12d8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8d4: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12d8d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8d8: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x12d8d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8dc: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x12d8dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12d8e0: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12d8e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8e4: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12d8e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8e8: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x12d8e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12d8ec: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x12d8ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12d8f0: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12d8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12d8f4: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12d8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x12d8f8: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x12d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x12d8fc: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x12d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12d900: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x12d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12d904: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12d908: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x12d908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d90c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12d90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d910: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x12d910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d914: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x12D914u;
    SET_GPR_U32(ctx, 31, 0x12D91Cu);
    ctx->pc = 0x12D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D914u;
    // 0x12d918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x12D914u, 0x12D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D91Cu;
label_12d91c:
    // 0x12d91c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x12d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x12d920: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d924: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x12d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x12d928: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12d92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d930: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x12d934: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x12d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x12d938: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12d938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12d93c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x12d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x12d940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d944: 0x82a80b  movn        $s5, $a0, $v0
    ctx->pc = 0x12d944u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
label_12d948:
    // 0x12d948: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x12d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x12d94c: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12d950: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12d950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12d954: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D954u;
            // 0x12d958: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D96Cu;
            goto label_12d96c;
        }
    }
    ctx->pc = 0x12D95Cu;
    // 0x12d95c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12d960: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12d960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d964: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12d964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12d96c:
    // 0x12d96c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12d970: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12d970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12d974: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D974u;
    {
        const bool branch_taken_0x12d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D974u;
        // 0x12d978: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d974) {
            ctx->pc = 0x12D98Cu;
            goto label_12d98c;
        }
    }
    ctx->pc = 0x12D97Cu;
    // 0x12d97c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d980: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12d984: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12d984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d988: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12d988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12d98c:
    // 0x12d98c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x12d98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12d990: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12D990u;
    {
        const bool branch_taken_0x12d990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D990u;
        // 0x12d994: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d990) {
            ctx->pc = 0x12D948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d948;
        }
    }
    ctx->pc = 0x12D998u;
    // 0x12d998: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d99c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12d99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12d9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12d9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d9a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12d9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12d9ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x12d9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x12d9b0: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x12d9b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x12d9b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d9b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12d9b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12d9b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12d9bc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x12d9bcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12d9c0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x12d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12d9c4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x12d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12d9c8: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x12d9c8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12d9cc: 0x29800  sll         $s3, $v0, 0
    ctx->pc = 0x12d9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12d9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d9d8: 0xb3182a  slt         $v1, $a1, $s3
    ctx->pc = 0x12d9d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12d9dc: 0x103a80a  movz        $s5, $t0, $v1
    ctx->pc = 0x12d9dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
    // 0x12d9e0: 0x56a000aa  bnel        $s5, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x12D9E0u;
    {
        const bool branch_taken_0x12d9e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9e0) {
            ctx->pc = 0x12D9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9E0u;
            // 0x12d9e4: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC8Cu;
            goto label_12dc8c;
        }
    }
    ctx->pc = 0x12D9E8u;
    // 0x12d9e8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12d9ec: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12D9ECu;
    {
        const bool branch_taken_0x12d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9ECu;
        // 0x12d9f0: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9ec) {
            ctx->pc = 0x12DAD0u;
            goto label_12dad0;
        }
    }
    ctx->pc = 0x12D9F4u;
    // 0x12d9f4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12d9f8: 0x2476d650  addiu       $s6, $v1, -0x29B0
    ctx->pc = 0x12d9f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12d9fc: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x12d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x12da00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12DA00u;
    {
        const bool branch_taken_0x12da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA00u;
        // 0x12da04: 0x8fb10144  lw          $s1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da00) {
            ctx->pc = 0x12DA28u;
            goto label_12da28;
        }
    }
    ctx->pc = 0x12DA08u;
    // 0x12da08: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x12da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x12da0c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12da10: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12da14: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12da14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12da18: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12da1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12DA1Cu;
    {
        const bool branch_taken_0x12da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA1Cu;
        // 0x12da20: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da1c) {
            ctx->pc = 0x12DA5Cu;
            goto label_12da5c;
        }
    }
    ctx->pc = 0x12DA24u;
    // 0x12da24: 0x0  nop
    ctx->pc = 0x12da24u;
    // NOP
label_12da28:
    // 0x12da28: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12DA28u;
    SET_GPR_U32(ctx, 31, 0x12DA30u);
    ctx->pc = 0x12DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA28u;
    // 0x12da2c: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12DA28u, 0x12DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA30u;
label_12da30:
    // 0x12da30: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12DA30u;
    SET_GPR_U32(ctx, 31, 0x12DA38u);
    ctx->pc = 0x12DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA30u;
    // 0x12da34: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12DA30u, 0x12DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA38u;
label_12da38:
    // 0x12da38: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x12da38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x12da3c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x12da40: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12da44: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12da48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12da4c: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x12da50: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x12da50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x12da54: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12DA54u;
    SET_GPR_U32(ctx, 31, 0x12DA5Cu);
    ctx->pc = 0x12DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA54u;
    // 0x12da58: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12DA54u, 0x12DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA5Cu;
label_12da5c:
    // 0x12da5c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da60: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x12da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12da64: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12da68: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x12da68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x12da6c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x12da6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x12da70: 0x356b8003  ori         $t3, $t3, 0x8003
    ctx->pc = 0x12da70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32771);
    // 0x12da74: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x12da74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x12da78: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x12da7c: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x12da7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12da80: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x12da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12da84: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x12da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12da88: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x12da88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x12da8c: 0x24710050  addiu       $s1, $v1, 0x50
    ctx->pc = 0x12da8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x12da90: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x12da90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x12da94: 0x24670030  addiu       $a3, $v1, 0x30
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12da98: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x12da98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x12da9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12daa0: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x12daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x12daa4: 0x24680040  addiu       $t0, $v1, 0x40
    ctx->pc = 0x12daa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x12daa8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x12daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x12daac: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x12daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12dab0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x12dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x12dab4: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x12dab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12dab8: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x12dab8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12dabc: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x12dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x12dac0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x12dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x12dac4: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x12dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x12dac8: 0xfd090000  sd          $t1, 0x0($t0)
    ctx->pc = 0x12dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
    // 0x12dacc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_12dad0:
    // 0x12dad0: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x12dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x12dad4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12dad8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12dadc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x12dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x12dae0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12dae4: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x12dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x12dae8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x12dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x12daec: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12daf0: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x12daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x12daf4: 0x708820e8  pminw       $a0, $a0, $t0
    ctx->pc = 0x12daf4u;
    SET_GPR_VEC(ctx, 4, PS2_PMINW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
    // 0x12daf8: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x12daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x12dafc: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DAFCu;
    {
        const bool branch_taken_0x12dafc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x12DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAFCu;
        // 0x12db00: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dafc) {
            ctx->pc = 0x12DB14u;
            goto label_12db14;
        }
    }
    ctx->pc = 0x12DB04u;
    // 0x12db04: 0x93a20113  lbu         $v0, 0x113($sp)
    ctx->pc = 0x12db04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 275)));
    // 0x12db08: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x12db08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12db0c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x12db0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x12db10: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x12db10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
label_12db14:
    // 0x12db14: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12db18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12db1c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12db1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12db20: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x12db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x12db24: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x12db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12db28: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x12db28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x12db2c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12db30: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x12db30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x12db34: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12db38: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12db38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12db3c: 0x34844242  ori         $a0, $a0, 0x4242
    ctx->pc = 0x12db3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16962);
    // 0x12db40: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12db40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12db44: 0x34844e26  ori         $a0, $a0, 0x4E26
    ctx->pc = 0x12db44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20006);
    // 0x12db48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12db48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db4c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db50: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x12db54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12db54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db58: 0x3c06a03a  lui         $a2, 0xA03A
    ctx->pc = 0x12db58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41018 << 16));
    // 0x12db5c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x12db5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x12db60: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12db60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12db64: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x12db64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x12db68: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x12db68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x12db6c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x12db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x12db70: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12db74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12db78: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x12db78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db7c: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x12db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x12db80: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x12db80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12db84: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x12db84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x12db88: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db8c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x12db8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12db94: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x12db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12db98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db9c: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x12db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x12dba0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dba4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12dba8: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x12dba8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbac: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x12dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x12dbb0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12dbb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbb8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbbc: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x12dbbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12dbc0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x12dbc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbc4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12dbc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12dbc8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbcc: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x12dbccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12dbd0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x12dbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbd4: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x12dbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x12dbd8: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x12dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x12dbdc: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x12dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x12dbe0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbe4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x12dbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x12dbe8: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x12dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x12dbec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x12dbecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbf0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dbf4: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x12dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbfc: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x12dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc00: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dc04: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x12dc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12dc08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12dc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc0c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x12dc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x12dc10: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12dc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12dc14: 0xe5140008  swc1        $f20, 0x8($t0)
    ctx->pc = 0x12dc14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x12dc18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12dc18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dc1c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12dc20: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x12dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x12dc24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12dc28: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x12dc28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12dc2c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12dc2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12dc30: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x12dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc34: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x12dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc38: 0x7d820000  sq          $v0, 0x0($t4)
    ctx->pc = 0x12dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 2));
    // 0x12dc3c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x12dc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x12dc40: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x12dc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x12dc44: 0xe4f40008  swc1        $f20, 0x8($a3)
    ctx->pc = 0x12dc44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x12dc48: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x12dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc4c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x12dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc50: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12dc50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12dc54: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x12dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x12dc58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x12dc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12dc5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12dc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12dc60: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x12dc60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12dc64: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x12dc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12dc68: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x12dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dc6c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x12dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dc70: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x12dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x12dc74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x12dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12dc78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x12dc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12dc7c: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x12dc7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x12dc80: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x12dc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12dc84: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12dc88: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x12dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_12dc8c:
    // 0x12dc8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dc90: 0x38820013  xori        $v0, $a0, 0x13
    ctx->pc = 0x12dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)19);
    // 0x12dc94: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x12dc94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_12dc98:
    // 0x12dc98: 0xa680001e  sh          $zero, 0x1E($s4)
    ctx->pc = 0x12dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 30), (uint16_t)GPR_U32(ctx, 0));
label_12dc9c:
    // 0x12dc9c: 0x8e9400c4  lw          $s4, 0xC4($s4)
    ctx->pc = 0x12dc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x12dca0: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DCA0u;
    {
        const bool branch_taken_0x12dca0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA0u;
        // 0x12dca4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dca0) {
            ctx->pc = 0x12DCC0u;
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DCA8u;
    // 0x12dca8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DCA8u;
    {
        const bool branch_taken_0x12dca8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dca8) {
            ctx->pc = 0x12DCC0u;
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DCB0u;
    // 0x12dcb0: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DCB0u;
    {
        const bool branch_taken_0x12dcb0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB0u;
        // 0x12dcb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb0) {
            ctx->pc = 0x12DCBCu;
            goto label_12dcbc;
        }
    }
    ctx->pc = 0x12DCB8u;
    // 0x12dcb8: 0x51a80b  movn        $s5, $v0, $s1
    ctx->pc = 0x12dcb8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_12dcbc:
    // 0x12dcbc: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x12dcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_12dcc0:
    // 0x12dcc0: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x12DCC0u;
    {
        const bool branch_taken_0x12dcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dcc0) {
            ctx->pc = 0x12DDF4u;
            goto label_12ddf4;
        }
    }
    ctx->pc = 0x12DCC8u;
    // 0x12dcc8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x12dccc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x12dcd0: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12dcd4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12dcd8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12dcd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12dcdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12dce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DCE0u;
    {
        const bool branch_taken_0x12dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCE0u;
        // 0x12dce4: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dce0) {
            ctx->pc = 0x12DCF8u;
            goto label_12dcf8;
        }
    }
    ctx->pc = 0x12DCE8u;
    // 0x12dce8: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x12dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x12dcec: 0x24a55e70  addiu       $a1, $a1, 0x5E70
    ctx->pc = 0x12dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24176));
    // 0x12dcf0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12DCF0u;
    SET_GPR_U32(ctx, 31, 0x12DCF8u);
    ctx->pc = 0x12DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCF0u;
    // 0x12dcf4: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12DCF0u, 0x12DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCF8u;
label_12dcf8:
    // 0x12dcf8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x12dcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcfc: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12dd00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dd04: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x12dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12dd08: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12dd0c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12dd10: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x12dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12dd14: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x12dd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd18: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12dd1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12dd20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x12dd28: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12dd28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12dd2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12dd30: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12dd34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12dd38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dd3c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12dd40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12dd44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12dd48: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12dd4c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12dd50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12DD50u;
    SET_GPR_U32(ctx, 31, 0x12DD58u);
    ctx->pc = 0x12DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD50u;
    // 0x12dd54: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12DD50u, 0x12DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD58u;
label_12dd58:
    // 0x12dd58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12dd5c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_12dd60:
    // 0x12dd60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12dd64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12dd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12dd68: 0x0  nop
    ctx->pc = 0x12dd68u;
    // NOP
    // 0x12dd6c: 0x0  nop
    ctx->pc = 0x12dd6cu;
    // NOP
    // 0x12dd70: 0x0  nop
    ctx->pc = 0x12dd70u;
    // NOP
    // 0x12dd74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DD74u;
    {
        const bool branch_taken_0x12dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dd74) {
            ctx->pc = 0x12DD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dd60;
        }
    }
    ctx->pc = 0x12DD7Cu;
    // 0x12dd7c: 0x0  nop
    ctx->pc = 0x12dd7cu;
    // NOP
label_12dd80:
    // 0x12dd80: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12DD80u;
    SET_GPR_U32(ctx, 31, 0x12DD88u);
    ctx->pc = 0x12DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD80u;
    // 0x12dd84: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12DD80u, 0x12DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD88u;
label_12dd88:
    // 0x12dd88: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12dd8c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD8Cu;
        // 0x12dd90: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dd80;
        }
    }
    ctx->pc = 0x12DD94u;
    // 0x12dd94: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x12dd98: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DD98u;
    {
        const bool branch_taken_0x12dd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD98u;
        // 0x12dd9c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd98) {
            ctx->pc = 0x12DDACu;
            goto label_12ddac;
        }
    }
    ctx->pc = 0x12DDA0u;
    // 0x12dda0: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x12dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12dda4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12DDA4u;
    SET_GPR_U32(ctx, 31, 0x12DDACu);
    ctx->pc = 0x12DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDA4u;
    // 0x12dda8: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12DDA4u, 0x12DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDACu;
label_12ddac:
    // 0x12ddac: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x12ddb0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12ddb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12ddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12ddb8: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x12ddbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ddc0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x12ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12ddc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x12ddc8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x12ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x12ddcc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x12ddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x12ddd0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12ddd4: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x12ddd8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x12ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x12dddc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x12dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x12dde0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12dde0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12dde8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12dde8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddec: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x12ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x12ddf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12ddf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ddf4:
    // 0x12ddf4: 0x5680fdc4  bnel        $s4, $zero, . + 4 + (-0x23C << 2)
    ctx->pc = 0x12DDF4u;
    {
        const bool branch_taken_0x12ddf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ddf4) {
            ctx->pc = 0x12DDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DDF4u;
            // 0x12ddf8: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d508;
        }
    }
    ctx->pc = 0x12DDFCu;
label_12ddfc:
    // 0x12ddfc: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x12ddfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x12de00: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x12de00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x12de04: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x12de04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12de08: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x12de08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12de0c: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x12de0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12de10: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x12de10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x12de14: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x12de14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x12de18: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x12de18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x12de1c: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x12de1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x12de20: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x12de20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x12de24: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x12de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12de28: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12de2c: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x12de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12de30: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE30u;
        // 0x12de34: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DE38u;
}
