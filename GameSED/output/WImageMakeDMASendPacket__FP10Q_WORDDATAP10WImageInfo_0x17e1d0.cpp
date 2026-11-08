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

// Function: WImageMakeDMASendPacket__FP10Q_WORDDATAP10WImageInfo
// Address: 0x17e1d0 - 0x17e3b4
void WImageMakeDMASendPacket__FP10Q_WORDDATAP10WImageInfo_0x17e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageMakeDMASendPacket__FP10Q_WORDDATAP10WImageInfo_0x17e1d0");
#endif

    switch (ctx->pc) {
        case 0x17e250u: goto label_17e250;
        case 0x17e2b8u: goto label_17e2b8;
        case 0x17e344u: goto label_17e344;
        default: break;
    }

    ctx->pc = 0x17e1d0u;

    // 0x17e1d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e1d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17e1d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17e1dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17e1dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x17e1e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e4: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x17e1e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17e1e8: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x17e1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x17e1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e1f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17e1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e1fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e208: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17e20c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17e20cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e210: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17e210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17e214: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x17e218: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17e21c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17e21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17e220: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17e220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17e224: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17e224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17e228: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17e228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17e22c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x17e22cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17e230: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17e234: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x17e234u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17e238: 0x864a001c  lh          $t2, 0x1C($s2)
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17e23c: 0x864b001e  lh          $t3, 0x1E($s2)
    ctx->pc = 0x17e23cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x17e240: 0x96530004  lhu         $s3, 0x4($s2)
    ctx->pc = 0x17e240u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17e244: 0x9651001c  lhu         $s1, 0x1C($s2)
    ctx->pc = 0x17e244u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17e248: 0xc06ac76  jal         func_1AB1D8
    ctx->pc = 0x17E248u;
    SET_GPR_U32(ctx, 31, 0x17E250u);
    ctx->pc = 0x17E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E248u;
    // 0x17e24c: 0x9650001e  lhu         $s0, 0x1E($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB1D8u, 0x17E248u, 0x17E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E250u;
label_17e250:
    // 0x17e250: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17e254: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E254u;
    {
        const bool branch_taken_0x17e254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x17E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E254u;
        // 0x17e258: 0x2301018  mult        $v0, $s1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e254) {
            ctx->pc = 0x17E268u;
            goto label_17e268;
        }
    }
    ctx->pc = 0x17E25Cu;
    // 0x17e25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E25Cu;
    {
        const bool branch_taken_0x17e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E25Cu;
        // 0x17e260: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e25c) {
            ctx->pc = 0x17E26Cu;
            goto label_17e26c;
        }
    }
    ctx->pc = 0x17E264u;
    // 0x17e264: 0x0  nop
    ctx->pc = 0x17e264u;
    // NOP
label_17e268:
    // 0x17e268: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_17e26c:
    // 0x17e26c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17e270: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x17e274: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e278: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17e280: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x17e280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x17e284: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17e284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17e288: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x17e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17e28c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x17E28Cu;
    {
        const bool branch_taken_0x17e28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E28Cu;
        // 0x17e290: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e28c) {
            ctx->pc = 0x17E380u;
            goto label_17e380;
        }
    }
    ctx->pc = 0x17E294u;
    // 0x17e294: 0x96420022  lhu         $v0, 0x22($s2)
    ctx->pc = 0x17e294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x17e298: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x17E298u;
    {
        const bool branch_taken_0x17e298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e298) {
            ctx->pc = 0x17E29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E298u;
            // 0x17e29c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E384u;
            goto label_17e384;
        }
    }
    ctx->pc = 0x17E2A0u;
    // 0x17e2a0: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x17e2a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2a4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17E2A4u;
    {
        const bool branch_taken_0x17e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A4u;
        // 0x17e2a8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a4) {
            ctx->pc = 0x17E380u;
            goto label_17e380;
        }
    }
    ctx->pc = 0x17E2ACu;
    // 0x17e2ac: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x17e2b0: 0x37de0006  ori         $fp, $fp, 0x6
    ctx->pc = 0x17e2b0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)6);
    // 0x17e2b4: 0x0  nop
    ctx->pc = 0x17e2b4u;
    // NOP
label_17e2b8:
    // 0x17e2b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17e2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2bc: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x17e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x17e2c0: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17e2c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17e2c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17e2c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2cc: 0x26950070  addiu       $s5, $s4, 0x70
    ctx->pc = 0x17e2ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x17e2d0: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x17e2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x17e2d4: 0x96450008  lhu         $a1, 0x8($s2)
    ctx->pc = 0x17e2d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17e2d8: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x17e2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e2dc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x17e2e0: 0x9646000a  lhu         $a2, 0xA($s2)
    ctx->pc = 0x17e2e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x17e2e4: 0x9653000c  lhu         $s3, 0xC($s2)
    ctx->pc = 0x17e2e4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17e2e8: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x17e2e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e2ec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x17e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x17e2f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17e2f4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17e2f8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x17e2fc: 0x133c00  sll         $a3, $s3, 16
    ctx->pc = 0x17e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x17e300: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x17e304: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x17e304u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x17e308: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E308u;
    {
        const bool branch_taken_0x17e308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E308u;
        // 0x17e30c: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e308) {
            ctx->pc = 0x17E320u;
            goto label_17e320;
        }
    }
    ctx->pc = 0x17E310u;
    // 0x17e310: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17e314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17E314u;
    {
        const bool branch_taken_0x17e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E314u;
        // 0x17e318: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e314) {
            ctx->pc = 0x17E328u;
            goto label_17e328;
        }
    }
    ctx->pc = 0x17E31Cu;
    // 0x17e31c: 0x0  nop
    ctx->pc = 0x17e31cu;
    // NOP
label_17e320:
    // 0x17e320: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x17e320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17e324: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17e328:
    // 0x17e328: 0x115400  sll         $t2, $s1, 16
    ctx->pc = 0x17e328u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x17e32c: 0x105c00  sll         $t3, $s0, 16
    ctx->pc = 0x17e32cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x17e330: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x17e330u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x17e334: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x17e334u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x17e338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e33c: 0xc06ac76  jal         func_1AB1D8
    ctx->pc = 0x17E33Cu;
    SET_GPR_U32(ctx, 31, 0x17E344u);
    ctx->pc = 0x17E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E33Cu;
    // 0x17e340: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB1D8u, 0x17E33Cu, 0x17E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E344u;
label_17e344:
    // 0x17e344: 0x2301818  mult        $v1, $s1, $s0
    ctx->pc = 0x17e344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17e348: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x17e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x17e34c: 0xac960004  sw          $s6, 0x4($a0)
    ctx->pc = 0x17e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 22));
    // 0x17e350: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x17e354: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x17e354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x17e358: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17e360: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17e360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17e364: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x17e364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e368: 0x96420022  lhu         $v0, 0x22($s2)
    ctx->pc = 0x17e368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x17e36c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17e370: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17e374: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x17e374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e378: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x17E378u;
    {
        const bool branch_taken_0x17e378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E378u;
        // 0x17e37c: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e378) {
            ctx->pc = 0x17E2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17E380u;
label_17e380:
    // 0x17e380: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17e380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17e384:
    // 0x17e384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e38c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17e390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17e394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e398: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17e398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e39c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17e39cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e3a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17e3a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17e3a4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x17e3a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e3a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17e3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17e3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3ACu;
        // 0x17e3b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E3B4u;
}
