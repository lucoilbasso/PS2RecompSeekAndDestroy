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

// Function: entry_00108d40
// Address: 0x108d40 - 0x108d58
void entry_00108d40_0x108d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108d40_0x108d40");
#endif

    switch (ctx->pc) {
        case 0x108d4cu: goto label_108d4c;
        default: break;
    }

    ctx->pc = 0x108d40u;

    // 0x108d40: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x108d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x108d44: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x108D44u;
    SET_GPR_U32(ctx, 31, 0x108D4Cu);
    ctx->pc = 0x108D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D44u;
    // 0x108d48: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x108D44u, 0x108D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D4Cu;
label_108d4c:
    // 0x108d4c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D4Cu;
        // 0x108d50: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0x0  nop
    ctx->pc = 0x108d54u;
    // NOP
    ctx->pc = 0x108d58u;
}
