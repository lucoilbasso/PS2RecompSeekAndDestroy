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

// Function: entry_00133c44
// Address: 0x133c44 - 0x133c64
void entry_00133c44_0x133c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c44_0x133c44");
#endif

    ctx->pc = 0x133c44u;

    // 0x133c44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x133c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133c48: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x133c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x133c4c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x133c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x133c50: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x133c54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133C54u;
    {
        const bool branch_taken_0x133c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C54u;
        // 0x133c58: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c54) {
            ctx->pc = 0x133C64u;
            return;
        }
    }
    ctx->pc = 0x133C5Cu;
    // 0x133c5c: 0xc061920  jal         func_186480
    ctx->pc = 0x133C5Cu;
    SET_GPR_U32(ctx, 31, 0x133C64u);
    ctx->pc = 0x133C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C5Cu;
    // 0x133c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133C5Cu, 0x133C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C64u;
}
