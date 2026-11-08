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

// Function: entry_00127828
// Address: 0x127828 - 0x127898
void entry_00127828_0x127828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127828_0x127828");
#endif

    switch (ctx->pc) {
        case 0x127890u: goto label_127890;
        default: break;
    }

    ctx->pc = 0x127828u;

    // 0x127828: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x127828u;
    {
        const bool branch_taken_0x127828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127828u;
        // 0x12782c: 0x8f9089dc  lw          $s0, -0x7624($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127828) {
            ctx->pc = 0x127938u;
            return;
        }
    }
    ctx->pc = 0x127830u;
    // 0x127830: 0x8f9089e0  lw          $s0, -0x7620($gp)
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x127834: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x127838: 0x8f8389e4  lw          $v1, -0x761C($gp)
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x12783c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12783cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x127840: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127844: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x127844u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x127848: 0x8f9189dc  lw          $s1, -0x7624($gp)
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x12784c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12784cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127850: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x127854: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x127858: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12785c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12785cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x127860: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x127860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127864: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x127864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x127868: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x127868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12786c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12786cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127870: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x127870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127874: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x127874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x127878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12787c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127880: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x127884: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x127884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x127888: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x127888u;
    SET_GPR_U32(ctx, 31, 0x127890u);
    ctx->pc = 0x12788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127888u;
    // 0x12788c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x127888u, 0x127890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127890u;
label_127890:
    // 0x127890: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x127894: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x127894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x127898u;
}
