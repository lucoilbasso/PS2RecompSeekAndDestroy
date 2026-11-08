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

// Function: CreateRunEffect__FP8WcEntityffUiP9FVector32
// Address: 0x131938 - 0x131b14
void CreateRunEffect__FP8WcEntityffUiP9FVector32_0x131938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateRunEffect__FP8WcEntityffUiP9FVector32_0x131938");
#endif

    switch (ctx->pc) {
        case 0x13197cu: goto label_13197c;
        case 0x131a1cu: goto label_131a1c;
        case 0x131a30u: goto label_131a30;
        case 0x131a70u: goto label_131a70;
        case 0x131ad8u: goto label_131ad8;
        case 0x131aecu: goto label_131aec;
        default: break;
    }

    ctx->pc = 0x131938u;

    // 0x131938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13193c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13193cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131944: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x131944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131948: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x131948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13194c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13194cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131950: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x131950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13195c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13195cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131964: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x131964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x131968: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x131968u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x13196c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x13196cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x131970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x131970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x131974: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x131974u;
    SET_GPR_U32(ctx, 31, 0x13197Cu);
    ctx->pc = 0x131978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131974u;
    // 0x131978: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x131974u, 0x13197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13197Cu;
label_13197c:
    // 0x13197c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13197Cu;
    {
        const bool branch_taken_0x13197c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13197Cu;
        // 0x131980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13197c) {
            ctx->pc = 0x1319A0u;
            goto label_1319a0;
        }
    }
    ctx->pc = 0x131984u;
    // 0x131984: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x131984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131988: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x131988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x13198c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x13198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x131990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131990u;
    {
        const bool branch_taken_0x131990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131990) {
            ctx->pc = 0x1319A0u;
            goto label_1319a0;
        }
    }
    ctx->pc = 0x131998u;
    // 0x131998: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x131998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13199c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13199cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1319a0:
    // 0x1319a0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1319a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1319a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1319a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1319a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1319a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1319ac: 0xe6140100  swc1        $f20, 0x100($s0)
    ctx->pc = 0x1319acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1319b0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1319b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1319b4: 0xa61200ea  sh          $s2, 0xEA($s0)
    ctx->pc = 0x1319b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 18));
    // 0x1319b8: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1319b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1319bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1319BCu;
    {
        const bool branch_taken_0x1319bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1319C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319BCu;
        // 0x1319c0: 0xa60000e8  sh          $zero, 0xE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319bc) {
            ctx->pc = 0x1319D0u;
            goto label_1319d0;
        }
    }
    ctx->pc = 0x1319C4u;
    // 0x1319c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1319c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1319c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1319C8u;
    {
        const bool branch_taken_0x1319c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1319CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319C8u;
        // 0x1319cc: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319c8) {
            ctx->pc = 0x1319D4u;
            goto label_1319d4;
        }
    }
    ctx->pc = 0x1319D0u;
label_1319d0:
    // 0x1319d0: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1319d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_1319d4:
    // 0x1319d4: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x1319d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1319d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1319d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1319dc: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x1319dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x1319e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1319e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1319e4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1319e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1319e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1319ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1319ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1319f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1319f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1319f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1319f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1319fc: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x1319fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x131a00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131A00u;
    {
        const bool branch_taken_0x131a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A00u;
        // 0x131a04: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a00) {
            ctx->pc = 0x131A10u;
            goto label_131a10;
        }
    }
    ctx->pc = 0x131A08u;
    // 0x131a08: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x131A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A08u;
        // 0x131a0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131A34u;
            goto label_131a34;
        }
    }
    ctx->pc = 0x131A10u;
label_131a10:
    // 0x131a10: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x131a14: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x131A14u;
    SET_GPR_U32(ctx, 31, 0x131A1Cu);
    ctx->pc = 0x131A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A14u;
    // 0x131a18: 0x24846178  addiu       $a0, $a0, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x131A14u, 0x131A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A1Cu;
label_131a1c:
    // 0x131a1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131a20: 0x24a562b8  addiu       $a1, $a1, 0x62B8
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25272));
    // 0x131a24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a28: 0xc068186  jal         func_1A0618
    ctx->pc = 0x131A28u;
    SET_GPR_U32(ctx, 31, 0x131A30u);
    ctx->pc = 0x131A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A28u;
    // 0x131a2c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x131A28u, 0x131A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A30u;
label_131a30:
    // 0x131a30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x131a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_131a34:
    // 0x131a34: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x131a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x131a38: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x131a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x131a3c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x131a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x131a40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131a44: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x131A44u;
    {
        const bool branch_taken_0x131a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x131a44) {
            ctx->pc = 0x131A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A44u;
            // 0x131a48: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131AD0u;
            goto label_131ad0;
        }
    }
    ctx->pc = 0x131A4Cu;
    // 0x131a4c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x131a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a50: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x131a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x131a54: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x131a54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x131a58: 0x24e4002c  addiu       $a0, $a3, 0x2C
    ctx->pc = 0x131a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x131a5c: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x131a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x131a60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x131a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131a64: 0xa6030132  sh          $v1, 0x132($s0)
    ctx->pc = 0x131a64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x131a68: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x131a68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x131a6c: 0x0  nop
    ctx->pc = 0x131a6cu;
    // NOP
label_131a70:
    // 0x131a70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131a74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x131a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x131a78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x131a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x131a7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x131a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x131a80: 0x0  nop
    ctx->pc = 0x131a80u;
    // NOP
    // 0x131a84: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131A84u;
    {
        const bool branch_taken_0x131a84 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x131A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A84u;
        // 0x131a88: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a84) {
            ctx->pc = 0x131A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131a70;
        }
    }
    ctx->pc = 0x131A8Cu;
    // 0x131a8c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x131a90: 0x94e80038  lhu         $t0, 0x38($a3)
    ctx->pc = 0x131a90u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x131a94: 0x8c490020  lw          $t1, 0x20($v0)
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x131a98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131a9c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x131a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131aa0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x131aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x131aa4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x131aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131aa8: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x131aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x131aac: 0xa6080066  sh          $t0, 0x66($s0)
    ctx->pc = 0x131aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 8));
    // 0x131ab0: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x131ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x131ab4: 0xae0400cc  sw          $a0, 0xCC($s0)
    ctx->pc = 0x131ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 4));
    // 0x131ab8: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x131ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x131abc: 0xae0600d4  sw          $a2, 0xD4($s0)
    ctx->pc = 0x131abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 6));
    // 0x131ac0: 0xae070108  sw          $a3, 0x108($s0)
    ctx->pc = 0x131ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 7));
    // 0x131ac4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131AC4u;
    {
        const bool branch_taken_0x131ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131AC4u;
        // 0x131ac8: 0xae09010c  sw          $t1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ac4) {
            ctx->pc = 0x131AECu;
            goto label_131aec;
        }
    }
    ctx->pc = 0x131ACCu;
    // 0x131acc: 0x0  nop
    ctx->pc = 0x131accu;
    // NOP
label_131ad0:
    // 0x131ad0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x131AD0u;
    SET_GPR_U32(ctx, 31, 0x131AD8u);
    ctx->pc = 0x131AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AD0u;
    // 0x131ad4: 0x24846178  addiu       $a0, $a0, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x131AD0u, 0x131AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AD8u;
label_131ad8:
    // 0x131ad8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131adc: 0x24a56300  addiu       $a1, $a1, 0x6300
    ctx->pc = 0x131adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25344));
    // 0x131ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ae4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x131AE4u;
    SET_GPR_U32(ctx, 31, 0x131AECu);
    ctx->pc = 0x131AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AE4u;
    // 0x131ae8: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x131AE4u, 0x131AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AECu;
label_131aec:
    // 0x131aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x131aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131af0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x131af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x131af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x131afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x131b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131b04: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x131b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131b08: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x131b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x131B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B0Cu;
        // 0x131b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131B14u;
}
