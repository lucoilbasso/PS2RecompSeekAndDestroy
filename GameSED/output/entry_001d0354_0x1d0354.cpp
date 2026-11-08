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

// Function: entry_001d0354
// Address: 0x1d0354 - 0x1d037c
void entry_001d0354_0x1d0354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0354_0x1d0354");
#endif

    switch (ctx->pc) {
        case 0x1d0360u: goto label_1d0360;
        default: break;
    }

    ctx->pc = 0x1d0354u;

    // 0x1d0354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0358: 0xc06bed8  jal         func_1AFB60
    ctx->pc = 0x1D0358u;
    SET_GPR_U32(ctx, 31, 0x1D0360u);
    ctx->pc = 0x1D035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0358u;
    // 0x1d035c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB60u, 0x1D0358u, 0x1D0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0360u;
label_1d0360:
    // 0x1d0360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0368: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0368u;
    {
        const bool branch_taken_0x1d0368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0368) {
            ctx->pc = 0x1D036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0368u;
            // 0x1d036c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0380u;
            return;
        }
    }
    ctx->pc = 0x1D0370u;
    // 0x1d0370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0374: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0374u;
    {
        const bool branch_taken_0x1d0374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0374) {
            ctx->pc = 0x1D0378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0374u;
            // 0x1d0378: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D037Cu;
            return;
        }
    }
    ctx->pc = 0x1D037Cu;
}
