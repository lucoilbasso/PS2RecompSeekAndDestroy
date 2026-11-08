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

// Function: entry_00196838
// Address: 0x196838 - 0x196854
void entry_00196838_0x196838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196838_0x196838");
#endif

    ctx->pc = 0x196838u;

    // 0x196838: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x19683c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19683cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x196840: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x196840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x196844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196844u;
    {
        const bool branch_taken_0x196844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196844u;
        // 0x196848: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196844) {
            ctx->pc = 0x196854u;
            return;
        }
    }
    ctx->pc = 0x19684Cu;
    // 0x19684c: 0xc061920  jal         func_186480
    ctx->pc = 0x19684Cu;
    SET_GPR_U32(ctx, 31, 0x196854u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x19684Cu, 0x196854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196854u;
}
