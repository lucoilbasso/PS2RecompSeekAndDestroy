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

// Function: _cpr8
// Address: 0x1c2f68 - 0x1c31f8
void _cpr8_0x1c2f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cpr8_0x1c2f68");
#endif

    switch (ctx->pc) {
        case 0x1c3050u: goto label_1c3050;
        case 0x1c3060u: goto label_1c3060;
        case 0x1c3068u: goto label_1c3068;
        case 0x1c30acu: goto label_1c30ac;
        case 0x1c30c0u: goto label_1c30c0;
        case 0x1c30e4u: goto label_1c30e4;
        case 0x1c3128u: goto label_1c3128;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c3160u: goto label_1c3160;
        default: break;
    }

    ctx->pc = 0x1c2f68u;

    // 0x1c2f68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c2f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c2f6c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1c2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1c2f70: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c2f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c2f74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c2f78: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c2f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c2f7c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c2f7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f80: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c2f84: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c2f88: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1c2f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1c2f8c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1c2f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1c2f90: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1c2f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1c2f94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c2f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c2f98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1c2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1c2f9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1c2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1c2fa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c2fa4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1c2fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2fa8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1c2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c2fac: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x1c2facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x1c2fb0: 0x8cc50174  lw          $a1, 0x174($a2)
    ctx->pc = 0x1c2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1c2fb4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1c2fb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c2fb8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1c2fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c2fbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c2fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2fc0: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2FC0u;
    {
        const bool branch_taken_0x1c2fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FC0u;
        // 0x1c2fc4: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fc0) {
            ctx->pc = 0x1C2FDCu;
            goto label_1c2fdc;
        }
    }
    ctx->pc = 0x1C2FC8u;
    // 0x1c2fc8: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x1c2fcc: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2FCCu;
    {
        const bool branch_taken_0x1c2fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FCCu;
        // 0x1c2fd0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fcc) {
            ctx->pc = 0x1C3014u;
            goto label_1c3014;
        }
    }
    ctx->pc = 0x1C2FD4u;
    // 0x1c2fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2FD4u;
    {
        const bool branch_taken_0x1c2fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FD4u;
        // 0x1c2fd8: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fd4) {
            ctx->pc = 0x1C2FE8u;
            goto label_1c2fe8;
        }
    }
    ctx->pc = 0x1C2FDCu;
label_1c2fdc:
    // 0x1c2fdc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2fe0: 0x8ce300e0  lw          $v1, 0xE0($a3)
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x1c2fe4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1c2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1c2fe8:
    // 0x1c2fe8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c2fec: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x1c2fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1c2ff0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2FF0u;
    {
        const bool branch_taken_0x1c2ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FF0u;
        // 0x1c2ff4: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ff0) {
            ctx->pc = 0x1C3004u;
            goto label_1c3004;
        }
    }
    ctx->pc = 0x1C2FF8u;
    // 0x1c2ff8: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1c2ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1c2ffc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2FFCu;
    {
        const bool branch_taken_0x1c2ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FFCu;
        // 0x1c3000: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ffc) {
            ctx->pc = 0x1C3008u;
            goto label_1c3008;
        }
    }
    ctx->pc = 0x1C3004u;
label_1c3004:
    // 0x1c3004: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x1c3004u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c3008:
    // 0x1c3008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c300c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C300Cu;
    {
        const bool branch_taken_0x1c300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C300Cu;
        // 0x1c3010: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c300c) {
            ctx->pc = 0x1C303Cu;
            goto label_1c303c;
        }
    }
    ctx->pc = 0x1C3014u;
label_1c3014:
    // 0x1c3014: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1c3014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1c3018: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c301c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1c3020: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1c3020u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1c3024: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c3028: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x1c3028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x1c302c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x1c302cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1c3030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3034: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1c3034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1c3038: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_1c303c:
    // 0x1c303c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1c303cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c3040: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x1C3040u;
    {
        const bool branch_taken_0x1c3040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3040u;
        // 0x1c3044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3040) {
            ctx->pc = 0x1C31C8u;
            goto label_1c31c8;
        }
    }
    ctx->pc = 0x1C3048u;
    // 0x1c3048: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1c3048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1c304c: 0x0  nop
    ctx->pc = 0x1c304cu;
    // NOP
label_1c3050:
    // 0x1c3050: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x1c3050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3054: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C3054u;
    {
        const bool branch_taken_0x1c3054 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3054u;
        // 0x1c3058: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3054) {
            ctx->pc = 0x1C3194u;
            goto label_1c3194;
        }
    }
    ctx->pc = 0x1C305Cu;
    // 0x1c305c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c3060:
    // 0x1c3060: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C3060u;
    SET_GPR_U32(ctx, 31, 0x1C3068u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C3060u, 0x1C3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3068u;
label_1c3068:
    // 0x1c3068: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c306c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3070: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x1c3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x1c3074: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x1c3074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x1c3078: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c3078u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0));
    // 0x1c307c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3080: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x1c3080u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18));
    // 0x1c3084: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x1c3084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x1c3088: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c308c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x1c308cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20));
    // 0x1c3090: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x1c3090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x1c3094: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1c3094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3098: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c3098u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3));
    // 0x1c309c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C309Cu;
    {
        const bool branch_taken_0x1c309c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C309Cu;
        // 0x1c30a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c309c) {
            ctx->pc = 0x1C30B0u;
            goto label_1c30b0;
        }
    }
    ctx->pc = 0x1C30A4u;
    // 0x1c30a4: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C30A4u;
    SET_GPR_U32(ctx, 31, 0x1C30ACu);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C30A4u, 0x1C30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30ACu;
label_1c30ac:
    // 0x1c30ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c30acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1c30b0:
    // 0x1c30b0: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x1c30b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x1c30b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c30b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c30b8: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1c30bc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1c30bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_1c30c0:
    // 0x1c30c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c30c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c30c8: 0x0  nop
    ctx->pc = 0x1c30c8u;
    // NOP
    // 0x1c30cc: 0x0  nop
    ctx->pc = 0x1c30ccu;
    // NOP
    // 0x1c30d0: 0x0  nop
    ctx->pc = 0x1c30d0u;
    // NOP
    // 0x1c30d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C30D4u;
    {
        const bool branch_taken_0x1c30d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c30d4) {
            ctx->pc = 0x1C30C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30c0;
        }
    }
    ctx->pc = 0x1C30DCu;
    // 0x1c30dc: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C30DCu;
    SET_GPR_U32(ctx, 31, 0x1C30E4u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C30DCu, 0x1C30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30E4u;
label_1c30e4:
    // 0x1c30e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c30e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c30ec: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x1c30ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x1c30f0: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x1c30f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c30f4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0));
    // 0x1c30f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c30fc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x1c30fcu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17));
    // 0x1c3100: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x1c3100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x1c3104: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3108: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x1c3108u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20));
    // 0x1c310c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x1c310cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x1c3110: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3114: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c3114u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3));
    // 0x1c3118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3118u;
    {
        const bool branch_taken_0x1c3118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3118u;
        // 0x1c311c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3118) {
            ctx->pc = 0x1C312Cu;
            goto label_1c312c;
        }
    }
    ctx->pc = 0x1C3120u;
    // 0x1c3120: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3120u;
    SET_GPR_U32(ctx, 31, 0x1C3128u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3120u, 0x1C3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3128u;
label_1c3128:
    // 0x1c3128: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1c312c:
    // 0x1c312c: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1c3130: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x1c3130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x1c3134: 0x0  nop
    ctx->pc = 0x1c3134u;
    // NOP
label_1c3138:
    // 0x1c3138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c313c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c3140: 0x0  nop
    ctx->pc = 0x1c3140u;
    // NOP
    // 0x1c3144: 0x0  nop
    ctx->pc = 0x1c3144u;
    // NOP
    // 0x1c3148: 0x0  nop
    ctx->pc = 0x1c3148u;
    // NOP
    // 0x1c314c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C314Cu;
    {
        const bool branch_taken_0x1c314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c314c) {
            ctx->pc = 0x1C3138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3138;
        }
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3158: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x1c3158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x1c315c: 0x0  nop
    ctx->pc = 0x1c315cu;
    // NOP
label_1c3160:
    // 0x1c3160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3164: 0x0  nop
    ctx->pc = 0x1c3164u;
    // NOP
    // 0x1c3168: 0x0  nop
    ctx->pc = 0x1c3168u;
    // NOP
    // 0x1c316c: 0x0  nop
    ctx->pc = 0x1c316cu;
    // NOP
    // 0x1c3170: 0x0  nop
    ctx->pc = 0x1c3170u;
    // NOP
    // 0x1c3174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3174u;
    {
        const bool branch_taken_0x1c3174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3174) {
            ctx->pc = 0x1C3160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3160;
        }
    }
    ctx->pc = 0x1C317Cu;
    // 0x1c317c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c317cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3180: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x1c3180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c3184: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1C3184u;
    {
        const bool branch_taken_0x1c3184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3184u;
        // 0x1c3188: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3184) {
            ctx->pc = 0x1C3060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3060;
        }
    }
    ctx->pc = 0x1C318Cu;
    // 0x1c318c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C318Cu;
    {
        const bool branch_taken_0x1c318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C318Cu;
        // 0x1c3190: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c318c) {
            ctx->pc = 0x1C319Cu;
            goto label_1c319c;
        }
    }
    ctx->pc = 0x1C3194u;
label_1c3194:
    // 0x1c3194: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1c3194u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c3198: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1c3198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c319c:
    // 0x1c319c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1c31a4: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x1c31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x1c31a8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c31ac: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x1c31acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c31b0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1c31b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31b4: 0xe00013  mtlo        $a3
    ctx->pc = 0x1c31b4u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x1c31b8: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x1c31b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1c31bc: 0x3812  mflo        $a3
    ctx->pc = 0x1c31bcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1c31c0: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1C31C0u;
    {
        const bool branch_taken_0x1c31c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31C0u;
        // 0x1c31c4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31c0) {
            ctx->pc = 0x1C3050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3050;
        }
    }
    ctx->pc = 0x1C31C8u;
label_1c31c8:
    // 0x1c31c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c31c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c31cc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1c31ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c31d0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c31d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c31d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c31d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c31d8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c31d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c31dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c31dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c31e0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c31e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c31e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c31e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c31e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c31e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c31ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c31ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31F0u;
        // 0x1c31f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31F8u;
}
