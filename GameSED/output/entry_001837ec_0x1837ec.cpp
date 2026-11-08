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

// Function: entry_001837ec
// Address: 0x1837ec - 0x183808
void entry_001837ec_0x1837ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001837ec_0x1837ec");
#endif

    ctx->pc = 0x1837ecu;

    // 0x1837ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1837ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1837f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1837f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1837f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1837f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1837f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1837F8u;
    {
        const bool branch_taken_0x1837f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837f8) {
            ctx->pc = 0x1837FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1837F8u;
            // 0x1837fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18381Cu;
            return;
        }
    }
    ctx->pc = 0x183800u;
    // 0x183800: 0xc060d20  jal         func_183480
    ctx->pc = 0x183800u;
    SET_GPR_U32(ctx, 31, 0x183808u);
    ctx->pc = 0x183480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183480u, 0x183800u, 0x183808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183808u;
}
