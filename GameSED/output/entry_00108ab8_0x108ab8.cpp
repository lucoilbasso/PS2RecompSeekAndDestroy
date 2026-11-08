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

// Function: entry_00108ab8
// Address: 0x108ab8 - 0x108ad0
void entry_00108ab8_0x108ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108ab8_0x108ab8");
#endif

    switch (ctx->pc) {
        case 0x108ac8u: goto label_108ac8;
        default: break;
    }

    ctx->pc = 0x108ab8u;

    // 0x108ab8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108abc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ac0: 0xc0693b2  jal         func_1A4EC8
    ctx->pc = 0x108AC0u;
    SET_GPR_U32(ctx, 31, 0x108AC8u);
    ctx->pc = 0x108AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AC0u;
    // 0x108ac4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4EC8u, 0x108AC0u, 0x108AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AC8u;
label_108ac8:
    // 0x108ac8: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x108AC8u;
    {
        const bool branch_taken_0x108ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AC8u;
        // 0x108acc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ac8) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108AD0u;
}
