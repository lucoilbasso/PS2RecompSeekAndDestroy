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

// Function: entry_0015a984
// Address: 0x15a984 - 0x15a9a0
void entry_0015a984_0x15a984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a984_0x15a984");
#endif

    switch (ctx->pc) {
        case 0x15a99cu: goto label_15a99c;
        default: break;
    }

    ctx->pc = 0x15a984u;

    // 0x15a984: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15a988: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A988u;
    {
        const bool branch_taken_0x15a988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a988) {
            ctx->pc = 0x15A98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A988u;
            // 0x15a98c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9A0u;
            return;
        }
    }
    ctx->pc = 0x15A990u;
    // 0x15a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a994: 0xc0583a4  jal         func_160E90
    ctx->pc = 0x15A994u;
    SET_GPR_U32(ctx, 31, 0x15A99Cu);
    ctx->pc = 0x15A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A994u;
    // 0x15a998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160E90u, 0x15A994u, 0x15A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A99Cu;
label_15a99c:
    // 0x15a99c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a9a0u;
}
