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

// Function: entry_0015a968
// Address: 0x15a968 - 0x15a984
void entry_0015a968_0x15a968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a968_0x15a968");
#endif

    switch (ctx->pc) {
        case 0x15a980u: goto label_15a980;
        default: break;
    }

    ctx->pc = 0x15a968u;

    // 0x15a968: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15a968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x15a96c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A96Cu;
    {
        const bool branch_taken_0x15a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a96c) {
            ctx->pc = 0x15A970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A96Cu;
            // 0x15a970: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A984u;
            return;
        }
    }
    ctx->pc = 0x15A974u;
    // 0x15a974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a978: 0xc05725c  jal         func_15C970
    ctx->pc = 0x15A978u;
    SET_GPR_U32(ctx, 31, 0x15A980u);
    ctx->pc = 0x15A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A978u;
    // 0x15a97c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C970u, 0x15A978u, 0x15A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A980u;
label_15a980:
    // 0x15a980: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a984u;
}
