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

// Function: entry_00110d74
// Address: 0x110d74 - 0x110d98
void entry_00110d74_0x110d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110d74_0x110d74");
#endif

    switch (ctx->pc) {
        case 0x110d8cu: goto label_110d8c;
        default: break;
    }

    ctx->pc = 0x110d74u;

    // 0x110d74: 0x160000cd  bnez        $s0, . + 4 + (0xCD << 2)
    ctx->pc = 0x110D74u;
    {
        const bool branch_taken_0x110d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D74u;
        // 0x110d78: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d74) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110D7Cu;
    // 0x110d7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110d80: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x110d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x110d84: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110D84u;
    SET_GPR_U32(ctx, 31, 0x110D8Cu);
    ctx->pc = 0x110D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D84u;
    // 0x110d88: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110D84u, 0x110D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D8Cu;
label_110d8c:
    // 0x110d8c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x110D8Cu;
    {
        const bool branch_taken_0x110d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D8Cu;
        // 0x110d90: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d8c) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110D94u;
    // 0x110d94: 0x0  nop
    ctx->pc = 0x110d94u;
    // NOP
    ctx->pc = 0x110d98u;
}
