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

// Function: entry_0013aa8c
// Address: 0x13aa8c - 0x13aac4
void entry_0013aa8c_0x13aa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aa8c_0x13aa8c");
#endif

    switch (ctx->pc) {
        case 0x13aab8u: goto label_13aab8;
        default: break;
    }

    ctx->pc = 0x13aa8cu;

    // 0x13aa8c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x13aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13aa90: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x13aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x13aa94: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13aa98: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13aa9c: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x13aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x13aaa0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13aaa4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x13aaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13aaa8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13aaac: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x13aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13aab0: 0xc066810  jal         func_19A040
    ctx->pc = 0x13AAB0u;
    SET_GPR_U32(ctx, 31, 0x13AAB8u);
    ctx->pc = 0x13AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAB0u;
    // 0x13aab4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x13AAB0u, 0x13AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAB8u;
label_13aab8:
    // 0x13aab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13aab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13aabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13aac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13aac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13aac4u;
}
