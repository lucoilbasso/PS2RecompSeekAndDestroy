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

// Function: entry_00144bcc
// Address: 0x144bcc - 0x144be0
void entry_00144bcc_0x144bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144bcc_0x144bcc");
#endif

    switch (ctx->pc) {
        case 0x144bd4u: goto label_144bd4;
        default: break;
    }

    ctx->pc = 0x144bccu;

    // 0x144bcc: 0xc0601be  jal         func_1806F8
    ctx->pc = 0x144BCCu;
    SET_GPR_U32(ctx, 31, 0x144BD4u);
    ctx->pc = 0x144BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BCCu;
    // 0x144bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806F8u, 0x144BCCu, 0x144BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BD4u;
label_144bd4:
    // 0x144bd4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x144BD4u;
    {
        const bool branch_taken_0x144bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144bd4) {
            ctx->pc = 0x144BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144BD4u;
            // 0x144bd8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x144C30u;
            return;
        }
    }
    ctx->pc = 0x144BDCu;
    // 0x144bdc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x144bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x144be0u;
}
