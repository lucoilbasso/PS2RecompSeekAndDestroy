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

// Function: entry_0013df30
// Address: 0x13df30 - 0x13df98
void entry_0013df30_0x13df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013df30_0x13df30");
#endif

    switch (ctx->pc) {
        case 0x13df90u: goto label_13df90;
        default: break;
    }

    ctx->pc = 0x13df30u;

    // 0x13df30: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df34: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x13df34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13df38: 0x2471023  subu        $v0, $s2, $a3
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x13df3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13df40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13df44: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13DF44u;
    {
        const bool branch_taken_0x13df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF44u;
        // 0x13df48: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df44) {
            ctx->pc = 0x13E028u;
            return;
        }
    }
    ctx->pc = 0x13DF4Cu;
    // 0x13df4c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13df50: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13df54: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13df54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13df58: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13df58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13df5c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13df5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13df60: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13df60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13df64: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13df64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13df68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13df6c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x13df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x13df70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13df74: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x13df74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x13df78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13df7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13df80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13df84: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13df84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13df88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DF88u;
    SET_GPR_U32(ctx, 31, 0x13DF90u);
    ctx->pc = 0x13DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF88u;
    // 0x13df8c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DF88u, 0x13DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF90u;
label_13df90:
    // 0x13df90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13df94: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13df94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x13df98u;
}
