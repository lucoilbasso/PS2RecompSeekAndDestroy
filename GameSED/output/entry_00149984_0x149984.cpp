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

// Function: entry_00149984
// Address: 0x149984 - 0x149994
void entry_00149984_0x149984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149984_0x149984");
#endif

    ctx->pc = 0x149984u;

    // 0x149984: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x149984u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x149988: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x149988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14998c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x14998Cu;
    SET_GPR_U32(ctx, 31, 0x149994u);
    ctx->pc = 0x149990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14998Cu;
    // 0x149990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x14998Cu, 0x149994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149994u;
}
