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

// Function: entry_0017c150
// Address: 0x17c150 - 0x17c19c
void entry_0017c150_0x17c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c150_0x17c150");
#endif

    switch (ctx->pc) {
        case 0x17c170u: goto label_17c170;
        case 0x17c184u: goto label_17c184;
        default: break;
    }

    ctx->pc = 0x17c150u;

    // 0x17c150: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c154: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x17c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x17c158: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x17c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x17c15c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x17c160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c164: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17c164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17c168: 0xc05e9ee  jal         func_17A7B8
    ctx->pc = 0x17C168u;
    SET_GPR_U32(ctx, 31, 0x17C170u);
    ctx->pc = 0x17C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C168u;
    // 0x17c16c: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7B8u, 0x17C168u, 0x17C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C170u;
label_17c170:
    // 0x17c170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c174: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c178: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17c17c: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x17C17Cu;
    SET_GPR_U32(ctx, 31, 0x17C184u);
    ctx->pc = 0x17C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C17Cu;
    // 0x17c180: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x17C17Cu, 0x17C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C184u;
label_17c184:
    // 0x17c184: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c18c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c190: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x17c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x17c19cu;
}
