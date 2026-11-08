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

// Function: entry_00187c28
// Address: 0x187c28 - 0x187c88
void entry_00187c28_0x187c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c28_0x187c28");
#endif

    switch (ctx->pc) {
        case 0x187c50u: goto label_187c50;
        case 0x187c7cu: goto label_187c7c;
        default: break;
    }

    ctx->pc = 0x187c28u;

    // 0x187c28: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x187c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x187c2c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x187c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x187c30: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x187c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x187c34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187c38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x187c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x187c3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x187c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x187c40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x187c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x187c44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x187c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c48: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x187C48u;
    SET_GPR_U32(ctx, 31, 0x187C50u);
    ctx->pc = 0x187C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C48u;
    // 0x187c4c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x187C48u, 0x187C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C50u;
label_187c50:
    // 0x187c50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187c54: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x187c58: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x187c5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187c60: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x187c64: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x187c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x187c68: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x187c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x187c6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x187c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x187c70: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x187c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x187c74: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x187C74u;
    SET_GPR_U32(ctx, 31, 0x187C7Cu);
    ctx->pc = 0x187C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C74u;
    // 0x187c78: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187C74u, 0x187C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C7Cu;
label_187c7c:
    // 0x187c7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x187c80: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x187c84: 0x0  nop
    ctx->pc = 0x187c84u;
    // NOP
    ctx->pc = 0x187c88u;
}
