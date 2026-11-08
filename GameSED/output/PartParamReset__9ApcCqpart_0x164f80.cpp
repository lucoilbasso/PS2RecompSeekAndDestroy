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

// Function: PartParamReset__9ApcCqpart
// Address: 0x164f80 - 0x165168
void PartParamReset__9ApcCqpart_0x164f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartParamReset__9ApcCqpart_0x164f80");
#endif

    switch (ctx->pc) {
        case 0x164f80u: goto label_164f80;
        case 0x164f84u: goto label_164f84;
        case 0x164f88u: goto label_164f88;
        case 0x164f8cu: goto label_164f8c;
        case 0x164f90u: goto label_164f90;
        case 0x164f94u: goto label_164f94;
        case 0x164f98u: goto label_164f98;
        case 0x164f9cu: goto label_164f9c;
        case 0x164fa0u: goto label_164fa0;
        case 0x164fa4u: goto label_164fa4;
        case 0x164fa8u: goto label_164fa8;
        case 0x164facu: goto label_164fac;
        case 0x164fb0u: goto label_164fb0;
        case 0x164fb4u: goto label_164fb4;
        case 0x164fb8u: goto label_164fb8;
        case 0x164fbcu: goto label_164fbc;
        case 0x164fc0u: goto label_164fc0;
        case 0x164fc4u: goto label_164fc4;
        case 0x164fc8u: goto label_164fc8;
        case 0x164fccu: goto label_164fcc;
        case 0x164fd0u: goto label_164fd0;
        case 0x164fd4u: goto label_164fd4;
        case 0x164fd8u: goto label_164fd8;
        case 0x164fdcu: goto label_164fdc;
        case 0x164fe0u: goto label_164fe0;
        case 0x164fe4u: goto label_164fe4;
        case 0x164fe8u: goto label_164fe8;
        case 0x164fecu: goto label_164fec;
        case 0x164ff0u: goto label_164ff0;
        case 0x164ff4u: goto label_164ff4;
        case 0x164ff8u: goto label_164ff8;
        case 0x164ffcu: goto label_164ffc;
        case 0x165000u: goto label_165000;
        case 0x165004u: goto label_165004;
        case 0x165008u: goto label_165008;
        case 0x16500cu: goto label_16500c;
        case 0x165010u: goto label_165010;
        case 0x165014u: goto label_165014;
        case 0x165018u: goto label_165018;
        case 0x16501cu: goto label_16501c;
        case 0x165020u: goto label_165020;
        case 0x165024u: goto label_165024;
        case 0x165028u: goto label_165028;
        case 0x16502cu: goto label_16502c;
        case 0x165030u: goto label_165030;
        case 0x165034u: goto label_165034;
        case 0x165038u: goto label_165038;
        case 0x16503cu: goto label_16503c;
        case 0x165040u: goto label_165040;
        case 0x165044u: goto label_165044;
        case 0x165048u: goto label_165048;
        case 0x16504cu: goto label_16504c;
        case 0x165050u: goto label_165050;
        case 0x165054u: goto label_165054;
        case 0x165058u: goto label_165058;
        case 0x16505cu: goto label_16505c;
        case 0x165060u: goto label_165060;
        case 0x165064u: goto label_165064;
        case 0x165068u: goto label_165068;
        case 0x16506cu: goto label_16506c;
        case 0x165070u: goto label_165070;
        case 0x165074u: goto label_165074;
        case 0x165078u: goto label_165078;
        case 0x16507cu: goto label_16507c;
        case 0x165080u: goto label_165080;
        case 0x165084u: goto label_165084;
        case 0x165088u: goto label_165088;
        case 0x16508cu: goto label_16508c;
        case 0x165090u: goto label_165090;
        case 0x165094u: goto label_165094;
        case 0x165098u: goto label_165098;
        case 0x16509cu: goto label_16509c;
        case 0x1650a0u: goto label_1650a0;
        case 0x1650a4u: goto label_1650a4;
        case 0x1650a8u: goto label_1650a8;
        case 0x1650acu: goto label_1650ac;
        case 0x1650b0u: goto label_1650b0;
        case 0x1650b4u: goto label_1650b4;
        case 0x1650b8u: goto label_1650b8;
        case 0x1650bcu: goto label_1650bc;
        case 0x1650c0u: goto label_1650c0;
        case 0x1650c4u: goto label_1650c4;
        case 0x1650c8u: goto label_1650c8;
        case 0x1650ccu: goto label_1650cc;
        case 0x1650d0u: goto label_1650d0;
        case 0x1650d4u: goto label_1650d4;
        case 0x1650d8u: goto label_1650d8;
        case 0x1650dcu: goto label_1650dc;
        case 0x1650e0u: goto label_1650e0;
        case 0x1650e4u: goto label_1650e4;
        case 0x1650e8u: goto label_1650e8;
        case 0x1650ecu: goto label_1650ec;
        case 0x1650f0u: goto label_1650f0;
        case 0x1650f4u: goto label_1650f4;
        case 0x1650f8u: goto label_1650f8;
        case 0x1650fcu: goto label_1650fc;
        case 0x165100u: goto label_165100;
        case 0x165104u: goto label_165104;
        case 0x165108u: goto label_165108;
        case 0x16510cu: goto label_16510c;
        case 0x165110u: goto label_165110;
        case 0x165114u: goto label_165114;
        case 0x165118u: goto label_165118;
        case 0x16511cu: goto label_16511c;
        case 0x165120u: goto label_165120;
        case 0x165124u: goto label_165124;
        case 0x165128u: goto label_165128;
        case 0x16512cu: goto label_16512c;
        case 0x165130u: goto label_165130;
        case 0x165134u: goto label_165134;
        case 0x165138u: goto label_165138;
        case 0x16513cu: goto label_16513c;
        case 0x165140u: goto label_165140;
        case 0x165144u: goto label_165144;
        case 0x165148u: goto label_165148;
        case 0x16514cu: goto label_16514c;
        case 0x165150u: goto label_165150;
        case 0x165154u: goto label_165154;
        case 0x165158u: goto label_165158;
        case 0x16515cu: goto label_16515c;
        case 0x165160u: goto label_165160;
        case 0x165164u: goto label_165164;
        default: break;
    }

    ctx->pc = 0x164f80u;

label_164f80:
    // 0x164f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164f84:
    // 0x164f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_164f88:
    // 0x164f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164f8c:
    // 0x164f8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_164f90:
    // 0x164f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_164f94:
    // 0x164f94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_164f98:
    // 0x164f98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x164f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_164f9c:
    // 0x164f9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x164f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_164fa0:
    // 0x164fa0: 0x8e1401b0  lw          $s4, 0x1B0($s0)
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_164fa4:
    // 0x164fa4: 0x1a800068  blez        $s4, . + 4 + (0x68 << 2)
label_164fa8:
    if (ctx->pc == 0x164FA8u) {
        ctx->pc = 0x164FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FA4u;
        // 0x164fa8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FACu;
        goto label_164fac;
    }
    ctx->pc = 0x164FA4u;
    {
        const bool branch_taken_0x164fa4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x164FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FA4u;
        // 0x164fa8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fa4) {
            ctx->pc = 0x165148u;
            goto label_165148;
        }
    }
    ctx->pc = 0x164FACu;
label_164fac:
    // 0x164fac: 0x8e0401b4  lw          $a0, 0x1B4($s0)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_164fb0:
    // 0x164fb0: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x164fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_164fb4:
    // 0x164fb4: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x164fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_164fb8:
    // 0x164fb8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_164fbc:
    // 0x164fbc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_164fc0:
    // 0x164fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_164fc4:
    // 0x164fc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_164fc8:
    // 0x164fc8: 0x2c83002c  sltiu       $v1, $a0, 0x2C
    ctx->pc = 0x164fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
label_164fcc:
    // 0x164fcc: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_164fd0:
    if (ctx->pc == 0x164FD0u) {
        ctx->pc = 0x164FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FCCu;
        // 0x164fd0: 0xac530c0c  sw          $s3, 0xC0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164FD4u;
        goto label_164fd4;
    }
    ctx->pc = 0x164FCCu;
    {
        const bool branch_taken_0x164fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FCCu;
        // 0x164fd0: 0xac530c0c  sw          $s3, 0xC0C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3084), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fcc) {
            ctx->pc = 0x165138u;
            goto label_165138;
        }
    }
    ctx->pc = 0x164FD4u;
label_164fd4:
    // 0x164fd4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x164fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_164fd8:
    // 0x164fd8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x164fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_164fdc:
    // 0x164fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164fe0:
    // 0x164fe0: 0x8c637070  lw          $v1, 0x7070($v1)
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28784)));
label_164fe4:
    // 0x164fe4: 0x600008  jr          $v1
label_164fe8:
    if (ctx->pc == 0x164FE8u) {
        ctx->pc = 0x164FECu;
        goto label_164fec;
    }
    ctx->pc = 0x164FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164FF0u: goto label_164ff0;
            case 0x165058u: goto label_165058;
            case 0x165080u: goto label_165080;
            case 0x1650D0u: goto label_1650d0;
            case 0x1650F0u: goto label_1650f0;
            case 0x165138u: goto label_165138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164FE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x164FECu;
label_164fec:
    // 0x164fec: 0x0  nop
    ctx->pc = 0x164fecu;
    // NOP
label_164ff0:
    // 0x164ff0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_164ff4:
    // 0x164ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164ff8:
    // 0x164ff8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x164ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_164ffc:
    // 0x164ffc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x164ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_165000:
    // 0x165000: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_165004:
    // 0x165004: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_165008:
    // 0x165008: 0x60f809  jalr        $v1
label_16500c:
    if (ctx->pc == 0x16500Cu) {
        ctx->pc = 0x16500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165008u;
        // 0x16500c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165010u;
        goto label_165010;
    }
    ctx->pc = 0x165008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165010u);
        ctx->pc = 0x16500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165008u;
        // 0x16500c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165008u, 0x165010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165010u;
label_165010:
    // 0x165010: 0x8e021230  lw          $v0, 0x1230($s0)
    ctx->pc = 0x165010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_165014:
    // 0x165014: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_165018:
    if (ctx->pc == 0x165018u) {
        ctx->pc = 0x165018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165014u;
        // 0x165018: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16501Cu;
        goto label_16501c;
    }
    ctx->pc = 0x165014u;
    {
        const bool branch_taken_0x165014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165014u;
        // 0x165018: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165014) {
            ctx->pc = 0x16513Cu;
            goto label_16513c;
        }
    }
    ctx->pc = 0x16501Cu;
label_16501c:
    // 0x16501c: 0xc066362  jal         func_198D88
label_165020:
    if (ctx->pc == 0x165020u) {
        ctx->pc = 0x165024u;
        goto label_165024;
    }
    ctx->pc = 0x16501Cu;
    SET_GPR_U32(ctx, 31, 0x165024u);
    ctx->pc = 0x198D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198D88u, 0x16501Cu, 0x165024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165024u;
label_165024:
    // 0x165024: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x165024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_165028:
    // 0x165028: 0xae021230  sw          $v0, 0x1230($s0)
    ctx->pc = 0x165028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 2));
label_16502c:
    // 0x16502c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165030:
    // 0x165030: 0xc064ec6  jal         func_193B18
label_165034:
    if (ctx->pc == 0x165034u) {
        ctx->pc = 0x165034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165030u;
        // 0x165034: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165038u;
        goto label_165038;
    }
    ctx->pc = 0x165030u;
    SET_GPR_U32(ctx, 31, 0x165038u);
    ctx->pc = 0x165034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165030u;
    // 0x165034: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x165030u, 0x165038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165038u;
label_165038:
    // 0x165038: 0x8e041230  lw          $a0, 0x1230($s0)
    ctx->pc = 0x165038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_16503c:
    // 0x16503c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_165040:
    // 0x165040: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x165040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_165044:
    // 0x165044: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x165044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_165048:
    // 0x165048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x165048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16504c:
    // 0x16504c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_165050:
    if (ctx->pc == 0x165050u) {
        ctx->pc = 0x165050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16504Cu;
        // 0x165050: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165054u;
        goto label_165054;
    }
    ctx->pc = 0x16504Cu;
    {
        const bool branch_taken_0x16504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16504Cu;
        // 0x165050: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16504c) {
            ctx->pc = 0x16513Cu;
            goto label_16513c;
        }
    }
    ctx->pc = 0x165054u;
label_165054:
    // 0x165054: 0x0  nop
    ctx->pc = 0x165054u;
    // NOP
label_165058:
    // 0x165058: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x165058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16505c:
    // 0x16505c: 0x26051180  addiu       $a1, $s0, 0x1180
    ctx->pc = 0x16505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
label_165060:
    // 0x165060: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x165060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_165064:
    // 0x165064: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x165064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_165068:
    // 0x165068: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x165068u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_16506c:
    // 0x16506c: 0x26041190  addiu       $a0, $s0, 0x1190
    ctx->pc = 0x16506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4496));
label_165070:
    // 0x165070: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x165070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_165074:
    // 0x165074: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x165074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_165078:
    // 0x165078: 0x10000030  b           . + 4 + (0x30 << 2)
label_16507c:
    if (ctx->pc == 0x16507Cu) {
        ctx->pc = 0x16507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165078u;
        // 0x16507c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165080u;
        goto label_165080;
    }
    ctx->pc = 0x165078u;
    {
        const bool branch_taken_0x165078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165078u;
        // 0x16507c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165078) {
            ctx->pc = 0x16513Cu;
            goto label_16513c;
        }
    }
    ctx->pc = 0x165080u;
label_165080:
    // 0x165080: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_165084:
    // 0x165084: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_165088:
    if (ctx->pc == 0x165088u) {
        ctx->pc = 0x165088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165084u;
        // 0x165088: 0x260411c0  addiu       $a0, $s0, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16508Cu;
        goto label_16508c;
    }
    ctx->pc = 0x165084u;
    {
        const bool branch_taken_0x165084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165084) {
            ctx->pc = 0x165088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165084u;
            // 0x165088: 0x260411c0  addiu       $a0, $s0, 0x11C0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1650B0u;
            goto label_1650b0;
        }
    }
    ctx->pc = 0x16508Cu;
label_16508c:
    // 0x16508c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_165090:
    // 0x165090: 0x260511a0  addiu       $a1, $s0, 0x11A0
    ctx->pc = 0x165090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4512));
label_165094:
    // 0x165094: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_165098:
    // 0x165098: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x165098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_16509c:
    // 0x16509c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16509cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1650a0:
    // 0x1650a0: 0x260411b0  addiu       $a0, $s0, 0x11B0
    ctx->pc = 0x1650a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4528));
label_1650a4:
    // 0x1650a4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1650a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1650a8:
    // 0x1650a8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1650a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1650ac:
    // 0x1650ac: 0x260411c0  addiu       $a0, $s0, 0x11C0
    ctx->pc = 0x1650acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
label_1650b0:
    // 0x1650b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1650b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1650b4:
    // 0x1650b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1650b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1650b8:
    // 0x1650b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1650bc:
    // 0x1650bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1650bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1650c0:
    // 0x1650c0: 0xac5311c4  sw          $s3, 0x11C4($v0)
    ctx->pc = 0x1650c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4548), GPR_U32(ctx, 19));
label_1650c4:
    // 0x1650c4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1650c8:
    if (ctx->pc == 0x1650C8u) {
        ctx->pc = 0x1650C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650C4u;
        // 0x1650c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650CCu;
        goto label_1650cc;
    }
    ctx->pc = 0x1650C4u;
    {
        const bool branch_taken_0x1650c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650C4u;
        // 0x1650c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650c4) {
            ctx->pc = 0x165138u;
            goto label_165138;
        }
    }
    ctx->pc = 0x1650CCu;
label_1650cc:
    // 0x1650cc: 0x0  nop
    ctx->pc = 0x1650ccu;
    // NOP
label_1650d0:
    // 0x1650d0: 0x260411e0  addiu       $a0, $s0, 0x11E0
    ctx->pc = 0x1650d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4576));
label_1650d4:
    // 0x1650d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1650d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1650d8:
    // 0x1650d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1650d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1650dc:
    // 0x1650dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1650dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1650e0:
    // 0x1650e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1650e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1650e4:
    // 0x1650e4: 0xac5311e4  sw          $s3, 0x11E4($v0)
    ctx->pc = 0x1650e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4580), GPR_U32(ctx, 19));
label_1650e8:
    // 0x1650e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1650ec:
    if (ctx->pc == 0x1650ECu) {
        ctx->pc = 0x1650ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650E8u;
        // 0x1650ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1650F0u;
        goto label_1650f0;
    }
    ctx->pc = 0x1650E8u;
    {
        const bool branch_taken_0x1650e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650E8u;
        // 0x1650ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650e8) {
            ctx->pc = 0x165138u;
            goto label_165138;
        }
    }
    ctx->pc = 0x1650F0u;
label_1650f0:
    // 0x1650f0: 0x261110fc  addiu       $s1, $s0, 0x10FC
    ctx->pc = 0x1650f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
label_1650f4:
    // 0x1650f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1650f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1650f8:
    // 0x1650f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1650fc:
    if (ctx->pc == 0x1650FCu) {
        ctx->pc = 0x1650FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650F8u;
        // 0x1650fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165100u;
        goto label_165100;
    }
    ctx->pc = 0x1650F8u;
    {
        const bool branch_taken_0x1650f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650f8) {
            ctx->pc = 0x1650FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1650F8u;
            // 0x1650fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165124u;
            goto label_165124;
        }
    }
    ctx->pc = 0x165100u;
label_165100:
    // 0x165100: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x165100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_165104:
    // 0x165104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165108:
    // 0x165108: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16510c:
    // 0x16510c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_165110:
    // 0x165110: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_165114:
    // 0x165114: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x165114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_165118:
    // 0x165118: 0x60f809  jalr        $v1
label_16511c:
    if (ctx->pc == 0x16511Cu) {
        ctx->pc = 0x16511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165118u;
        // 0x16511c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165120u;
        goto label_165120;
    }
    ctx->pc = 0x165118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165120u);
        ctx->pc = 0x16511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165118u;
        // 0x16511c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165118u, 0x165120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165120u;
label_165120:
    // 0x165120: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_165124:
    // 0x165124: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x165124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_165128:
    // 0x165128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16512c:
    // 0x16512c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_165130:
    // 0x165130: 0xac531108  sw          $s3, 0x1108($v0)
    ctx->pc = 0x165130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4360), GPR_U32(ctx, 19));
label_165134:
    // 0x165134: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x165134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_165138:
    // 0x165138: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x165138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16513c:
    // 0x16513c: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x16513cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_165140:
    // 0x165140: 0x5440ff9b  bnel        $v0, $zero, . + 4 + (-0x65 << 2)
label_165144:
    if (ctx->pc == 0x165144u) {
        ctx->pc = 0x165144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165140u;
        // 0x165144: 0x8e0401b4  lw          $a0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165148u;
        goto label_165148;
    }
    ctx->pc = 0x165140u;
    {
        const bool branch_taken_0x165140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165140) {
            ctx->pc = 0x165144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165140u;
            // 0x165144: 0x8e0401b4  lw          $a0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164fb0;
        }
    }
    ctx->pc = 0x165148u;
label_165148:
    // 0x165148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16514c:
    // 0x16514c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16514cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_165150:
    // 0x165150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165154:
    // 0x165154: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x165154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_165158:
    // 0x165158: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x165158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16515c:
    // 0x16515c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16515cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_165160:
    // 0x165160: 0x3e00008  jr          $ra
label_165164:
    if (ctx->pc == 0x165164u) {
        ctx->pc = 0x165164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165160u;
        // 0x165164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165168u;
        goto label_fallthrough_0x165160;
    }
    ctx->pc = 0x165160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165160u;
        // 0x165164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165160:
    ctx->pc = 0x165168u;
}
