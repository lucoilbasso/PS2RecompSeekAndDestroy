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

// Function: entry_001c1394
// Address: 0x1c1394 - 0x1c13a4
void entry_001c1394_0x1c1394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1394_0x1c1394");
#endif

    switch (ctx->pc) {
        case 0x1c139cu: goto label_1c139c;
        default: break;
    }

    ctx->pc = 0x1c1394u;

    // 0x1c1394: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1394u;
    SET_GPR_U32(ctx, 31, 0x1C139Cu);
    ctx->pc = 0x1C1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1394u;
    // 0x1c1398: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1394u, 0x1C139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C139Cu;
label_1c139c:
    // 0x1c139c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C139Cu;
    {
        const bool branch_taken_0x1c139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C139Cu;
        // 0x1c13a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c139c) {
            ctx->pc = 0x1C13D0u;
            return;
        }
    }
    ctx->pc = 0x1C13A4u;
}
