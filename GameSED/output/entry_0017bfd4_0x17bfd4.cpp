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

// Function: entry_0017bfd4
// Address: 0x17bfd4 - 0x17bfe4
void entry_0017bfd4_0x17bfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bfd4_0x17bfd4");
#endif

    switch (ctx->pc) {
        case 0x17bfdcu: goto label_17bfdc;
        default: break;
    }

    ctx->pc = 0x17bfd4u;

    // 0x17bfd4: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17BFD4u;
    SET_GPR_U32(ctx, 31, 0x17BFDCu);
    ctx->pc = 0x17BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFD4u;
    // 0x17bfd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17BFD4u, 0x17BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFDCu;
label_17bfdc:
    // 0x17bfdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bfdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bfe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bfe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x17bfe4u;
}
