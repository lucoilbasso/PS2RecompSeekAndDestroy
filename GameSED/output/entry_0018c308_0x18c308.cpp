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

// Function: entry_0018c308
// Address: 0x18c308 - 0x18c368
void entry_0018c308_0x18c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c308_0x18c308");
#endif

    switch (ctx->pc) {
        case 0x18c330u: goto label_18c330;
        case 0x18c35cu: goto label_18c35c;
        default: break;
    }

    ctx->pc = 0x18c308u;

    // 0x18c308: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x18c30c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x18c30cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18c310: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x18c314: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18c318: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18c31c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18c320: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18c320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18c324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c328: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18C328u;
    SET_GPR_U32(ctx, 31, 0x18C330u);
    ctx->pc = 0x18C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C328u;
    // 0x18c32c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18C328u, 0x18C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C330u;
label_18c330:
    // 0x18c330: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18c334: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x18c334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x18c338: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x18c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x18c33c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18c340: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x18c340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x18c344: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x18c344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x18c348: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18c34c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18c350: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18c350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x18c354: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18C354u;
    SET_GPR_U32(ctx, 31, 0x18C35Cu);
    ctx->pc = 0x18C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C354u;
    // 0x18c358: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18C354u, 0x18C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C35Cu;
label_18c35c:
    // 0x18c35c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18c360: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18c360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18c364: 0x0  nop
    ctx->pc = 0x18c364u;
    // NOP
    ctx->pc = 0x18c368u;
}
