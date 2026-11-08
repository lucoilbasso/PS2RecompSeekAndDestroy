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

// Function: entry_00129e50
// Address: 0x129e50 - 0x129eb0
void entry_00129e50_0x129e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129e50_0x129e50");
#endif

    switch (ctx->pc) {
        case 0x129ea8u: goto label_129ea8;
        default: break;
    }

    ctx->pc = 0x129e50u;

    // 0x129e50: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x129e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x129e54: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x129e58: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x129e5c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x129e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129e60: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x129e60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x129e64: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x129e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e68: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x129e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x129e6c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x129e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x129e70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x129e74: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x129e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x129e78: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x129e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129e7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x129e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x129e80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x129e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x129e84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x129e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x129e88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129e8c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x129e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x129e90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x129e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x129e94: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x129e98: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x129e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x129e9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x129e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x129ea0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129EA0u;
    SET_GPR_U32(ctx, 31, 0x129EA8u);
    ctx->pc = 0x129EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EA0u;
    // 0x129ea4: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129EA0u, 0x129EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EA8u;
label_129ea8:
    // 0x129ea8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129eac: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x129eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x129eb0u;
}
