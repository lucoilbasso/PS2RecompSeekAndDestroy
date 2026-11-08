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

// Function: entry_0013f730
// Address: 0x13f730 - 0x13f73c
void entry_0013f730_0x13f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f730_0x13f730");
#endif

    ctx->pc = 0x13f730u;

    // 0x13f730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f734: 0xc04fd0c  jal         func_13F430
    ctx->pc = 0x13F734u;
    SET_GPR_U32(ctx, 31, 0x13F73Cu);
    ctx->pc = 0x13F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F734u;
    // 0x13f738: 0xc62c0148  lwc1        $f12, 0x148($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F430u, 0x13F734u, 0x13F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F73Cu;
}
