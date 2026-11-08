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

// Function: Create__8ApcMinenP7ApcUnitP9ApcCqtank
// Address: 0x1db9f8 - 0x1dbad8
void Create__8ApcMinenP7ApcUnitP9ApcCqtank_0x1db9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__8ApcMinenP7ApcUnitP9ApcCqtank_0x1db9f8");
#endif

    switch (ctx->pc) {
        case 0x1db9f8u: goto label_1db9f8;
        case 0x1db9fcu: goto label_1db9fc;
        case 0x1dba00u: goto label_1dba00;
        case 0x1dba04u: goto label_1dba04;
        case 0x1dba08u: goto label_1dba08;
        case 0x1dba0cu: goto label_1dba0c;
        case 0x1dba10u: goto label_1dba10;
        case 0x1dba14u: goto label_1dba14;
        case 0x1dba18u: goto label_1dba18;
        case 0x1dba1cu: goto label_1dba1c;
        case 0x1dba20u: goto label_1dba20;
        case 0x1dba24u: goto label_1dba24;
        case 0x1dba28u: goto label_1dba28;
        case 0x1dba2cu: goto label_1dba2c;
        case 0x1dba30u: goto label_1dba30;
        case 0x1dba34u: goto label_1dba34;
        case 0x1dba38u: goto label_1dba38;
        case 0x1dba3cu: goto label_1dba3c;
        case 0x1dba40u: goto label_1dba40;
        case 0x1dba44u: goto label_1dba44;
        case 0x1dba48u: goto label_1dba48;
        case 0x1dba4cu: goto label_1dba4c;
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba54u: goto label_1dba54;
        case 0x1dba58u: goto label_1dba58;
        case 0x1dba5cu: goto label_1dba5c;
        case 0x1dba60u: goto label_1dba60;
        case 0x1dba64u: goto label_1dba64;
        case 0x1dba68u: goto label_1dba68;
        case 0x1dba6cu: goto label_1dba6c;
        case 0x1dba70u: goto label_1dba70;
        case 0x1dba74u: goto label_1dba74;
        case 0x1dba78u: goto label_1dba78;
        case 0x1dba7cu: goto label_1dba7c;
        case 0x1dba80u: goto label_1dba80;
        case 0x1dba84u: goto label_1dba84;
        case 0x1dba88u: goto label_1dba88;
        case 0x1dba8cu: goto label_1dba8c;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dba94u: goto label_1dba94;
        case 0x1dba98u: goto label_1dba98;
        case 0x1dba9cu: goto label_1dba9c;
        case 0x1dbaa0u: goto label_1dbaa0;
        case 0x1dbaa4u: goto label_1dbaa4;
        case 0x1dbaa8u: goto label_1dbaa8;
        case 0x1dbaacu: goto label_1dbaac;
        case 0x1dbab0u: goto label_1dbab0;
        case 0x1dbab4u: goto label_1dbab4;
        case 0x1dbab8u: goto label_1dbab8;
        case 0x1dbabcu: goto label_1dbabc;
        case 0x1dbac0u: goto label_1dbac0;
        case 0x1dbac4u: goto label_1dbac4;
        case 0x1dbac8u: goto label_1dbac8;
        case 0x1dbaccu: goto label_1dbacc;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbad4u: goto label_1dbad4;
        default: break;
    }

    ctx->pc = 0x1db9f8u;

label_1db9f8:
    // 0x1db9f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1db9fc:
    // 0x1db9fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dba00:
    // 0x1dba00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dba04:
    // 0x1dba04: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x1dba04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1dba08:
    // 0x1dba08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dba0c:
    // 0x1dba0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1dba10:
    // 0x1dba10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dba10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dba14:
    // 0x1dba14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1dba18:
    // 0x1dba18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dba1c:
    // 0x1dba1c: 0xc0682b2  jal         func_1A0AC8
label_1dba20:
    if (ctx->pc == 0x1DBA20u) {
        ctx->pc = 0x1DBA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA1Cu;
        // 0x1dba20: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA24u;
        goto label_1dba24;
    }
    ctx->pc = 0x1DBA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA24u);
    ctx->pc = 0x1DBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA1Cu;
    // 0x1dba20: 0x24130306  addiu       $s3, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DBA1Cu, 0x1DBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA24u;
label_1dba24:
    // 0x1dba24: 0xc0682b6  jal         func_1A0AD8
label_1dba28:
    if (ctx->pc == 0x1DBA28u) {
        ctx->pc = 0x1DBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA24u;
        // 0x1dba28: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA2Cu;
        goto label_1dba2c;
    }
    ctx->pc = 0x1DBA24u;
    SET_GPR_U32(ctx, 31, 0x1DBA2Cu);
    ctx->pc = 0x1DBA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA24u;
    // 0x1dba28: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DBA24u, 0x1DBA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA2Cu;
label_1dba2c:
    // 0x1dba2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dba30:
    // 0x1dba30: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1dba34:
    // 0x1dba34: 0x2442f690  addiu       $v0, $v0, -0x970
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964880));
label_1dba38:
    // 0x1dba38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dba3c:
    // 0x1dba3c: 0xc061258  jal         func_184960
label_1dba40:
    if (ctx->pc == 0x1DBA40u) {
        ctx->pc = 0x1DBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA3Cu;
        // 0x1dba40: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA44u;
        goto label_1dba44;
    }
    ctx->pc = 0x1DBA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA44u);
    ctx->pc = 0x1DBA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA3Cu;
    // 0x1dba40: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DBA3Cu, 0x1DBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA44u;
label_1dba44:
    // 0x1dba44: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dba44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dba48:
    // 0x1dba48: 0xc7808518  lwc1        $f0, -0x7AE8($gp)
    ctx->pc = 0x1dba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dba4c:
    // 0x1dba4c: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x1dba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_1dba50:
    // 0x1dba50: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_1dba54:
    // 0x1dba54: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1dba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_1dba58:
    // 0x1dba58: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x1dba58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_1dba5c:
    // 0x1dba5c: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1dba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_1dba60:
    // 0x1dba60: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x1dba60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_1dba64:
    // 0x1dba64: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x1dba64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_1dba68:
    // 0x1dba68: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x1dba68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_1dba6c:
    // 0x1dba6c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dba70:
    // 0x1dba70: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x1dba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_1dba74:
    // 0x1dba74: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1dba74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dba78:
    // 0x1dba78: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1dba7c:
    // 0x1dba7c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dba80:
    // 0x1dba80: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_1dba84:
    // 0x1dba84: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1dba84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dba88:
    // 0x1dba88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dba8c:
    // 0x1dba8c: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1dba90:
    // 0x1dba90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dba90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dba94:
    // 0x1dba94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dba98:
    // 0x1dba98: 0x60f809  jalr        $v1
label_1dba9c:
    if (ctx->pc == 0x1DBA9Cu) {
        ctx->pc = 0x1DBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA98u;
        // 0x1dba9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAA0u;
        goto label_1dbaa0;
    }
    ctx->pc = 0x1DBA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DBAA0u);
        ctx->pc = 0x1DBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA98u;
        // 0x1dba9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA98u, 0x1DBAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBAA0u;
label_1dbaa0:
    // 0x1dbaa0: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1dbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1dbaa4:
    // 0x1dbaa4: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
label_1dbaa8:
    // 0x1dbaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbaac:
    // 0x1dbaac: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x1dbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_1dbab0:
    // 0x1dbab0: 0xc06825c  jal         func_1A0970
label_1dbab4:
    if (ctx->pc == 0x1DBAB4u) {
        ctx->pc = 0x1DBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAB0u;
        // 0x1dbab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAB8u;
        goto label_1dbab8;
    }
    ctx->pc = 0x1DBAB0u;
    SET_GPR_U32(ctx, 31, 0x1DBAB8u);
    ctx->pc = 0x1DBAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBAB0u;
    // 0x1dbab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DBAB0u, 0x1DBAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBAB8u;
label_1dbab8:
    // 0x1dbab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dbab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbabc:
    // 0x1dbabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dbac0:
    // 0x1dbac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbac4:
    // 0x1dbac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbac8:
    // 0x1dbac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dbacc:
    // 0x1dbacc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbad0:
    // 0x1dbad0: 0x3e00008  jr          $ra
label_1dbad4:
    if (ctx->pc == 0x1DBAD4u) {
        ctx->pc = 0x1DBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAD0u;
        // 0x1dbad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAD8u;
        goto label_fallthrough_0x1dbad0;
    }
    ctx->pc = 0x1DBAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAD0u;
        // 0x1dbad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbad0:
    ctx->pc = 0x1DBAD8u;
}
