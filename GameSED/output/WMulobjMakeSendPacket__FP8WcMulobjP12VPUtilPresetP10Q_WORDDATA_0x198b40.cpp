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

// Function: WMulobjMakeSendPacket__FP8WcMulobjP12VPUtilPresetP10Q_WORDDATA
// Address: 0x198b40 - 0x198d84
void WMulobjMakeSendPacket__FP8WcMulobjP12VPUtilPresetP10Q_WORDDATA_0x198b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMulobjMakeSendPacket__FP8WcMulobjP12VPUtilPresetP10Q_WORDDATA_0x198b40");
#endif

    switch (ctx->pc) {
        case 0x198b80u: goto label_198b80;
        case 0x198ba4u: goto label_198ba4;
        case 0x198c00u: goto label_198c00;
        case 0x198d04u: goto label_198d04;
        case 0x198d10u: goto label_198d10;
        default: break;
    }

    ctx->pc = 0x198b40u;

    // 0x198b40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x198b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x198b44: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x198b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x198b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b4c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x198b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x198b50: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x198b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x198b54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b58: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x198b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x198b5c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x198b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x198b60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x198b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b64: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x198b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x198b68: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x198b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x198b6c: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x198b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x198b70: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x198b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x198b74: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x198b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x198b78: 0xc06539e  jal         func_194E78
    ctx->pc = 0x198B78u;
    SET_GPR_U32(ctx, 31, 0x198B80u);
    ctx->pc = 0x198B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B78u;
    // 0x198b7c: 0x3416ffff  ori         $s6, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E78u, 0x198B78u, 0x198B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B80u;
label_198b80:
    // 0x198b80: 0x96030150  lhu         $v1, 0x150($s0)
    ctx->pc = 0x198b80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x198b84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x198b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b8c: 0x8e110158  lw          $s1, 0x158($s0)
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x198b90: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x198b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x198b94: 0x8e130160  lw          $s3, 0x160($s0)
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x198b98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x198b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x198b9c: 0xc066426  jal         func_199098
    ctx->pc = 0x198B9Cu;
    SET_GPR_U32(ctx, 31, 0x198BA4u);
    ctx->pc = 0x198BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B9Cu;
    // 0x198ba0: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199098u, 0x198B9Cu, 0x198BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BA4u;
label_198ba4:
    // 0x198ba4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x198ba8: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x198bac: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x198bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x198bb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bb4: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x198bb8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x198bbc: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x198bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
    // 0x198bc0: 0x96350030  lhu         $s5, 0x30($s1)
    ctx->pc = 0x198bc0u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x198bc4: 0x8e310038  lw          $s1, 0x38($s1)
    ctx->pc = 0x198bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x198bc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198BC8u;
    {
        const bool branch_taken_0x198bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BC8u;
        // 0x198bcc: 0xafb1006c  sw          $s1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bc8) {
            ctx->pc = 0x198BE0u;
            goto label_198be0;
        }
    }
    ctx->pc = 0x198BD0u;
    // 0x198bd0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x198bd4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x198bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x198bd8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198bdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x198bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_198be0:
    // 0x198be0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x198be0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198be4: 0x12a00056  beqz        $s5, . + 4 + (0x56 << 2)
    ctx->pc = 0x198BE4u;
    {
        const bool branch_taken_0x198be4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BE4u;
        // 0x198be8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198be4) {
            ctx->pc = 0x198D40u;
            goto label_198d40;
        }
    }
    ctx->pc = 0x198BECu;
    // 0x198bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bf0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x198bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bf4: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x198bf4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198bf8: 0x17bff8  dsll        $s7, $s7, 31
    ctx->pc = 0x198bf8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 31);
    // 0x198bfc: 0x0  nop
    ctx->pc = 0x198bfcu;
    // NOP
label_198c00:
    // 0x198c00: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x198c04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x198c08: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x198c08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x198c0c: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x198c10: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x198c14: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x198c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x198c18: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198c1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x198c20: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198c24: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x198C24u;
    {
        const bool branch_taken_0x198c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C24u;
        // 0x198c28: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c24) {
            ctx->pc = 0x198C8Cu;
            goto label_198c8c;
        }
    }
    ctx->pc = 0x198C2Cu;
    // 0x198c2c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x198c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x198c30: 0x71bc2  srl         $v1, $a3, 15
    ctx->pc = 0x198c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 15));
    // 0x198c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x198c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x198c38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198c3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x198c40: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x198c44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x198c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x198c48: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198C48u;
    {
        const bool branch_taken_0x198c48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x198C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C48u;
        // 0x198c4c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c48) {
            ctx->pc = 0x198C68u;
            goto label_198c68;
        }
    }
    ctx->pc = 0x198C50u;
    // 0x198c50: 0x313fc  dsll32      $v0, $v1, 15
    ctx->pc = 0x198c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 15));
    // 0x198c54: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x198c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x198c58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198c5c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x198c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x198c60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x198C60u;
    {
        const bool branch_taken_0x198c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C60u;
        // 0x198c64: 0x24030412  addiu       $v1, $zero, 0x412 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c60) {
            ctx->pc = 0x198C7Cu;
            goto label_198c7c;
        }
    }
    ctx->pc = 0x198C68u;
label_198c68:
    // 0x198c68: 0x313fc  dsll32      $v0, $v1, 15
    ctx->pc = 0x198c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 15));
    // 0x198c6c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x198c70: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x198c74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198c78: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x198c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_198c7c:
    // 0x198c7c: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x198c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x198c80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x198c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x198c84: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x198c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x198c88: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x198c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_198c8c:
    // 0x198c8c: 0x96630008  lhu         $v1, 0x8($s3)
    ctx->pc = 0x198c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x198c90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x198c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x198c94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x198C94u;
    {
        const bool branch_taken_0x198c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198c94) {
            ctx->pc = 0x198CC8u;
            goto label_198cc8;
        }
    }
    ctx->pc = 0x198C9Cu;
    // 0x198c9c: 0x1076000a  beq         $v1, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x198C9Cu;
    {
        const bool branch_taken_0x198c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x198CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C9Cu;
        // 0x198ca0: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c9c) {
            ctx->pc = 0x198CC8u;
            goto label_198cc8;
        }
    }
    ctx->pc = 0x198CA4u;
    // 0x198ca4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x198ca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ca8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x198ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x198cac: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x198cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198cb4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x198cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198cb8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x198cb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198cbc: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x198cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x198cc0: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x198cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x198cc4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x198cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_198cc8:
    // 0x198cc8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x198CC8u;
    {
        const bool branch_taken_0x198cc8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC8u;
        // 0x198ccc: 0x34a30080  ori         $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc8) {
            ctx->pc = 0x198CDCu;
            goto label_198cdc;
        }
    }
    ctx->pc = 0x198CD0u;
    // 0x198cd0: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x198cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x198cd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x198cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x198cd8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x198cd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_198cdc:
    // 0x198cdc: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x198cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x198ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ce4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x198ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x198ce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cec: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x198cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x198cf0: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x198cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x198cf4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x198cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x198cf8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x198cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198cfc: 0xc066442  jal         func_199108
    ctx->pc = 0x198CFCu;
    SET_GPR_U32(ctx, 31, 0x198D04u);
    ctx->pc = 0x198D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CFCu;
    // 0x198d00: 0x9667000a  lhu         $a3, 0xA($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x198CFCu, 0x198D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D04u;
label_198d04:
    // 0x198d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198d10:
    // 0x198d10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x198d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198d14: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x198d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198d1c: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x198d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x198d20: 0x0  nop
    ctx->pc = 0x198d20u;
    // NOP
    // 0x198d24: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198D24u;
    {
        const bool branch_taken_0x198d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x198D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D24u;
        // 0x198d28: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d24) {
            ctx->pc = 0x198D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198d10;
        }
    }
    ctx->pc = 0x198D2Cu;
    // 0x198d2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x198d30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198d34: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x198d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x198d38: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x198D38u;
    {
        const bool branch_taken_0x198d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D38u;
        // 0x198d3c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d38) {
            ctx->pc = 0x198C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198c00;
        }
    }
    ctx->pc = 0x198D40u;
label_198d40:
    // 0x198d40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x198d44: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x198d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x198d48: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x198d48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x198d4c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x198d50: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x198d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x198d54: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x198d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198d58: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x198d5c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x198d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198d60: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x198d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x198d64: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x198d64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198d68: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x198d68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x198d6c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x198d6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198d70: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x198d70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x198d74: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x198d74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198d78: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x198d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x198d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x198D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D7Cu;
        // 0x198d80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198D84u;
}
