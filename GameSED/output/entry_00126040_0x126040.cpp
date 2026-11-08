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

// Function: entry_00126040
// Address: 0x126040 - 0x1260f8
void entry_00126040_0x126040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126040_0x126040");
#endif

    switch (ctx->pc) {
        case 0x1260f0u: goto label_1260f0;
        default: break;
    }

    ctx->pc = 0x126040u;

    // 0x126040: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x126040u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x126044: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x126044u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x126048: 0x54800051  bnel        $a0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x126048u;
    {
        const bool branch_taken_0x126048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x126048) {
            ctx->pc = 0x12604Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126048u;
            // 0x12604c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126190u;
            return;
        }
    }
    ctx->pc = 0x126050u;
    // 0x126050: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x126050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126054: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x126054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126058: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x126058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x12605c: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x12605cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x126060: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x126060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126064: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x126064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x126068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x126068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12606c: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x12606cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126070: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x126070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x126074: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x126074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x126078: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12607c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x126080: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x126080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x126084: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x126084u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x126088: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12608c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x12608cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x126090: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x126090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x126094: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x126094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x126098: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x126098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12609c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1260a0: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1260a4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1260a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260a8: 0x2651823  subu        $v1, $s3, $a1
    ctx->pc = 0x1260a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1260ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260b0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1260b4: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1260b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1260bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1260bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1260c0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1260c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1260c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1260c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1260c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1260c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1260cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1260ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1260d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1260d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1260d4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1260d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1260d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1260dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1260e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1260e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1260e4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1260e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1260e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1260E8u;
    SET_GPR_U32(ctx, 31, 0x1260F0u);
    ctx->pc = 0x1260ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260E8u;
    // 0x1260ec: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1260E8u, 0x1260F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260F0u;
label_1260f0:
    // 0x1260f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1260f4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1260f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x1260f8u;
}
