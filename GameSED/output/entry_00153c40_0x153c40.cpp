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

// Function: entry_00153c40
// Address: 0x153c40 - 0x153c60
void entry_00153c40_0x153c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153c40_0x153c40");
#endif

    switch (ctx->pc) {
        case 0x153c58u: goto label_153c58;
        default: break;
    }

    ctx->pc = 0x153c40u;

    // 0x153c40: 0xc78282d8  lwc1        $f2, -0x7D28($gp)
    ctx->pc = 0x153c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153c44: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x153c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153c48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x153C48u;
    {
        const bool branch_taken_0x153c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153c48) {
            ctx->pc = 0x153C60u;
            return;
        }
    }
    ctx->pc = 0x153C50u;
    // 0x153c50: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x153C50u;
    SET_GPR_U32(ctx, 31, 0x153C58u);
    ctx->pc = 0x153C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C50u;
    // 0x153c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153C50u, 0x153C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C58u;
label_153c58:
    // 0x153c58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x153C58u;
    {
        const bool branch_taken_0x153c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C58u;
        // 0x153c5c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c58) {
            ctx->pc = 0x153CE0u;
            return;
        }
    }
    ctx->pc = 0x153C60u;
}
