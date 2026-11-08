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

// Function: WObjectMakeSendPacket__FP8WcObjectP12VPUtilPresetP10Q_WORDDATA
// Address: 0x194f18 - 0x195120
void WObjectMakeSendPacket__FP8WcObjectP12VPUtilPresetP10Q_WORDDATA_0x194f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectMakeSendPacket__FP8WcObjectP12VPUtilPresetP10Q_WORDDATA_0x194f18");
#endif

    switch (ctx->pc) {
        case 0x194f54u: goto label_194f54;
        case 0x194f80u: goto label_194f80;
        case 0x194fa8u: goto label_194fa8;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950b0u: goto label_1950b0;
        default: break;
    }

    ctx->pc = 0x194f18u;

    // 0x194f18: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x194f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x194f1c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x194f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x194f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f24: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x194f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x194f28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x194f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f2c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x194f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x194f30: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x194f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x194f34: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x194f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x194f38: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x194f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x194f3c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x194f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x194f40: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x194f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x194f44: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x194f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x194f48: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x194f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x194f4c: 0xc06539e  jal         func_194E78
    ctx->pc = 0x194F4Cu;
    SET_GPR_U32(ctx, 31, 0x194F54u);
    ctx->pc = 0x194F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F4Cu;
    // 0x194f50: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E78u, 0x194F4Cu, 0x194F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F54u;
label_194f54:
    // 0x194f54: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x194F54u;
    {
        const bool branch_taken_0x194f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x3416ffff  ori         $s6, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f54) {
            ctx->pc = 0x1950F0u;
            goto label_1950f0;
        }
    }
    ctx->pc = 0x194F5Cu;
    // 0x194f5c: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x194f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x194f60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x194f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f68: 0x8e300158  lw          $s0, 0x158($s1)
    ctx->pc = 0x194f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x194f6c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x194f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x194f70: 0x8e310160  lw          $s1, 0x160($s1)
    ctx->pc = 0x194f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x194f74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x194f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194f78: 0xc066426  jal         func_199098
    ctx->pc = 0x194F78u;
    SET_GPR_U32(ctx, 31, 0x194F80u);
    ctx->pc = 0x194F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F78u;
    // 0x194f7c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199098u, 0x194F78u, 0x194F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F80u;
label_194f80:
    // 0x194f80: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x194f84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x194f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f88: 0x96150030  lhu         $s5, 0x30($s0)
    ctx->pc = 0x194f88u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194f8c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x194f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x194f90: 0x8e1e0038  lw          $fp, 0x38($s0)
    ctx->pc = 0x194f90u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x194f94: 0x12a00051  beqz        $s5, . + 4 + (0x51 << 2)
    ctx->pc = 0x194F94u;
    {
        const bool branch_taken_0x194f94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F94u;
        // 0x194f98: 0x8e770008  lw          $s7, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f94) {
            ctx->pc = 0x1950DCu;
            goto label_1950dc;
        }
    }
    ctx->pc = 0x194F9Cu;
    // 0x194f9c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x194f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fa0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x194fa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194fa4: 0x139ff8  dsll        $s3, $s3, 31
    ctx->pc = 0x194fa4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 31);
label_194fa8:
    // 0x194fa8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x194fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x194fac: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x194fb0: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x194fb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x194fb4: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x194fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194fb8: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x194fbc: 0x82bc2  srl         $a1, $t0, 15
    ctx->pc = 0x194fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x194fc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x194fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x194fc4: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x194fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x194fc8: 0x2e23825  or          $a3, $s7, $v0
    ctx->pc = 0x194fc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x194fcc: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x194fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x194fd0: 0x34e20010  ori         $v0, $a3, 0x10
    ctx->pc = 0x194fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x194fd4: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x194fd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x194fd8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x194fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194fdc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x194FDCu;
    {
        const bool branch_taken_0x194fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FDCu;
        // 0x194fe0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fdc) {
            ctx->pc = 0x195044u;
            goto label_195044;
        }
    }
    ctx->pc = 0x194FE4u;
    // 0x194fe4: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x194fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x194fe8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x194fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x194fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194ff0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194ff4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x194ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194ff8: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x194FF8u;
    {
        const bool branch_taken_0x194ff8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x194FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FF8u;
        // 0x194ffc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ff8) {
            ctx->pc = 0x195020u;
            goto label_195020;
        }
    }
    ctx->pc = 0x195000u;
    // 0x195000: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x195004: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x195008: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x195008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x19500c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195010: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x195014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195014u;
    {
        const bool branch_taken_0x195014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195014u;
        // 0x195018: 0x213fc  dsll32      $v0, $v0, 15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195014) {
            ctx->pc = 0x195038u;
            goto label_195038;
        }
    }
    ctx->pc = 0x19501Cu;
    // 0x19501c: 0x0  nop
    ctx->pc = 0x19501cu;
    // NOP
label_195020:
    // 0x195020: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x195020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x195024: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x195024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x195028: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x19502c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x19502cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x195030: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195034: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_195038:
    // 0x195038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19503c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x19503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x195040: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x195040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_195044:
    // 0x195044: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x195044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x195048: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x195048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19504c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19504Cu;
    {
        const bool branch_taken_0x19504c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19504Cu;
        // 0x195050: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19504c) {
            ctx->pc = 0x195080u;
            goto label_195080;
        }
    }
    ctx->pc = 0x195054u;
    // 0x195054: 0x10760009  beq         $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x195054u;
    {
        const bool branch_taken_0x195054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x195058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195054u;
        // 0x195058: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195054) {
            ctx->pc = 0x19507Cu;
            goto label_19507c;
        }
    }
    ctx->pc = 0x19505Cu;
    // 0x19505c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195060: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x195064: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x195064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x195068: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x195068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x19506c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x19506cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x195070: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195074: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x195074u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x195078: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x195078u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_19507c:
    // 0x19507c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_195080:
    // 0x195080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195084: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x195084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x195088: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19508c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x19508cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x195090: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x195090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x195094: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x195094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x195098: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19509c: 0xc066442  jal         func_199108
    ctx->pc = 0x19509Cu;
    SET_GPR_U32(ctx, 31, 0x1950A4u);
    ctx->pc = 0x1950A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19509Cu;
    // 0x1950a0: 0x9627000a  lhu         $a3, 0xA($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x19509Cu, 0x1950A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950A4u;
label_1950a4:
    // 0x1950a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1950a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1950a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1950acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1950b0:
    // 0x1950b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1950b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1950b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1950b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1950b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1950bc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1950bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1950c0: 0x0  nop
    ctx->pc = 0x1950c0u;
    // NOP
    // 0x1950c4: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1950C4u;
    {
        const bool branch_taken_0x1950c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1950C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950C4u;
        // 0x1950c8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950c4) {
            ctx->pc = 0x1950B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1950b0;
        }
    }
    ctx->pc = 0x1950CCu;
    // 0x1950cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1950ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1950d0: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x1950d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1950d4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1950D4u;
    {
        const bool branch_taken_0x1950d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1950D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D4u;
        // 0x1950d8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950d4) {
            ctx->pc = 0x194FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194fa8;
        }
    }
    ctx->pc = 0x1950DCu;
label_1950dc:
    // 0x1950dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1950dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1950e0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1950e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1950e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1950e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1950e8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1950e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1950ec: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1950ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1950f0:
    // 0x1950f0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1950f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1950f4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1950f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1950f8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1950f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1950fc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1950fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195100: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195104: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x195104u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x195108: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x195108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19510c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x19510cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x195110: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x195110u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x195114: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x195114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x195118: 0x3e00008  jr          $ra
    ctx->pc = 0x195118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195118u;
        // 0x19511c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195120u;
}
