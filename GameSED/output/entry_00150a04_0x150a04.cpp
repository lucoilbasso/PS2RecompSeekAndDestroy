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

// Function: entry_00150a04
// Address: 0x150a04 - 0x150a24
void entry_00150a04_0x150a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150a04_0x150a04");
#endif

    ctx->pc = 0x150a04u;

    // 0x150a04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a08: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x150a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x150a0c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x150a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x150a10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x150a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x150a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150A14u;
    {
        const bool branch_taken_0x150a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150a14) {
            ctx->pc = 0x150A24u;
            return;
        }
    }
    ctx->pc = 0x150A1Cu;
    // 0x150a1c: 0xc061920  jal         func_186480
    ctx->pc = 0x150A1Cu;
    SET_GPR_U32(ctx, 31, 0x150A24u);
    ctx->pc = 0x150A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A1Cu;
    // 0x150a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x150A1Cu, 0x150A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A24u;
}
