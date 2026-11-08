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

// Function: entry_00171610
// Address: 0x171610 - 0x17163c
void entry_00171610_0x171610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171610_0x171610");
#endif

    switch (ctx->pc) {
        case 0x17161cu: goto label_17161c;
        default: break;
    }

    ctx->pc = 0x171610u;

    // 0x171610: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171614: 0xc071254  jal         func_1C4950
    ctx->pc = 0x171614u;
    SET_GPR_U32(ctx, 31, 0x17161Cu);
    ctx->pc = 0x171618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171614u;
    // 0x171618: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x171614u, 0x17161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17161Cu;
label_17161c:
    // 0x17161c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171620: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x171620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17162c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x17162cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x171630: 0x24061080  addiu       $a2, $zero, 0x1080
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
    // 0x171634: 0x8071254  j           func_1C4950
    ctx->pc = 0x171634u;
    ctx->pc = 0x171638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171634u;
    // 0x171638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    sceSdRemote_0x1c4950(rdram, ctx, runtime); return;
    ctx->pc = 0x17163Cu;
}
