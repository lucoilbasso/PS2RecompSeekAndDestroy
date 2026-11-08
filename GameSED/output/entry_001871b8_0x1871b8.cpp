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

// Function: entry_001871b8
// Address: 0x1871b8 - 0x187218
void entry_001871b8_0x1871b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001871b8_0x1871b8");
#endif

    switch (ctx->pc) {
        case 0x1871e0u: goto label_1871e0;
        case 0x18720cu: goto label_18720c;
        default: break;
    }

    ctx->pc = 0x1871b8u;

    // 0x1871b8: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x1871bc: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1871bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1871c0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1871c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1871c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1871c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1871cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1871ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1871d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1871d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1871d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1871d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1871D8u;
    SET_GPR_U32(ctx, 31, 0x1871E0u);
    ctx->pc = 0x1871DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871D8u;
    // 0x1871dc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1871D8u, 0x1871E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871E0u;
label_1871e0:
    // 0x1871e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1871e4: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x1871e8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1871ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1871ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1871f0: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1871f4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1871f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1871f8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1871fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1871fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x187200: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x187200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x187204: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x187204u;
    SET_GPR_U32(ctx, 31, 0x18720Cu);
    ctx->pc = 0x187208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187204u;
    // 0x187208: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187204u, 0x18720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18720Cu;
label_18720c:
    // 0x18720c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x187210: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x187214: 0x0  nop
    ctx->pc = 0x187214u;
    // NOP
    ctx->pc = 0x187218u;
}
