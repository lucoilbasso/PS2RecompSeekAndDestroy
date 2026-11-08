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

// Function: entry_00188100
// Address: 0x188100 - 0x188160
void entry_00188100_0x188100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188100_0x188100");
#endif

    switch (ctx->pc) {
        case 0x188128u: goto label_188128;
        case 0x188154u: goto label_188154;
        default: break;
    }

    ctx->pc = 0x188100u;

    // 0x188100: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x188100u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x188104: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x188104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x188108: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x18810c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x188110: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x188110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x188114: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x188114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x188118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x188118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18811c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18811cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188120: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x188120u;
    SET_GPR_U32(ctx, 31, 0x188128u);
    ctx->pc = 0x188124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188120u;
    // 0x188124: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x188120u, 0x188128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188128u;
label_188128:
    // 0x188128: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x188128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18812c: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x18812cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x188130: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x188130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x188134: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x188134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x188138: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x18813c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x18813cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x188140: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x188140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x188144: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x188144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x188148: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x188148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18814c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18814Cu;
    SET_GPR_U32(ctx, 31, 0x188154u);
    ctx->pc = 0x188150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18814Cu;
    // 0x188150: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18814Cu, 0x188154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188154u;
label_188154:
    // 0x188154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188158: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x188158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18815c: 0x0  nop
    ctx->pc = 0x18815cu;
    // NOP
    ctx->pc = 0x188160u;
}
