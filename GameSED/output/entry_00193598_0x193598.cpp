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

// Function: entry_00193598
// Address: 0x193598 - 0x1935c4
void entry_00193598_0x193598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193598_0x193598");
#endif

    switch (ctx->pc) {
        case 0x1935acu: goto label_1935ac;
        default: break;
    }

    ctx->pc = 0x193598u;

    // 0x193598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19359c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935a0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1935a4: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x1935A4u;
    SET_GPR_U32(ctx, 31, 0x1935ACu);
    ctx->pc = 0x1935A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935A4u;
    // 0x1935a8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x1935A4u, 0x1935ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935ACu;
label_1935ac:
    // 0x1935ac: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1935acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1935b0: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x1935b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1935b4: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x1935b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1935b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1935b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1935bc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1935bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1935c0: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1935c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1935c4u;
}
