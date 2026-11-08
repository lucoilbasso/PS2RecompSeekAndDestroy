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

// Function: entry_00114580
// Address: 0x114580 - 0x1145a4
void entry_00114580_0x114580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114580_0x114580");
#endif

    switch (ctx->pc) {
        case 0x114588u: goto label_114588;
        default: break;
    }

    ctx->pc = 0x114580u;

    // 0x114580: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114580u;
    SET_GPR_U32(ctx, 31, 0x114588u);
    ctx->pc = 0x114584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114580u;
    // 0x114584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114580u, 0x114588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x114588u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11458c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11458cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x114590: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x114590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x114594: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x114594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x114598: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x114598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11459c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1145a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1145a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->pc = 0x1145a4u;
}
