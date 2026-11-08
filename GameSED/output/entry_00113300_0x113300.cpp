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

// Function: entry_00113300
// Address: 0x113300 - 0x113320
void entry_00113300_0x113300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113300_0x113300");
#endif

    switch (ctx->pc) {
        case 0x11331cu: goto label_11331c;
        default: break;
    }

    ctx->pc = 0x113300u;

    // 0x113300: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x113300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x113304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113308: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11330c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x11330cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x113310: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x113314: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x113314u;
    SET_GPR_U32(ctx, 31, 0x11331Cu);
    ctx->pc = 0x113318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113314u;
    // 0x113318: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113314u, 0x11331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11331Cu;
label_11331c:
    // 0x11331c: 0x26263410  addiu       $a2, $s1, 0x3410
    ctx->pc = 0x11331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
    ctx->pc = 0x113320u;
}
