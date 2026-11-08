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

// Function: entry_00189c30
// Address: 0x189c30 - 0x189c98
void entry_00189c30_0x189c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c30_0x189c30");
#endif

    switch (ctx->pc) {
        case 0x189c90u: goto label_189c90;
        default: break;
    }

    ctx->pc = 0x189c30u;

    // 0x189c30: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x189c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x189c34: 0x2071023  subu        $v0, $s0, $a3
    ctx->pc = 0x189c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x189c38: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x189c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x189c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189c40: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x189C40u;
    {
        const bool branch_taken_0x189c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C40u;
        // 0x189c44: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c40) {
            ctx->pc = 0x189D28u;
            return;
        }
    }
    ctx->pc = 0x189C48u;
    // 0x189c48: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x189c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c4c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x189c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x189c50: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x189c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x189c54: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x189c58: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x189c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x189c5c: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x189c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x189c60: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x189c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189c64: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x189c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x189c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189c6c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x189c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x189c70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189c74: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x189c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x189c78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x189c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189c7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x189c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189c80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189c84: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x189c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x189c88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189C88u;
    SET_GPR_U32(ctx, 31, 0x189C90u);
    ctx->pc = 0x189C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C88u;
    // 0x189c8c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189C88u, 0x189C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C90u;
label_189c90:
    // 0x189c90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x189c94: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x189c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x189c98u;
}
