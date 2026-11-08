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

// Function: entry_001b7640
// Address: 0x1b7640 - 0x1b767c
void entry_001b7640_0x1b7640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7640_0x1b7640");
#endif

    switch (ctx->pc) {
        case 0x1b7678u: goto label_1b7678;
        default: break;
    }

    ctx->pc = 0x1b7640u;

    // 0x1b7640: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b7640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1b7644: 0x2463bab8  addiu       $v1, $v1, -0x4548
    ctx->pc = 0x1b7644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949560));
    // 0x1b7648: 0x8ca4bab0  lw          $a0, -0x4550($a1)
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40BAB0u));
    // 0x1b764c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b7650: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7654: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1b7654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1b7658: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1b7658u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b765c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b7660: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b7664: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b7664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b7668: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1b7668u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b766c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b766cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7670: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B7670u;
    SET_GPR_U32(ctx, 31, 0x1B7678u);
    ctx->pc = 0x1B7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7670u;
    // 0x1b7674: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B7670u, 0x1B7678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7678u;
label_1b7678:
    // 0x1b7678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b767cu;
}
