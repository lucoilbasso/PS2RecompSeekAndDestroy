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

// Function: entry_0015a94c
// Address: 0x15a94c - 0x15a968
void entry_0015a94c_0x15a94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a94c_0x15a94c");
#endif

    switch (ctx->pc) {
        case 0x15a964u: goto label_15a964;
        default: break;
    }

    ctx->pc = 0x15a94cu;

    // 0x15a94c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x15a950: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A950u;
    {
        const bool branch_taken_0x15a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a950) {
            ctx->pc = 0x15A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A950u;
            // 0x15a954: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A968u;
            return;
        }
    }
    ctx->pc = 0x15A958u;
    // 0x15a958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a95c: 0xc056ebc  jal         func_15BAF0
    ctx->pc = 0x15A95Cu;
    SET_GPR_U32(ctx, 31, 0x15A964u);
    ctx->pc = 0x15A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A95Cu;
    // 0x15a960: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BAF0u, 0x15A95Cu, 0x15A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A964u;
label_15a964:
    // 0x15a964: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a968u;
}
