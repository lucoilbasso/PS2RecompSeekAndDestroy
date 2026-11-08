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

// Function: entry_0012bad8
// Address: 0x12bad8 - 0x12bba0
void entry_0012bad8_0x12bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bad8_0x12bad8");
#endif

    switch (ctx->pc) {
        case 0x12bb94u: goto label_12bb94;
        default: break;
    }

    ctx->pc = 0x12bad8u;

    // 0x12bad8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x12bad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x12badc: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x12badcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12bae0: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE0u;
        // 0x12bae4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12B878u;
            return;
        }
    }
    ctx->pc = 0x12BAE8u;
    // 0x12bae8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12baec: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x12baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x12baf0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x12baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x12baf4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x12baf8: 0x3404b800  ori         $a0, $zero, 0xB800
    ctx->pc = 0x12baf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x12bafc: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x12bafcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x12bb00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12bb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12bb04: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12bb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12bb08: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x12bb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x12bb0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12bb10: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x12bb10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x12bb14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12bb18: 0x2b230002  slti        $v1, $t9, 0x2
    ctx->pc = 0x12bb18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12bb1c: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x12bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x12bb20: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12bb24: 0x3442e42e  ori         $v0, $v0, 0xE42E
    ctx->pc = 0x12bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58414);
    // 0x12bb28: 0x254a0140  addiu       $t2, $t2, 0x140
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    // 0x12bb2c: 0x1460ff4a  bnez        $v1, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x12BB2Cu;
    {
        const bool branch_taken_0x12bb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB2Cu;
        // 0x12bb30: 0xfd220008  sd          $v0, 0x8($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb2c) {
            ctx->pc = 0x12B858u;
            return;
        }
    }
    ctx->pc = 0x12BB34u;
    // 0x12bb34: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x12bb34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x12bb38: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x12bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12bb3c: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12bb40: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12bb40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12bb44: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x12bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12bb48: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12bb48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12bb4c: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x12bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x12bb50: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x12bb54: 0x2610d650  addiu       $s0, $s0, -0x29B0
    ctx->pc = 0x12bb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956624));
    // 0x12bb58: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12bb5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12bb60: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x12bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x12bb64: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x12bb64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12bb68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12bb6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12bb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12bb70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12bb74: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12bb78: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12bb7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x12bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12bb80: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x12bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12bb84: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12bb88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12bb8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12BB8Cu;
    SET_GPR_U32(ctx, 31, 0x12BB94u);
    ctx->pc = 0x12BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB8Cu;
    // 0x12bb90: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12BB8Cu, 0x12BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB94u;
label_12bb94:
    // 0x12bb94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12bb98: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12bb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12bb9c: 0x0  nop
    ctx->pc = 0x12bb9cu;
    // NOP
    ctx->pc = 0x12bba0u;
}
