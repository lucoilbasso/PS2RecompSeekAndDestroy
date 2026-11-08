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

// Function: entry_0010d234
// Address: 0x10d234 - 0x10d244
void entry_0010d234_0x10d234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d234_0x10d234");
#endif

    switch (ctx->pc) {
        case 0x10d240u: goto label_10d240;
        default: break;
    }

    ctx->pc = 0x10d234u;

    // 0x10d234: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x10d234u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x10d238: 0xc061cf2  jal         func_1873C8
    ctx->pc = 0x10D238u;
    SET_GPR_U32(ctx, 31, 0x10D240u);
    ctx->pc = 0x10D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D238u;
    // 0x10d23c: 0x460d1340  add.s       $f13, $f2, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873C8u, 0x10D238u, 0x10D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D240u;
label_10d240:
    // 0x10d240: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x10d244u;
}
