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

// Function: entry_00143c20
// Address: 0x143c20 - 0x143c38
void entry_00143c20_0x143c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c20_0x143c20");
#endif

    ctx->pc = 0x143c20u;

    // 0x143c20: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x143c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x143c24: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x143c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x143c28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x143c2c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x143c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x143c30: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x143C30u;
    SET_GPR_U32(ctx, 31, 0x143C38u);
    ctx->pc = 0x143C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C30u;
    // 0x143c34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x143C30u, 0x143C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C38u;
}
