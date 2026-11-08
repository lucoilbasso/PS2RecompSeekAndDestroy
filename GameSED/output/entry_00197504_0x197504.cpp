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

// Function: entry_00197504
// Address: 0x197504 - 0x197520
void entry_00197504_0x197504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197504_0x197504");
#endif

    ctx->pc = 0x197504u;

    // 0x197504: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x197508: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x197508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19750c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x19750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x197510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197510u;
    {
        const bool branch_taken_0x197510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197510) {
            ctx->pc = 0x197520u;
            return;
        }
    }
    ctx->pc = 0x197518u;
    // 0x197518: 0xc061920  jal         func_186480
    ctx->pc = 0x197518u;
    SET_GPR_U32(ctx, 31, 0x197520u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197518u, 0x197520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197520u;
}
