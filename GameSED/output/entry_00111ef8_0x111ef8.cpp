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

// Function: entry_00111ef8
// Address: 0x111ef8 - 0x111f1c
void entry_00111ef8_0x111ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111ef8_0x111ef8");
#endif

    ctx->pc = 0x111ef8u;

    // 0x111ef8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111efc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x111efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f00: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x111f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111f04: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x111f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x111f08: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x111f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x111f0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F0Cu;
    {
        const bool branch_taken_0x111f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F0Cu;
        // 0x111f10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f0c) {
            ctx->pc = 0x111F1Cu;
            return;
        }
    }
    ctx->pc = 0x111F14u;
    // 0x111f14: 0xc061920  jal         func_186480
    ctx->pc = 0x111F14u;
    SET_GPR_U32(ctx, 31, 0x111F1Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x111F14u, 0x111F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F1Cu;
}
