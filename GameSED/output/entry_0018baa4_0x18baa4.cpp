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

// Function: entry_0018baa4
// Address: 0x18baa4 - 0x18bb90
void entry_0018baa4_0x18baa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018baa4_0x18baa4");
#endif

    switch (ctx->pc) {
        case 0x18bab4u: goto label_18bab4;
        default: break;
    }

    ctx->pc = 0x18baa4u;

    // 0x18baa4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18baa8: 0x24a5d640  addiu       $a1, $a1, -0x29C0
    ctx->pc = 0x18baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956608));
    // 0x18baac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18BAACu;
    SET_GPR_U32(ctx, 31, 0x18BAB4u);
    ctx->pc = 0x18BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAACu;
    // 0x18bab0: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18BAACu, 0x18BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAB4u;
label_18bab4:
    // 0x18bab4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x18bab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x18bab8: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x18bab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    // 0x18babc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18bac0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x21D640u));
    // 0x18bac4: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x18bac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18bac8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x18bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18bacc: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x18baccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x18bad0: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x18bad0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x18bad4: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x18bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18bad8: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x18bad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x21D644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D644u, _value); } while (0);
    // 0x18badc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x18badcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x18bae0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x18bae4: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x18bae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
    // 0x18bae8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18baec: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x18baecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x18baf0: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x18baf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x18baf4: 0x36100050  ori         $s0, $s0, 0x50
    ctx->pc = 0x18baf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)80);
    // 0x18baf8: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18bafc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb00: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x18bb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x18bb04: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x18bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18bb08: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x18bb0c: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x18bb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x18bb10: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x18bb10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x18bb14: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb18: 0x35290010  ori         $t1, $t1, 0x10
    ctx->pc = 0x18bb18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    // 0x18bb1c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18bb20: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x18bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x18bb24: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x18bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x18bb28: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x18bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x18bb2c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x18bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x18bb30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x18bb30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb34: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18bb38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BB38u;
    {
        const bool branch_taken_0x18bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB38u;
        // 0x18bb3c: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb38) {
            ctx->pc = 0x18BB90u;
            return;
        }
    }
    ctx->pc = 0x18BB40u;
    // 0x18bb40: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x18bb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x18bb44: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x18bb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x18bb48: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x18bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18bb4c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb50: 0x34630060  ori         $v1, $v1, 0x60
    ctx->pc = 0x18bb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)96);
    // 0x18bb54: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18bb58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18bb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18bb5c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x18bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x18bb60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18bb64: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x18bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18bb68: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x18bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x18bb6c: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x18bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x18bb70: 0x34e70070  ori         $a3, $a3, 0x70
    ctx->pc = 0x18bb70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)112);
    // 0x18bb74: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18bb78: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x18bb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18bb7c: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x18bb7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x18bb80: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18bb80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18bb84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18bb88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18BB88u;
    {
        const bool branch_taken_0x18bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB88u;
        // 0x18bb8c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb88) {
            ctx->pc = 0x18BBCCu;
            return;
        }
    }
    ctx->pc = 0x18BB90u;
}
