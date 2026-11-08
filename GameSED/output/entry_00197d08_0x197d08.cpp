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

// Function: entry_00197d08
// Address: 0x197d08 - 0x197d24
void entry_00197d08_0x197d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d08_0x197d08");
#endif

    ctx->pc = 0x197d08u;

    // 0x197d08: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x197d0c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x197d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x197d10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x197d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x197d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D14u;
    {
        const bool branch_taken_0x197d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d14) {
            ctx->pc = 0x197D24u;
            return;
        }
    }
    ctx->pc = 0x197D1Cu;
    // 0x197d1c: 0xc061920  jal         func_186480
    ctx->pc = 0x197D1Cu;
    SET_GPR_U32(ctx, 31, 0x197D24u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197D1Cu, 0x197D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D24u;
}
