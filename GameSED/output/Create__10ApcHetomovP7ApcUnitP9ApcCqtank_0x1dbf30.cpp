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

// Function: Create__10ApcHetomovP7ApcUnitP9ApcCqtank
// Address: 0x1dbf30 - 0x1dc00c
void Create__10ApcHetomovP7ApcUnitP9ApcCqtank_0x1dbf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__10ApcHetomovP7ApcUnitP9ApcCqtank_0x1dbf30");
#endif

    switch (ctx->pc) {
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        default: break;
    }

    ctx->pc = 0x1dbf30u;

label_1dbf30:
    // 0x1dbf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dbf34:
    // 0x1dbf34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dbf38:
    // 0x1dbf38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dbf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf3c:
    // 0x1dbf3c: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x1dbf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1dbf40:
    // 0x1dbf40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dbf44:
    // 0x1dbf44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1dbf48:
    // 0x1dbf48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dbf48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf4c:
    // 0x1dbf4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1dbf50:
    // 0x1dbf50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dbf54:
    // 0x1dbf54: 0xc0682b2  jal         func_1A0AC8
label_1dbf58:
    if (ctx->pc == 0x1DBF58u) {
        ctx->pc = 0x1DBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF54u;
        // 0x1dbf58: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF5Cu;
        goto label_1dbf5c;
    }
    ctx->pc = 0x1DBF54u;
    SET_GPR_U32(ctx, 31, 0x1DBF5Cu);
    ctx->pc = 0x1DBF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF54u;
    // 0x1dbf58: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DBF54u, 0x1DBF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF5Cu;
label_1dbf5c:
    // 0x1dbf5c: 0xc0682b6  jal         func_1A0AD8
label_1dbf60:
    if (ctx->pc == 0x1DBF60u) {
        ctx->pc = 0x1DBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF5Cu;
        // 0x1dbf60: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF64u;
        goto label_1dbf64;
    }
    ctx->pc = 0x1DBF5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBF64u);
    ctx->pc = 0x1DBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF5Cu;
    // 0x1dbf60: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DBF5Cu, 0x1DBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF64u;
label_1dbf64:
    // 0x1dbf64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf68:
    // 0x1dbf68: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1dbf6c:
    // 0x1dbf6c: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x1dbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
label_1dbf70:
    // 0x1dbf70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbf74:
    // 0x1dbf74: 0xc061258  jal         func_184960
label_1dbf78:
    if (ctx->pc == 0x1DBF78u) {
        ctx->pc = 0x1DBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF74u;
        // 0x1dbf78: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBF7Cu;
        goto label_1dbf7c;
    }
    ctx->pc = 0x1DBF74u;
    SET_GPR_U32(ctx, 31, 0x1DBF7Cu);
    ctx->pc = 0x1DBF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBF74u;
    // 0x1dbf78: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DBF74u, 0x1DBF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBF7Cu;
label_1dbf7c:
    // 0x1dbf7c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dbf80:
    // 0x1dbf80: 0xc7808538  lwc1        $f0, -0x7AC8($gp)
    ctx->pc = 0x1dbf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf84:
    // 0x1dbf84: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1dbf88:
    // 0x1dbf88: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1dbf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1dbf8c:
    // 0x1dbf8c: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1dbf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1dbf90:
    // 0x1dbf90: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x1dbf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_1dbf94:
    // 0x1dbf94: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1dbf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1dbf98:
    // 0x1dbf98: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1dbf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1dbf9c:
    // 0x1dbf9c: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1dbf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1dbfa0:
    // 0x1dbfa0: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1dbfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1dbfa4:
    // 0x1dbfa4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbfa8:
    // 0x1dbfa8: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1dbfac:
    // 0x1dbfac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1dbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbfb0:
    // 0x1dbfb0: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1dbfb4:
    // 0x1dbfb4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbfb8:
    // 0x1dbfb8: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1dbfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1dbfbc:
    // 0x1dbfbc: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1dbfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbfc0:
    // 0x1dbfc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dbfc4:
    // 0x1dbfc4: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1dbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1dbfc8:
    // 0x1dbfc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbfcc:
    // 0x1dbfcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dbfd0:
    // 0x1dbfd0: 0x60f809  jalr        $v1
label_1dbfd4:
    if (ctx->pc == 0x1DBFD4u) {
        ctx->pc = 0x1DBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD0u;
        // 0x1dbfd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFD8u;
        goto label_1dbfd8;
    }
    ctx->pc = 0x1DBFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DBFD8u);
        ctx->pc = 0x1DBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFD0u;
        // 0x1dbfd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBFD0u, 0x1DBFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBFD8u;
label_1dbfd8:
    // 0x1dbfd8: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dbfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dbfdc:
    // 0x1dbfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbfe0:
    // 0x1dbfe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dbfe4:
    // 0x1dbfe4: 0xc06825c  jal         func_1A0970
label_1dbfe8:
    if (ctx->pc == 0x1DBFE8u) {
        ctx->pc = 0x1DBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFE4u;
        // 0x1dbfe8: 0xaf908b54  sw          $s0, -0x74AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBFECu;
        goto label_1dbfec;
    }
    ctx->pc = 0x1DBFE4u;
    SET_GPR_U32(ctx, 31, 0x1DBFECu);
    ctx->pc = 0x1DBFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBFE4u;
    // 0x1dbfe8: 0xaf908b54  sw          $s0, -0x74AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DBFE4u, 0x1DBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFECu;
label_1dbfec:
    // 0x1dbfec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dbff0:
    // 0x1dbff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dbff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbff4:
    // 0x1dbff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbff8:
    // 0x1dbff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbffc:
    // 0x1dbffc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dc000:
    // 0x1dc000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dc000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc004:
    // 0x1dc004: 0x3e00008  jr          $ra
label_1dc008:
    if (ctx->pc == 0x1DC008u) {
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC00Cu;
        goto label_fallthrough_0x1dc004;
    }
    ctx->pc = 0x1DC004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc004:
    ctx->pc = 0x1DC00Cu;
}
