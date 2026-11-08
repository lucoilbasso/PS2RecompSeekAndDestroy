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

// Function: entry_00103200
// Address: 0x103200 - 0x103248
void entry_00103200_0x103200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103200_0x103200");
#endif

    switch (ctx->pc) {
        case 0x103214u: goto label_103214;
        case 0x10321cu: goto label_10321c;
        case 0x103224u: goto label_103224;
        case 0x10322cu: goto label_10322c;
        case 0x103234u: goto label_103234;
        case 0x103244u: goto label_103244;
        default: break;
    }

    ctx->pc = 0x103200u;

    // 0x103200: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x103200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103204: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x103204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103208: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x103208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10320c: 0xc040b06  jal         func_102C18
    ctx->pc = 0x10320Cu;
    SET_GPR_U32(ctx, 31, 0x103214u);
    ctx->pc = 0x103210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10320Cu;
    // 0x103210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102C18u, 0x10320Cu, 0x103214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103214u;
label_103214:
    // 0x103214: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103214u;
    SET_GPR_U32(ctx, 31, 0x10321Cu);
    ctx->pc = 0x103218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103214u;
    // 0x103218: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103214u, 0x10321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10321Cu;
label_10321c:
    // 0x10321c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10321Cu;
    SET_GPR_U32(ctx, 31, 0x103224u);
    ctx->pc = 0x103220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10321Cu;
    // 0x103220: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10321Cu, 0x103224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103224u;
label_103224:
    // 0x103224: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103224u;
    SET_GPR_U32(ctx, 31, 0x10322Cu);
    ctx->pc = 0x103228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103224u;
    // 0x103228: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103224u, 0x10322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10322Cu;
label_10322c:
    // 0x10322c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10322Cu;
    SET_GPR_U32(ctx, 31, 0x103234u);
    ctx->pc = 0x103230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10322Cu;
    // 0x103230: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10322Cu, 0x103234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103234u;
label_103234:
    // 0x103234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10323c: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x10323Cu;
    SET_GPR_U32(ctx, 31, 0x103244u);
    ctx->pc = 0x103240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10323Cu;
    // 0x103240: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x10323Cu, 0x103244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103244u;
label_103244:
    // 0x103244: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x103244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x103248u;
}
