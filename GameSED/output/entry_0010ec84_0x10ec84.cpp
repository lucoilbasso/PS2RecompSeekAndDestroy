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

// Function: entry_0010ec84
// Address: 0x10ec84 - 0x10eca4
void entry_0010ec84_0x10ec84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec84_0x10ec84");
#endif

    ctx->pc = 0x10ec84u;

    // 0x10ec84: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x10EC84u;
    {
        const bool branch_taken_0x10ec84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC84u;
        // 0x10ec88: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec84) {
            ctx->pc = 0x10ED00u;
            return;
        }
    }
    ctx->pc = 0x10EC8Cu;
    // 0x10ec8c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x10ec8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x10ec90: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x10ec90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x10ec94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EC94u;
    {
        const bool branch_taken_0x10ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec94) {
            ctx->pc = 0x10ECA4u;
            return;
        }
    }
    ctx->pc = 0x10EC9Cu;
    // 0x10ec9c: 0xc061920  jal         func_186480
    ctx->pc = 0x10EC9Cu;
    SET_GPR_U32(ctx, 31, 0x10ECA4u);
    ctx->pc = 0x10ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC9Cu;
    // 0x10eca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x10EC9Cu, 0x10ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECA4u;
}
