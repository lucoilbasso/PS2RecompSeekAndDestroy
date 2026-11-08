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

// Function: entry_001ade9c
// Address: 0x1ade9c - 0x1adee8
void entry_001ade9c_0x1ade9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ade9c_0x1ade9c");
#endif

    switch (ctx->pc) {
        case 0x1adeb0u: goto label_1adeb0;
        case 0x1adec0u: goto label_1adec0;
        default: break;
    }

    ctx->pc = 0x1ade9cu;

    // 0x1ade9c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1adea0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1adea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1adea4: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1adea8: 0xc06b7c2  jal         func_1ADF08
    ctx->pc = 0x1ADEA8u;
    SET_GPR_U32(ctx, 31, 0x1ADEB0u);
    ctx->pc = 0x1ADEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEA8u;
    // 0x1adeac: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADF08u, 0x1ADEA8u, 0x1ADEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEB0u;
label_1adeb0:
    // 0x1adeb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adeb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adeb8: 0xc06b662  jal         func_1AD988
    ctx->pc = 0x1ADEB8u;
    SET_GPR_U32(ctx, 31, 0x1ADEC0u);
    ctx->pc = 0x1ADEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEB8u;
    // 0x1adebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD988u, 0x1ADEB8u, 0x1ADEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEC0u;
label_1adec0:
    // 0x1adec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adec4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1adec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adec8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adecc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aded0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aded4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aded8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aded8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adee0: 0x806b5cc  j           func_1AD730
    ctx->pc = 0x1ADEE0u;
    ctx->pc = 0x1ADEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEE0u;
    // 0x1adee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    sceDevConsPrintf_0x1ad730(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADEE8u;
}
