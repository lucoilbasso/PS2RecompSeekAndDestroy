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

// Function: entry_0018fb70
// Address: 0x18fb70 - 0x18fb8c
void entry_0018fb70_0x18fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fb70_0x18fb70");
#endif

    ctx->pc = 0x18fb70u;

    // 0x18fb70: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18fb74: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x18fb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18fb78: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18fb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x18fb7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FB7Cu;
    {
        const bool branch_taken_0x18fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb7c) {
            ctx->pc = 0x18FB8Cu;
            return;
        }
    }
    ctx->pc = 0x18FB84u;
    // 0x18fb84: 0xc061920  jal         func_186480
    ctx->pc = 0x18FB84u;
    SET_GPR_U32(ctx, 31, 0x18FB8Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x18FB84u, 0x18FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB8Cu;
}
