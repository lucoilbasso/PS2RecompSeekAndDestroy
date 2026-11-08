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

// Function: entry_00143698
// Address: 0x143698 - 0x1436b0
void entry_00143698_0x143698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143698_0x143698");
#endif

    switch (ctx->pc) {
        case 0x1436acu: goto label_1436ac;
        default: break;
    }

    ctx->pc = 0x143698u;

    // 0x143698: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14369c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436a0: 0x24a56990  addiu       $a1, $a1, 0x6990
    ctx->pc = 0x1436a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
    // 0x1436a4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1436A4u;
    SET_GPR_U32(ctx, 31, 0x1436ACu);
    ctx->pc = 0x1436A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436A4u;
    // 0x1436a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1436A4u, 0x1436ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436ACu;
label_1436ac:
    // 0x1436ac: 0x96e3000e  lhu         $v1, 0xE($s7)
    ctx->pc = 0x1436acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 14)));
    ctx->pc = 0x1436b0u;
}
