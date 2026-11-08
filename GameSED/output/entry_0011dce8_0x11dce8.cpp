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

// Function: entry_0011dce8
// Address: 0x11dce8 - 0x11dd20
void entry_0011dce8_0x11dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dce8_0x11dce8");
#endif

    switch (ctx->pc) {
        case 0x11dcf0u: goto label_11dcf0;
        case 0x11dcfcu: goto label_11dcfc;
        default: break;
    }

    ctx->pc = 0x11dce8u;

    // 0x11dce8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DCE8u;
    SET_GPR_U32(ctx, 31, 0x11DCF0u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DCE8u, 0x11DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCF0u;
label_11dcf0:
    // 0x11dcf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11dcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcf4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DCF4u;
    SET_GPR_U32(ctx, 31, 0x11DCFCu);
    ctx->pc = 0x11DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCF4u;
    // 0x11dcf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DCF4u, 0x11DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCFCu;
label_11dcfc:
    // 0x11dcfc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dd00: 0x123140  sll         $a2, $s2, 5
    ctx->pc = 0x11dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x11dd04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd0c: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x11dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x11dd10: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11dd14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11dd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd18: 0xc05ef36  jal         func_17BCD8
    ctx->pc = 0x11DD18u;
    SET_GPR_U32(ctx, 31, 0x11DD20u);
    ctx->pc = 0x11DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD18u;
    // 0x11dd1c: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCD8u, 0x11DD18u, 0x11DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD20u;
}
