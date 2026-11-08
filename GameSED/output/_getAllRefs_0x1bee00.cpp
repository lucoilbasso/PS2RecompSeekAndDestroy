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

// Function: _getAllRefs
// Address: 0x1bee00 - 0x1bf504
void _getAllRefs_0x1bee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getAllRefs_0x1bee00");
#endif

    switch (ctx->pc) {
        case 0x1bef1cu: goto label_1bef1c;
        case 0x1bef5cu: goto label_1bef5c;
        case 0x1bef88u: goto label_1bef88;
        case 0x1befc8u: goto label_1befc8;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf044u: goto label_1bf044;
        case 0x1bf08cu: goto label_1bf08c;
        case 0x1bf190u: goto label_1bf190;
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf278u: goto label_1bf278;
        case 0x1bf2c8u: goto label_1bf2c8;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf3c4u: goto label_1bf3c4;
        case 0x1bf41cu: goto label_1bf41c;
        case 0x1bf474u: goto label_1bf474;
        case 0x1bf4bcu: goto label_1bf4bc;
        case 0x1bf4d4u: goto label_1bf4d4;
        default: break;
    }

    ctx->pc = 0x1bee00u;

    // 0x1bee00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1bee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1bee04: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1bee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bee08: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1bee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1bee0c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1bee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1bee10: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1bee10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee14: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x1bee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x1bee18: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1bee18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee1c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1bee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1bee20: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1bee20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee24: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x1bee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x1bee28: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1bee28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee2c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1bee2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1bee30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bee34: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1bee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1bee38: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1bee38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee3c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1bee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1bee40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bee40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee44: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1bee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1bee48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bee48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee4c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x1bee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x1bee50: 0x8e220810  lw          $v0, 0x810($s1)
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    // 0x1bee54: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1bee54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1bee58: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1bee58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bee5c: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x1bee5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x1bee60: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1bee64: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEE64u;
    {
        const bool branch_taken_0x1bee64 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE64u;
        // 0x1bee68: 0xac4006bc  sw          $zero, 0x6BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee64) {
            ctx->pc = 0x1BEE7Cu;
            goto label_1bee7c;
        }
    }
    ctx->pc = 0x1BEE6Cu;
    // 0x1bee6c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1bee70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bee74: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1BEE74u;
    {
        const bool branch_taken_0x1bee74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE74u;
        // 0x1bee78: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee74) {
            ctx->pc = 0x1BF2E8u;
            goto label_1bf2e8;
        }
    }
    ctx->pc = 0x1BEE7Cu;
label_1bee7c:
    // 0x1bee7c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1bee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1bee80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bee84: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1BEE84u;
    {
        const bool branch_taken_0x1bee84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE84u;
        // 0x1bee88: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee84) {
            ctx->pc = 0x1BF094u;
            goto label_1bf094;
        }
    }
    ctx->pc = 0x1BEE8Cu;
    // 0x1bee8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bee90: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEE90u;
    {
        const bool branch_taken_0x1bee90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bee90) {
            ctx->pc = 0x1BEE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEE90u;
            // 0x1bee94: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEEA4u;
            goto label_1beea4;
        }
    }
    ctx->pc = 0x1BEE98u;
    // 0x1bee98: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x1BEE98u;
    {
        const bool branch_taken_0x1bee98 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bee98) {
            ctx->pc = 0x1BEED8u;
            goto label_1beed8;
        }
    }
    ctx->pc = 0x1BEEA0u;
    // 0x1beea0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1beea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1beea4:
    // 0x1beea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1beea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beea8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1beea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1beeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1beeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeb0: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1beeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1beeb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1beeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1beebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1beebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beec0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1beec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1beec4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1beec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1beec8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1beec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1beecc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1beeccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beed0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1BEED0u;
    {
        const bool branch_taken_0x1beed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED0u;
        // 0x1beed4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed0) {
            ctx->pc = 0x1BF2C0u;
            goto label_1bf2c0;
        }
    }
    ctx->pc = 0x1BEED8u;
label_1beed8:
    // 0x1beed8: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BEED8u;
    {
        const bool branch_taken_0x1beed8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed8) {
            ctx->pc = 0x1BEF64u;
            goto label_1bef64;
        }
    }
    ctx->pc = 0x1BEEE0u;
    // 0x1beee0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1beee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1beee4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1beee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeec: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1beeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1beef0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1beef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1beef4: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1beef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1beef8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1beef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beefc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1beefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bef00: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bef04: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bef04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bef08: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bef08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef0c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1bef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1bef10: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bef10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef14: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEF14u;
    SET_GPR_U32(ctx, 31, 0x1BEF1Cu);
    ctx->pc = 0x1BEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF14u;
    // 0x1bef18: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEF14u, 0x1BEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF1Cu;
label_1bef1c:
    // 0x1bef1c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1bef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bef20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef24: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bef28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef2c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bef30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bef30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bef34: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1bef38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef3c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bef40: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bef44: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bef48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef4c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1bef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1bef50: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bef50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef54: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEF54u;
    SET_GPR_U32(ctx, 31, 0x1BEF5Cu);
    ctx->pc = 0x1BEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF54u;
    // 0x1bef58: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEF54u, 0x1BEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF5Cu;
label_1bef5c:
    // 0x1bef5c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1BEF5Cu;
    {
        const bool branch_taken_0x1bef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF5Cu;
        // 0x1bef60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef5c) {
            ctx->pc = 0x1BF2E4u;
            goto label_1bf2e4;
        }
    }
    ctx->pc = 0x1BEF64u;
label_1bef64:
    // 0x1bef64: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BEF64u;
    {
        const bool branch_taken_0x1bef64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF64u;
        // 0x1bef68: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef64) {
            ctx->pc = 0x1BF07Cu;
            goto label_1bf07c;
        }
    }
    ctx->pc = 0x1BEF6Cu;
    // 0x1bef6c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1bef6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bef70: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1bef70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef74: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1bef74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bef78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef7c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x1bef80: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1BEF80u;
    SET_GPR_U32(ctx, 31, 0x1BEF88u);
    ctx->pc = 0x1BEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF80u;
    // 0x1bef84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B40u, 0x1BEF80u, 0x1BEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF88u;
label_1bef88:
    // 0x1bef88: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bef8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bef94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bef94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef98: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bef9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1befa0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1befa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1befa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1befa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befa8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1befa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1befac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1befacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befb0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1befb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1befb4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1befb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1befb8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1befb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1befbc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1befbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befc0: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEFC0u;
    SET_GPR_U32(ctx, 31, 0x1BEFC8u);
    ctx->pc = 0x1BEFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFC0u;
    // 0x1befc4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEFC0u, 0x1BEFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFC8u;
label_1befc8:
    // 0x1befc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1befc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1befcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1befccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befd0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1befd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1befd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1befd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1befd8: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1befdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1befdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1befe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1befe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1befe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1befe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1befec: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1beff0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1beff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1beff4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1beff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beff8: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1beff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1beffc: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEFFCu;
    SET_GPR_U32(ctx, 31, 0x1BF004u);
    ctx->pc = 0x1BF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFFCu;
    // 0x1bf000: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEFFCu, 0x1BF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bf004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf00c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf010: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf014: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bf018: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf01c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf020: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf024: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf02c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1bf02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1bf030: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf034: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf038: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf03c: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF03Cu;
    SET_GPR_U32(ctx, 31, 0x1BF044u);
    ctx->pc = 0x1BF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF03Cu;
    // 0x1bf040: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF03Cu, 0x1BF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF044u;
label_1bf044:
    // 0x1bf044: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bf044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bf048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf04c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1bf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1bf050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf054: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bf054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bf058: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf05c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bf05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bf060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf064: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bf068: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf06c: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1bf06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1bf070: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf070u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf074: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1BF074u;
    {
        const bool branch_taken_0x1bf074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF074u;
        // 0x1bf078: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf074) {
            ctx->pc = 0x1BF2C0u;
            goto label_1bf2c0;
        }
    }
    ctx->pc = 0x1BF07Cu;
label_1bf07c:
    // 0x1bf07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf080: 0x24a5b478  addiu       $a1, $a1, -0x4B88
    ctx->pc = 0x1bf080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947960));
    // 0x1bf084: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BF084u;
    SET_GPR_U32(ctx, 31, 0x1BF08Cu);
    ctx->pc = 0x1BF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF084u;
    // 0x1bf088: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BF084u, 0x1BF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF08Cu;
label_1bf08c:
    // 0x1bf08c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1BF08Cu;
    {
        const bool branch_taken_0x1bf08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF08Cu;
        // 0x1bf090: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf08c) {
            ctx->pc = 0x1BF2E4u;
            goto label_1bf2e4;
        }
    }
    ctx->pc = 0x1BF094u;
label_1bf094:
    // 0x1bf094: 0x8e2701c8  lw          $a3, 0x1C8($s1)
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x1bf098: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x1bf098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x1bf09c: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1bf09cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bf0a0: 0x8e2401cc  lw          $a0, 0x1CC($s1)
    ctx->pc = 0x1bf0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1bf0a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf0a8: 0x8e2301dc  lw          $v1, 0x1DC($s1)
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1bf0ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bf0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0b0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1bf0b4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1bf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1bf0b8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1bf0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1bf0bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bf0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bf0c0: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF0C0u;
    {
        const bool branch_taken_0x1bf0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0C0u;
        // 0x1bf0c4: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0c0) {
            ctx->pc = 0x1BF0E0u;
            goto label_1bf0e0;
        }
    }
    ctx->pc = 0x1BF0C8u;
    // 0x1bf0c8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1bf0cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF0CCu;
    {
        const bool branch_taken_0x1bf0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0CCu;
        // 0x1bf0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0cc) {
            ctx->pc = 0x1BF0E4u;
            goto label_1bf0e4;
        }
    }
    ctx->pc = 0x1BF0D4u;
    // 0x1bf0d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1bf0d8: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x1bf0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x1bf0dc: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1bf0dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bf0e0:
    // 0x1bf0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf0e4:
    // 0x1bf0e4: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF0E4u;
    {
        const bool branch_taken_0x1bf0e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf0e4) {
            ctx->pc = 0x1BF0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF0E4u;
            // 0x1bf0e8: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF0F8u;
            goto label_1bf0f8;
        }
    }
    ctx->pc = 0x1BF0ECu;
    // 0x1bf0ec: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BF0ECu;
    {
        const bool branch_taken_0x1bf0ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0ECu;
        // 0x1bf0f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0ec) {
            ctx->pc = 0x1BF134u;
            goto label_1bf134;
        }
    }
    ctx->pc = 0x1BF0F4u;
    // 0x1bf0f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1bf0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1bf0f8:
    // 0x1bf0f8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf0fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1bf0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf104: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf10c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1bf10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1bf110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf114: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1bf114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bf118: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1bf118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1bf11c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1bf11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1bf120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf124: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf12c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1BF12Cu;
    {
        const bool branch_taken_0x1bf12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF12Cu;
        // 0x1bf130: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf12c) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF134u;
label_1bf134:
    // 0x1bf134: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BF134u;
    {
        const bool branch_taken_0x1bf134 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF134u;
        // 0x1bf138: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf134) {
            ctx->pc = 0x1BF204u;
            goto label_1bf204;
        }
    }
    ctx->pc = 0x1BF13Cu;
    // 0x1bf13c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1bf13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1bf140: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf144: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf148: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bf14c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf154: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bf154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bf158: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1bf158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1bf15c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf160: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf16c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bf16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf174: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf178: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf17c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf180: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf184: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf188: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF188u;
    SET_GPR_U32(ctx, 31, 0x1BF190u);
    ctx->pc = 0x1BF18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF188u;
    // 0x1bf18c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF188u, 0x1BF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF190u;
label_1bf190:
    // 0x1bf190: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1bf194: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF194u;
    {
        const bool branch_taken_0x1bf194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1BF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF194u;
        // 0x1bf198: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf194) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF19Cu;
    // 0x1bf19c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1bf1a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF1A0u;
    {
        const bool branch_taken_0x1bf1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A0u;
        // 0x1bf1a4: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1a0) {
            ctx->pc = 0x1BF1BCu;
            goto label_1bf1bc;
        }
    }
    ctx->pc = 0x1BF1A8u;
    // 0x1bf1a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bf1a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1ac: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x1bf1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x1bf1b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF1B0u;
    {
        const bool branch_taken_0x1bf1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B0u;
        // 0x1bf1b4: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1b0) {
            ctx->pc = 0x1BF1BCu;
            goto label_1bf1bc;
        }
    }
    ctx->pc = 0x1BF1B8u;
label_1bf1b8:
    // 0x1bf1b8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x1bf1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1bf1bc:
    // 0x1bf1bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf1c0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x1bf1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bf1c4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1bf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf1d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf1d8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bf1dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bf1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf1e0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1bf1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf1e4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1bf1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1bf1e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bf1f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf1f8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf1f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF1FCu;
    {
        const bool branch_taken_0x1bf1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1FCu;
        // 0x1bf200: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1fc) {
            ctx->pc = 0x1BF2C0u;
            goto label_1bf2c0;
        }
    }
    ctx->pc = 0x1BF204u;
label_1bf204:
    // 0x1bf204: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BF204u;
    {
        const bool branch_taken_0x1bf204 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf204) {
            ctx->pc = 0x1BF2D0u;
            goto label_1bf2d0;
        }
    }
    ctx->pc = 0x1BF20Cu;
    // 0x1bf20c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1bf210: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf214: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf218: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1bf218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf21c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1bf21cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf220: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1bf220u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1bf224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf228: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1BF228u;
    SET_GPR_U32(ctx, 31, 0x1BF230u);
    ctx->pc = 0x1BF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF228u;
    // 0x1bf22c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B40u, 0x1BF228u, 0x1BF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF230u;
label_1bf230:
    // 0x1bf230: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bf234: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1bf234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1bf238: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1bf238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf23c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf240: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf248: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bf248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf24c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf250: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1bf250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1bf254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf258: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf260: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf264: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1bf264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf268: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf26c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf26cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf270: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF270u;
    SET_GPR_U32(ctx, 31, 0x1BF278u);
    ctx->pc = 0x1BF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF270u;
    // 0x1bf274: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF270u, 0x1BF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF278u;
label_1bf278:
    // 0x1bf278: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf27c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf280: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1bf280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1bf284: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bf288: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1bf288u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1bf28c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bf28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bf290: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf294: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1bf294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1bf298: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bf298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2a4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1bf2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1bf2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf2b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2b4:
    // 0x1bf2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2b8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf2bc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf2bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bf2c0:
    // 0x1bf2c0: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF2C0u;
    SET_GPR_U32(ctx, 31, 0x1BF2C8u);
    ctx->pc = 0x1BF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2C0u;
    // 0x1bf2c4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF2C0u, 0x1BF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2C8u;
label_1bf2c8:
    // 0x1bf2c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF2C8u;
    {
        const bool branch_taken_0x1bf2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C8u;
        // 0x1bf2cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2c8) {
            ctx->pc = 0x1BF2E4u;
            goto label_1bf2e4;
        }
    }
    ctx->pc = 0x1BF2D0u;
label_1bf2d0:
    // 0x1bf2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2d4: 0x24a5b498  addiu       $a1, $a1, -0x4B68
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947992));
    // 0x1bf2d8: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BF2D8u;
    SET_GPR_U32(ctx, 31, 0x1BF2E0u);
    ctx->pc = 0x1BF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2D8u;
    // 0x1bf2dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BF2D8u, 0x1BF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2E0u;
label_1bf2e0:
    // 0x1bf2e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf2e4:
    // 0x1bf2e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1bf2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1bf2e8:
    // 0x1bf2e8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1bf2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1bf2ec: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1BF2ECu;
    {
        const bool branch_taken_0x1bf2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2ECu;
        // 0x1bf2f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2ec) {
            ctx->pc = 0x1BF4D4u;
            goto label_1bf4d4;
        }
    }
    ctx->pc = 0x1BF2F4u;
    // 0x1bf2f4: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1bf2f8: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2F8u;
        // 0x1bf2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF3CCu;
            goto label_1bf3cc;
        }
    }
    ctx->pc = 0x1BF300u;
    // 0x1bf300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf304: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF304u;
    {
        const bool branch_taken_0x1bf304 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF304u;
        // 0x1bf308: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf304) {
            ctx->pc = 0x1BF344u;
            goto label_1bf344;
        }
    }
    ctx->pc = 0x1BF30Cu;
    // 0x1bf30c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1bf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf314: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bf314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf318: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf31c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf320: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf320u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf324: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf32c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf334: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf338: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf33c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF33Cu;
    {
        const bool branch_taken_0x1bf33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF33Cu;
        // 0x1bf340: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf33c) {
            ctx->pc = 0x1BF3BCu;
            goto label_1bf3bc;
        }
    }
    ctx->pc = 0x1BF344u;
label_1bf344:
    // 0x1bf344: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf34c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bf34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf354: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x1bf354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x1bf358: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf35c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1bf35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1bf360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf364: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf368: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf36c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf370: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf374: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1bf374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1bf378: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf37c: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF37Cu;
    SET_GPR_U32(ctx, 31, 0x1BF384u);
    ctx->pc = 0x1BF380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF37Cu;
    // 0x1bf380: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF37Cu, 0x1BF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1bf388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf38c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bf390: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf390u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf394: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf398: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1bf398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1bf39c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf3a0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf3a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf3a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf3ac: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3b4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf3b8: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x1bf3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1bf3bc:
    // 0x1bf3bc: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF3BCu;
    SET_GPR_U32(ctx, 31, 0x1BF3C4u);
    ctx->pc = 0x1BF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3BCu;
    // 0x1bf3c0: 0x8c8501bc  lw          $a1, 0x1BC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF3BCu, 0x1BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3C4u;
label_1bf3c4:
    // 0x1bf3c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1BF3C4u;
    {
        const bool branch_taken_0x1bf3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C4u;
        // 0x1bf3c8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3c4) {
            ctx->pc = 0x1BF4D8u;
            goto label_1bf4d8;
        }
    }
    ctx->pc = 0x1BF3CCu;
label_1bf3cc:
    // 0x1bf3cc: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BF3CCu;
    {
        const bool branch_taken_0x1bf3cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3CCu;
        // 0x1bf3d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3cc) {
            ctx->pc = 0x1BF424u;
            goto label_1bf424;
        }
    }
    ctx->pc = 0x1BF3D4u;
    // 0x1bf3d4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1bf3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1bf3d8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF3D8u;
    {
        const bool branch_taken_0x1bf3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3d8) {
            ctx->pc = 0x1BF3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3D8u;
            // 0x1bf3dc: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF3E4u;
            goto label_1bf3e4;
        }
    }
    ctx->pc = 0x1BF3E0u;
    // 0x1bf3e0: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_1bf3e4:
    // 0x1bf3e4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf3f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf3f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf3f8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf3f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf404: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf40c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf414: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF414u;
    SET_GPR_U32(ctx, 31, 0x1BF41Cu);
    ctx->pc = 0x1BF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF414u;
    // 0x1bf418: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF414u, 0x1BF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF41Cu;
label_1bf41c:
    // 0x1bf41c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1BF41Cu;
    {
        const bool branch_taken_0x1bf41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF41Cu;
        // 0x1bf420: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf41c) {
            ctx->pc = 0x1BF4D8u;
            goto label_1bf4d8;
        }
    }
    ctx->pc = 0x1BF424u;
label_1bf424:
    // 0x1bf424: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BF424u;
    {
        const bool branch_taken_0x1bf424 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF424u;
        // 0x1bf428: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf424) {
            ctx->pc = 0x1BF4C4u;
            goto label_1bf4c4;
        }
    }
    ctx->pc = 0x1BF42Cu;
    // 0x1bf42c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1bf430: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF430u;
    {
        const bool branch_taken_0x1bf430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf430) {
            ctx->pc = 0x1BF434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF430u;
            // 0x1bf434: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF43Cu;
            goto label_1bf43c;
        }
    }
    ctx->pc = 0x1BF438u;
    // 0x1bf438: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_1bf43c:
    // 0x1bf43c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bf43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf444: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1bf444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf44c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bf44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bf450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf454: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bf458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf45c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf460: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf464: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf468: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf46c: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF46Cu;
    SET_GPR_U32(ctx, 31, 0x1BF474u);
    ctx->pc = 0x1BF470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF46Cu;
    // 0x1bf470: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF46Cu, 0x1BF474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF474u;
label_1bf474:
    // 0x1bf474: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1bf478: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF478u;
    {
        const bool branch_taken_0x1bf478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf478) {
            ctx->pc = 0x1BF47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF478u;
            // 0x1bf47c: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF484u;
            goto label_1bf484;
        }
    }
    ctx->pc = 0x1BF480u;
    // 0x1bf480: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_1bf484:
    // 0x1bf484: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1bf488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf48c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bf490: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf494: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf498: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf498u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf49c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4a4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf4b0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf4b4: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF4B4u;
    SET_GPR_U32(ctx, 31, 0x1BF4BCu);
    ctx->pc = 0x1BF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4B4u;
    // 0x1bf4b8: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF4B4u, 0x1BF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4BCu;
label_1bf4bc:
    // 0x1bf4bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF4BCu;
    {
        const bool branch_taken_0x1bf4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4BCu;
        // 0x1bf4c0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4bc) {
            ctx->pc = 0x1BF4D8u;
            goto label_1bf4d8;
        }
    }
    ctx->pc = 0x1BF4C4u;
label_1bf4c4:
    // 0x1bf4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4c8: 0x24a5b4b8  addiu       $a1, $a1, -0x4B48
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948024));
    // 0x1bf4cc: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BF4CCu;
    SET_GPR_U32(ctx, 31, 0x1BF4D4u);
    ctx->pc = 0x1BF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4CCu;
    // 0x1bf4d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BF4CCu, 0x1BF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4D4u;
label_1bf4d4:
    // 0x1bf4d4: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1bf4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1bf4d8:
    // 0x1bf4d8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1bf4d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bf4dc: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1bf4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bf4e0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1bf4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bf4e4: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1bf4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf4e8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1bf4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf4ec: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1bf4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf4f0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1bf4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf4f4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1bf4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf4f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1bf4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4FCu;
        // 0x1bf500: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF504u;
}
