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

// Function: entry_001073a0
// Address: 0x1073a0 - 0x1073c4
void entry_001073a0_0x1073a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001073a0_0x1073a0");
#endif

    switch (ctx->pc) {
        case 0x1073c0u: goto label_1073c0;
        default: break;
    }

    ctx->pc = 0x1073a0u;

    // 0x1073a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1073a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1073a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1073a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1073a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1073acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1073b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1073b4: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x1073b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x1073b8: 0xc0618da  jal         func_186368
    ctx->pc = 0x1073B8u;
    SET_GPR_U32(ctx, 31, 0x1073C0u);
    ctx->pc = 0x1073BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073B8u;
    // 0x1073bc: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1073B8u, 0x1073C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073C0u;
label_1073c0:
    // 0x1073c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1073c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1073c4u;
}
