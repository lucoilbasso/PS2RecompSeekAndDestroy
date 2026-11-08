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

// Function: entry_00186ce4
// Address: 0x186ce4 - 0x186d00
void entry_00186ce4_0x186ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186ce4_0x186ce4");
#endif

    ctx->pc = 0x186ce4u;

    // 0x186ce4: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x186ce8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x186ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x186cec: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x186cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x186cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186CF0u;
    {
        const bool branch_taken_0x186cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cf0) {
            ctx->pc = 0x186D00u;
            return;
        }
    }
    ctx->pc = 0x186CF8u;
    // 0x186cf8: 0xc061920  jal         func_186480
    ctx->pc = 0x186CF8u;
    SET_GPR_U32(ctx, 31, 0x186D00u);
    ctx->pc = 0x186CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CF8u;
    // 0x186cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x186CF8u, 0x186D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D00u;
}
