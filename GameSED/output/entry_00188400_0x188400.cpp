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

// Function: entry_00188400
// Address: 0x188400 - 0x188460
void entry_00188400_0x188400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188400_0x188400");
#endif

    switch (ctx->pc) {
        case 0x18844cu: goto label_18844c;
        case 0x188458u: goto label_188458;
        default: break;
    }

    ctx->pc = 0x188400u;

    // 0x188400: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x188400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x188404: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x188404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x188408: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x18840c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x188410: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x188414: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x188414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x188418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x188418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18841c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18841cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188420: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x188420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x188424: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x188424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188428: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18842c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x188430: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x188430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x188434: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x188434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x188438: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18843c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x188440: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x188440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x188444: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x188444u;
    SET_GPR_U32(ctx, 31, 0x18844Cu);
    ctx->pc = 0x188448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188444u;
    // 0x188448: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x188444u, 0x18844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18844Cu;
label_18844c:
    // 0x18844c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x18844cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188450: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x188450u;
    SET_GPR_U32(ctx, 31, 0x188458u);
    ctx->pc = 0x188454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188450u;
    // 0x188454: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x188450u, 0x188458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188458u;
label_188458:
    // 0x188458: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18845c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x188460u;
}
