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

// Function: default
// Address: 0x12feb8 - 0x12fed8
void ps2_default_0x12feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x12feb8");
#endif

    switch (ctx->pc) {
        case 0x12fec4u: goto label_12fec4;
        default: break;
    }

    ctx->pc = 0x12feb8u;

    // 0x12feb8: 0x96650132  lhu         $a1, 0x132($s3)
    ctx->pc = 0x12feb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
    // 0x12febc: 0xc047b7c  jal         func_11EDF0
    ctx->pc = 0x12FEBCu;
    SET_GPR_U32(ctx, 31, 0x12FEC4u);
    ctx->pc = 0x12FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEBCu;
    // 0x12fec0: 0x26670010  addiu       $a3, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EDF0u, 0x12FEBCu, 0x12FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEC4u;
label_12fec4:
    // 0x12fec4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12fec8: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12fecc: 0x240300c7  addiu       $v1, $zero, 0xC7
    ctx->pc = 0x12feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x12fed0: 0x2442031c  addiu       $v0, $v0, 0x31C
    ctx->pc = 0x12fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 796));
    // 0x12fed4: 0x0  nop
    ctx->pc = 0x12fed4u;
    // NOP
    ctx->pc = 0x12fed8u;
}
