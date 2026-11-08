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

// Function: Cmd_NEW_GAME_FLAG_CLEAR_Entry__FP15BsSCDEntControl
// Address: 0x117e98 - 0x118394
void Cmd_NEW_GAME_FLAG_CLEAR_Entry__FP15BsSCDEntControl_0x117e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_NEW_GAME_FLAG_CLEAR_Entry__FP15BsSCDEntControl_0x117e98");
#endif

    switch (ctx->pc) {
        case 0x117ee0u: goto label_117ee0;
        case 0x117ee8u: goto label_117ee8;
        case 0x117f00u: goto label_117f00;
        case 0x117f50u: goto label_117f50;
        case 0x117f98u: goto label_117f98;
        case 0x117fc0u: goto label_117fc0;
        case 0x117fd8u: goto label_117fd8;
        case 0x117ff0u: goto label_117ff0;
        case 0x118100u: goto label_118100;
        case 0x118110u: goto label_118110;
        case 0x118158u: goto label_118158;
        case 0x118188u: goto label_118188;
        case 0x118198u: goto label_118198;
        case 0x1181d8u: goto label_1181d8;
        case 0x1181f0u: goto label_1181f0;
        case 0x11820cu: goto label_11820c;
        case 0x1182c8u: goto label_1182c8;
        case 0x1182f0u: goto label_1182f0;
        case 0x1182f8u: goto label_1182f8;
        case 0x118330u: goto label_118330;
        default: break;
    }

    ctx->pc = 0x117e98u;

    // 0x117e98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x117e9c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117ea0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x117ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x117ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117eac: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x117eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
    // 0x117eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x117eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x117eb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x117eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x117ebc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x117ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117ec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x117ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x117ec4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ec8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x117ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x117ecc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x117eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x117ed0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117ed4: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x117ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
    // 0x117ed8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x117ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x117edc: 0x2456c540  addiu       $s6, $v0, -0x3AC0
    ctx->pc = 0x117edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
label_117ee0:
    // 0x117ee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ee4: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x117ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_117ee8:
    // 0x117ee8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x117ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x117eec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x117eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x117ef0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x117ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x117ef4: 0x24820026  addiu       $v0, $a0, 0x26
    ctx->pc = 0x117ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
    // 0x117ef8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x117ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x117efc: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x117efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_117f00:
    // 0x117f00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x117f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x117f04: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x117f04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x117f08: 0x0  nop
    ctx->pc = 0x117f08u;
    // NOP
    // 0x117f0c: 0x0  nop
    ctx->pc = 0x117f0cu;
    // NOP
    // 0x117f10: 0x0  nop
    ctx->pc = 0x117f10u;
    // NOP
    // 0x117f14: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117F14u;
    {
        const bool branch_taken_0x117f14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x117F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F14u;
        // 0x117f18: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f14) {
            ctx->pc = 0x117F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117f00;
        }
    }
    ctx->pc = 0x117F1Cu;
    // 0x117f1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x117f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x117f20: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x117f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x117f24: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x117F24u;
    {
        const bool branch_taken_0x117f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F24u;
        // 0x117f28: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f24) {
            ctx->pc = 0x117EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117ee8;
        }
    }
    ctx->pc = 0x117F2Cu;
    // 0x117f2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x117f30: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x117f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x117f34: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x117F34u;
    {
        const bool branch_taken_0x117f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F34u;
        // 0x117f38: 0x250800c8  addiu       $t0, $t0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f34) {
            ctx->pc = 0x117EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117ee0;
        }
    }
    ctx->pc = 0x117F3Cu;
    // 0x117f3c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117f40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x117f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117f44: 0x244233b0  addiu       $v0, $v0, 0x33B0
    ctx->pc = 0x117f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13232));
    // 0x117f48: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x117f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x117f4c: 0x24420267  addiu       $v0, $v0, 0x267
    ctx->pc = 0x117f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 615));
label_117f50:
    // 0x117f50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x117f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x117f54: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x117f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x117f58: 0x0  nop
    ctx->pc = 0x117f58u;
    // NOP
    // 0x117f5c: 0x0  nop
    ctx->pc = 0x117f5cu;
    // NOP
    // 0x117f60: 0x0  nop
    ctx->pc = 0x117f60u;
    // NOP
    // 0x117f64: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117F64u;
    {
        const bool branch_taken_0x117f64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F64u;
        // 0x117f68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f64) {
            ctx->pc = 0x117F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117f50;
        }
    }
    ctx->pc = 0x117F6Cu;
    // 0x117f6c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117f70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117f74: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x117f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x117f78: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x117f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x117f7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x117f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC180u, _value); } while (0);
    // 0x117f80: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x117f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC18Cu, _value); } while (0);
    // 0x117f84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x117f84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC188u, _value); } while (0);
    // 0x117f88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x117f88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1EC184u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC184u, _value); } while (0);
    // 0x117f8c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x117f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EC190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EC190u, _value); } while (0);
    // 0x117f90: 0x244301c8  addiu       $v1, $v0, 0x1C8
    ctx->pc = 0x117f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x117f94: 0x0  nop
    ctx->pc = 0x117f94u;
    // NOP
label_117f98:
    // 0x117f98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x117f9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x117f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x117fa0: 0x0  nop
    ctx->pc = 0x117fa0u;
    // NOP
    // 0x117fa4: 0x0  nop
    ctx->pc = 0x117fa4u;
    // NOP
    // 0x117fa8: 0x0  nop
    ctx->pc = 0x117fa8u;
    // NOP
    // 0x117fac: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117FACu;
    {
        const bool branch_taken_0x117fac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x117FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FACu;
        // 0x117fb0: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fac) {
            ctx->pc = 0x117F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117f98;
        }
    }
    ctx->pc = 0x117FB4u;
    // 0x117fb4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x117fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117fb8: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x117fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x117fbc: 0x0  nop
    ctx->pc = 0x117fbcu;
    // NOP
label_117fc0:
    // 0x117fc0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117fc8: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x117fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x117fcc: 0x18400047  blez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x117FCCu;
    {
        const bool branch_taken_0x117fcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x117FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FCCu;
        // 0x117fd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fcc) {
            ctx->pc = 0x1180ECu;
            goto label_1180ec;
        }
    }
    ctx->pc = 0x117FD4u;
    // 0x117fd4: 0x0  nop
    ctx->pc = 0x117fd4u;
    // NOP
label_117fd8:
    // 0x117fd8: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x117fd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x117fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x117fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117fe0: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x117fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x117fe4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x117fe8: 0xc045360  jal         func_114D80
    ctx->pc = 0x117FE8u;
    SET_GPR_U32(ctx, 31, 0x117FF0u);
    ctx->pc = 0x117FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FE8u;
    // 0x117fec: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x117FE8u, 0x117FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FF0u;
label_117ff0:
    // 0x117ff0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x117ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x117ff4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x117FF4u;
    {
        const bool branch_taken_0x117ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FF4u;
        // 0x117ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ff4) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x117FFCu;
    // 0x117ffc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x117ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118000: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x118000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x118004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118008: 0x8c6346c0  lw          $v1, 0x46C0($v1)
    ctx->pc = 0x118008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18112)));
    // 0x11800c: 0x600008  jr          $v1
    ctx->pc = 0x11800Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118018u: goto label_118018;
            case 0x118028u: goto label_118028;
            case 0x118038u: goto label_118038;
            case 0x118048u: goto label_118048;
            case 0x118058u: goto label_118058;
            case 0x118068u: goto label_118068;
            case 0x118078u: goto label_118078;
            case 0x118088u: goto label_118088;
            case 0x118098u: goto label_118098;
            case 0x1180A8u: goto label_1180a8;
            case 0x1180B8u: goto label_1180b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11800Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118014u;
    // 0x118014: 0x0  nop
    ctx->pc = 0x118014u;
    // NOP
label_118018:
    // 0x118018: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11801c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11801Cu;
    {
        const bool branch_taken_0x11801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11801Cu;
        // 0x118020: 0x2445c350  addiu       $a1, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11801c) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118024u;
    // 0x118024: 0x0  nop
    ctx->pc = 0x118024u;
    // NOP
label_118028:
    // 0x118028: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11802c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118030: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x118030u;
    {
        const bool branch_taken_0x118030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118030u;
        // 0x118034: 0x2445004c  addiu       $a1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118030) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118038u;
label_118038:
    // 0x118038: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11803c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118040: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x118040u;
    {
        const bool branch_taken_0x118040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118040u;
        // 0x118044: 0x2445007c  addiu       $a1, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118040) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118048u;
label_118048:
    // 0x118048: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11804c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118050: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x118050u;
    {
        const bool branch_taken_0x118050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118050u;
        // 0x118054: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118050) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118058u;
label_118058:
    // 0x118058: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11805c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118060: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x118060u;
    {
        const bool branch_taken_0x118060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118060u;
        // 0x118064: 0x244500e8  addiu       $a1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118060) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118068u;
label_118068:
    // 0x118068: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11806c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118070: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x118070u;
    {
        const bool branch_taken_0x118070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118070u;
        // 0x118074: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118070) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118078u;
label_118078:
    // 0x118078: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11807c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118080: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118080u;
    {
        const bool branch_taken_0x118080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118080u;
        // 0x118084: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118080) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118088u;
label_118088:
    // 0x118088: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11808c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118090: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x118090u;
    {
        const bool branch_taken_0x118090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118090u;
        // 0x118094: 0x2445015c  addiu       $a1, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118090) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x118098u;
label_118098:
    // 0x118098: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11809c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1180a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1180A0u;
    {
        const bool branch_taken_0x1180a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180A0u;
        // 0x1180a4: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180a0) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x1180A8u;
label_1180a8:
    // 0x1180a8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1180a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1180ac: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x1180acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1180b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1180B0u;
    {
        const bool branch_taken_0x1180b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180B0u;
        // 0x1180b4: 0x244501a0  addiu       $a1, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180b0) {
            ctx->pc = 0x1180C4u;
            goto label_1180c4;
        }
    }
    ctx->pc = 0x1180B8u;
label_1180b8:
    // 0x1180b8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1180b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1180bc: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x1180bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1180c0: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x1180c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_1180c4:
    // 0x1180c4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1180c8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1180cc: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1180ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1180d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1180d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1180d4: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x1180d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x1180d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1180d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1180dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1180dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1180e0: 0x224202a  slt         $a0, $s1, $a0
    ctx->pc = 0x1180e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1180e4: 0x1480ffbc  bnez        $a0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1180E4u;
    {
        const bool branch_taken_0x1180e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1180E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180E4u;
        // 0x1180e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180e4) {
            ctx->pc = 0x117FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117fd8;
        }
    }
    ctx->pc = 0x1180ECu;
label_1180ec:
    // 0x1180ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1180ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1180f0: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x1180f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1180f4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1180F4u;
    {
        const bool branch_taken_0x1180f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1180F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180F4u;
        // 0x1180f8: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180f4) {
            ctx->pc = 0x117FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117fc0;
        }
    }
    ctx->pc = 0x1180FCu;
    // 0x1180fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1180fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118100:
    // 0x118100: 0xaec00c0c  sw          $zero, 0xC0C($s6)
    ctx->pc = 0x118100u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3084), GPR_U32(ctx, 0));
    // 0x118104: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x118104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118108: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x118108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11810c: 0x26c20c28  addiu       $v0, $s6, 0xC28
    ctx->pc = 0x11810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3112));
label_118110:
    // 0x118110: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118114: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x118114u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x118118: 0x0  nop
    ctx->pc = 0x118118u;
    // NOP
    // 0x11811c: 0x0  nop
    ctx->pc = 0x11811cu;
    // NOP
    // 0x118120: 0x0  nop
    ctx->pc = 0x118120u;
    // NOP
    // 0x118124: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118124u;
    {
        const bool branch_taken_0x118124 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118124u;
        // 0x118128: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118124) {
            ctx->pc = 0x118110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118110;
        }
    }
    ctx->pc = 0x11812Cu;
    // 0x11812c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118130: 0xae400c2c  sw          $zero, 0xC2C($s2)
    ctx->pc = 0x118130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3116), GPR_U32(ctx, 0));
    // 0x118134: 0xae401cb0  sw          $zero, 0x1CB0($s2)
    ctx->pc = 0x118134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7344), GPR_U32(ctx, 0));
    // 0x118138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11813c: 0xae401cb4  sw          $zero, 0x1CB4($s2)
    ctx->pc = 0x11813cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7348), GPR_U32(ctx, 0));
    // 0x118140: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x118140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118144: 0xae420fec  sw          $v0, 0xFEC($s2)
    ctx->pc = 0x118144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4076), GPR_U32(ctx, 2));
    // 0x118148: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x118148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11814c: 0xae420fe8  sw          $v0, 0xFE8($s2)
    ctx->pc = 0x11814cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4072), GPR_U32(ctx, 2));
    // 0x118150: 0x26421006  addiu       $v0, $s2, 0x1006
    ctx->pc = 0x118150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4102));
    // 0x118154: 0x0  nop
    ctx->pc = 0x118154u;
    // NOP
label_118158:
    // 0x118158: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11815c: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x11815cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x118160: 0x0  nop
    ctx->pc = 0x118160u;
    // NOP
    // 0x118164: 0x0  nop
    ctx->pc = 0x118164u;
    // NOP
    // 0x118168: 0x0  nop
    ctx->pc = 0x118168u;
    // NOP
    // 0x11816c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11816Cu;
    {
        const bool branch_taken_0x11816c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11816Cu;
        // 0x118170: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11816c) {
            ctx->pc = 0x118158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118158;
        }
    }
    ctx->pc = 0x118174u;
    // 0x118174: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118178: 0x24841008  addiu       $a0, $a0, 0x1008
    ctx->pc = 0x118178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4104));
    // 0x11817c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11817cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118180: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x118180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118184: 0x0  nop
    ctx->pc = 0x118184u;
    // NOP
label_118188:
    // 0x118188: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x118188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x11818c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x11818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x118190: 0x24a211d6  addiu       $v0, $a1, 0x11D6
    ctx->pc = 0x118190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4566));
    // 0x118194: 0x0  nop
    ctx->pc = 0x118194u;
    // NOP
label_118198:
    // 0x118198: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11819c: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x11819cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1181a0: 0x0  nop
    ctx->pc = 0x1181a0u;
    // NOP
    // 0x1181a4: 0x0  nop
    ctx->pc = 0x1181a4u;
    // NOP
    // 0x1181a8: 0x0  nop
    ctx->pc = 0x1181a8u;
    // NOP
    // 0x1181ac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1181ACu;
    {
        const bool branch_taken_0x1181ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1181B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181ACu;
        // 0x1181b0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181ac) {
            ctx->pc = 0x118198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118198;
        }
    }
    ctx->pc = 0x1181B4u;
    // 0x1181b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1181b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1181b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1181b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1181bc: 0x28c2006e  slti        $v0, $a2, 0x6E
    ctx->pc = 0x1181bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1181c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1181C0u;
    {
        const bool branch_taken_0x1181c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1181C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181C0u;
        // 0x1181c4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181c0) {
            ctx->pc = 0x118188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118188;
        }
    }
    ctx->pc = 0x1181C8u;
    // 0x1181c8: 0x26550c50  addiu       $s5, $s2, 0xC50
    ctx->pc = 0x1181c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3152));
    // 0x1181cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1181ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1181d0: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1181d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1181d4: 0x0  nop
    ctx->pc = 0x1181d4u;
    // NOP
label_1181d8:
    // 0x1181d8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1181d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1181dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1181e0: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x1181e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x1181e4: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1181E4u;
    {
        const bool branch_taken_0x1181e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1181E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181E4u;
        // 0x1181e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181e4) {
            ctx->pc = 0x1182ACu;
            goto label_1182ac;
        }
    }
    ctx->pc = 0x1181ECu;
    // 0x1181ec: 0x0  nop
    ctx->pc = 0x1181ecu;
    // NOP
label_1181f0:
    // 0x1181f0: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x1181f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1181f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1181f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1181f8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x1181f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1181fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1181fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x118200: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x118200u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x118204: 0xc045360  jal         func_114D80
    ctx->pc = 0x118204u;
    SET_GPR_U32(ctx, 31, 0x11820Cu);
    ctx->pc = 0x118208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118204u;
    // 0x118208: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118204u, 0x11820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11820Cu;
label_11820c:
    // 0x11820c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11820cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x118210: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x118210u;
    {
        const bool branch_taken_0x118210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118210u;
        // 0x118214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118210) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118218u;
    // 0x118218: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x118218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11821c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x118220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118224: 0x8c6346f0  lw          $v1, 0x46F0($v1)
    ctx->pc = 0x118224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18160)));
    // 0x118228: 0x600008  jr          $v1
    ctx->pc = 0x118228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118230u: goto label_118230;
            case 0x118238u: goto label_118238;
            case 0x118240u: goto label_118240;
            case 0x118248u: goto label_118248;
            case 0x118250u: goto label_118250;
            case 0x118258u: goto label_118258;
            case 0x118260u: goto label_118260;
            case 0x118268u: goto label_118268;
            case 0x118270u: goto label_118270;
            case 0x118278u: goto label_118278;
            case 0x118280u: goto label_118280;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118228u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118230u;
label_118230:
    // 0x118230: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x118230u;
    {
        const bool branch_taken_0x118230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118230u;
        // 0x118234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118230) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118238u;
label_118238:
    // 0x118238: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x118238u;
    {
        const bool branch_taken_0x118238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118238u;
        // 0x11823c: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118238) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118240u;
label_118240:
    // 0x118240: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118240u;
    {
        const bool branch_taken_0x118240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118240u;
        // 0x118244: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118240) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118248u;
label_118248:
    // 0x118248: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x118248u;
    {
        const bool branch_taken_0x118248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118248u;
        // 0x11824c: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118248) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118250u;
label_118250:
    // 0x118250: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x118250u;
    {
        const bool branch_taken_0x118250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118250u;
        // 0x118254: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118250) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118258u;
label_118258:
    // 0x118258: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118258u;
    {
        const bool branch_taken_0x118258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118258u;
        // 0x11825c: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118258) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118260u;
label_118260:
    // 0x118260: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x118260u;
    {
        const bool branch_taken_0x118260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118260u;
        // 0x118264: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118260) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118268u;
label_118268:
    // 0x118268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118268u;
    {
        const bool branch_taken_0x118268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118268u;
        // 0x11826c: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118268) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118270u;
label_118270:
    // 0x118270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118270u;
    {
        const bool branch_taken_0x118270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118270u;
        // 0x118274: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118270) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118278u;
label_118278:
    // 0x118278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118278u;
    {
        const bool branch_taken_0x118278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118278u;
        // 0x11827c: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118278) {
            ctx->pc = 0x118284u;
            goto label_118284;
        }
    }
    ctx->pc = 0x118280u;
label_118280:
    // 0x118280: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x118280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_118284:
    // 0x118284: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x118284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x118288: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11828c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x118290: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x118290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118294: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x118294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x118298: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x118298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11829c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1182a0: 0x284202a  slt         $a0, $s4, $a0
    ctx->pc = 0x1182a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1182a4: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1182A4u;
    {
        const bool branch_taken_0x1182a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182A4u;
        // 0x1182a8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182a4) {
            ctx->pc = 0x1181F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1181f0;
        }
    }
    ctx->pc = 0x1182ACu;
label_1182ac:
    // 0x1182ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1182acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1182b0: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x1182b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1182b4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1182B4u;
    {
        const bool branch_taken_0x1182b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182B4u;
        // 0x1182b8: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182b4) {
            ctx->pc = 0x1181D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1181d8;
        }
    }
    ctx->pc = 0x1182BCu;
    // 0x1182bc: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x1182bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x1182c0: 0x26420fe4  addiu       $v0, $s2, 0xFE4
    ctx->pc = 0x1182c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4068));
    // 0x1182c4: 0x0  nop
    ctx->pc = 0x1182c4u;
    // NOP
label_1182c8:
    // 0x1182c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1182c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1182cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1182ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1182d0: 0x0  nop
    ctx->pc = 0x1182d0u;
    // NOP
    // 0x1182d4: 0x0  nop
    ctx->pc = 0x1182d4u;
    // NOP
    // 0x1182d8: 0x0  nop
    ctx->pc = 0x1182d8u;
    // NOP
    // 0x1182dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1182DCu;
    {
        const bool branch_taken_0x1182dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1182E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182DCu;
        // 0x1182e0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182dc) {
            ctx->pc = 0x1182C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1182c8;
        }
    }
    ctx->pc = 0x1182E4u;
    // 0x1182e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1182e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1182e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182ec: 0x0  nop
    ctx->pc = 0x1182ecu;
    // NOP
label_1182f0:
    // 0x1182f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1182f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1182f4: 0x24821c18  addiu       $v0, $a0, 0x1C18
    ctx->pc = 0x1182f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7192));
label_1182f8:
    // 0x1182f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1182f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1182fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1182fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118300: 0x0  nop
    ctx->pc = 0x118300u;
    // NOP
    // 0x118304: 0x0  nop
    ctx->pc = 0x118304u;
    // NOP
    // 0x118308: 0x0  nop
    ctx->pc = 0x118308u;
    // NOP
    // 0x11830c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11830Cu;
    {
        const bool branch_taken_0x11830c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11830Cu;
        // 0x118310: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11830c) {
            ctx->pc = 0x1182F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1182f8;
        }
    }
    ctx->pc = 0x118314u;
    // 0x118314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118318: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x118318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11831c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11831Cu;
    {
        const bool branch_taken_0x11831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11831Cu;
        // 0x118320: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11831c) {
            ctx->pc = 0x1182F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1182f0;
        }
    }
    ctx->pc = 0x118324u;
    // 0x118324: 0x26421cac  addiu       $v0, $s2, 0x1CAC
    ctx->pc = 0x118324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7340));
    // 0x118328: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x118328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11832c: 0x0  nop
    ctx->pc = 0x11832cu;
    // NOP
label_118330:
    // 0x118330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118334: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118338: 0x0  nop
    ctx->pc = 0x118338u;
    // NOP
    // 0x11833c: 0x0  nop
    ctx->pc = 0x11833cu;
    // NOP
    // 0x118340: 0x0  nop
    ctx->pc = 0x118340u;
    // NOP
    // 0x118344: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118344u;
    {
        const bool branch_taken_0x118344 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118344u;
        // 0x118348: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118344) {
            ctx->pc = 0x118330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118330;
        }
    }
    ctx->pc = 0x11834Cu;
    // 0x11834c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11834cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x118350: 0x2ae20003  slti        $v0, $s7, 0x3
    ctx->pc = 0x118350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x118354: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x118354u;
    {
        const bool branch_taken_0x118354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118354u;
        // 0x118358: 0x26d624d0  addiu       $s6, $s6, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118354) {
            ctx->pc = 0x118100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118100;
        }
    }
    ctx->pc = 0x11835Cu;
    // 0x11835c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x118360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118368: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11836c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11836cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118370: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118374: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x118374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x118378: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x118378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11837c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x11837cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x118380: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118384: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x118384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
    // 0x118388: 0xac403620  sw          $zero, 0x3620($v0)
    ctx->pc = 0x118388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13856), GPR_U32(ctx, 0));
    // 0x11838c: 0x3e00008  jr          $ra
    ctx->pc = 0x11838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11838Cu;
        // 0x118390: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11838Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118394u;
}
