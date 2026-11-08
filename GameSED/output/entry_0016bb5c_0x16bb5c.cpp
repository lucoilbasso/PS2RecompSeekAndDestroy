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

// Function: entry_0016bb5c
// Address: 0x16bb5c - 0x16bbc0
void entry_0016bb5c_0x16bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb5c_0x16bb5c");
#endif

    switch (ctx->pc) {
        case 0x16bbb8u: goto label_16bbb8;
        default: break;
    }

    ctx->pc = 0x16bb5cu;

    // 0x16bb5c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x16bb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb60: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x16bb64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bb68: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb6c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x16bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x16bb70: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x16bb70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x16bb74: 0x1251823  subu        $v1, $t1, $a1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x16bb78: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x16bb78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb7c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x16bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x16bb80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16bb84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x16bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x16bb88: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16bb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16bb8c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x16bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x16bb90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x16bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16bb94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x16bb98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bb9c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x16bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x16bba0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16bba4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bba8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16bba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x16bbac: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x16bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x16bbb0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16BBB0u;
    SET_GPR_U32(ctx, 31, 0x16BBB8u);
    ctx->pc = 0x16BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBB0u;
    // 0x16bbb4: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16BBB0u, 0x16BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBB8u;
label_16bbb8:
    // 0x16bbb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x16bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x16bbbc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x16bbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x16bbc0u;
}
