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

// Function: entry_00186fb0
// Address: 0x186fb0 - 0x187010
void entry_00186fb0_0x186fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186fb0_0x186fb0");
#endif

    switch (ctx->pc) {
        case 0x186fd8u: goto label_186fd8;
        case 0x187004u: goto label_187004;
        default: break;
    }

    ctx->pc = 0x186fb0u;

    // 0x186fb0: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x186fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x186fb4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x186fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x186fb8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x186fbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x186fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x186fc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x186fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x186fc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x186fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x186fc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x186fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x186fcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x186fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186fd0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x186FD0u;
    SET_GPR_U32(ctx, 31, 0x186FD8u);
    ctx->pc = 0x186FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FD0u;
    // 0x186fd4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x186FD0u, 0x186FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FD8u;
label_186fd8:
    // 0x186fd8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x186fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x186fdc: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x186fe0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x186fe4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x186fe8: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x186fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x186fec: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x186fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x186ff0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x186ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x186ff4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x186ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x186ff8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x186ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x186ffc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x186FFCu;
    SET_GPR_U32(ctx, 31, 0x187004u);
    ctx->pc = 0x187000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186FFCu;
    // 0x187000: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x186FFCu, 0x187004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187004u;
label_187004:
    // 0x187004: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x187008: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18700c: 0x0  nop
    ctx->pc = 0x18700cu;
    // NOP
    ctx->pc = 0x187010u;
}
