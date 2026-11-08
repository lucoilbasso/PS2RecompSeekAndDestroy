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

// Function: entry_0012a600
// Address: 0x12a600 - 0x12a670
void entry_0012a600_0x12a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a600_0x12a600");
#endif

    switch (ctx->pc) {
        case 0x12a664u: goto label_12a664;
        default: break;
    }

    ctx->pc = 0x12a600u;

    // 0x12a600: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x12A600u;
    {
        const bool branch_taken_0x12a600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A600u;
        // 0x12a604: 0x8f9089f0  lw          $s0, -0x7610($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a600) {
            ctx->pc = 0x12A704u;
            return;
        }
    }
    ctx->pc = 0x12A608u;
    // 0x12a608: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x12a608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12a60c: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x12a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x12a610: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x12a614: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12a614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a618: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x12a618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12a61c: 0x8f9189ec  lw          $s1, -0x7614($gp)
    ctx->pc = 0x12a61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x12a620: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12a620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12a624: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x12a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x12a628: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12a628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12a62c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12a630: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x12a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x12a634: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12a634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a638: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12a638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12a63c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12a640: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12a640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12a644: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a648: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12a648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12a64c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a650: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a654: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12a654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12a658: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12a658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12a65c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12A65Cu;
    SET_GPR_U32(ctx, 31, 0x12A664u);
    ctx->pc = 0x12A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A65Cu;
    // 0x12a660: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12A65Cu, 0x12A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A664u;
label_12a664:
    // 0x12a664: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a668: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12a66c: 0x0  nop
    ctx->pc = 0x12a66cu;
    // NOP
    ctx->pc = 0x12a670u;
}
