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

// Function: entry_0011c1b4
// Address: 0x11c1b4 - 0x11c1f8
void entry_0011c1b4_0x11c1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c1b4_0x11c1b4");
#endif

    switch (ctx->pc) {
        case 0x11c1dcu: goto label_11c1dc;
        default: break;
    }

    ctx->pc = 0x11c1b4u;

    // 0x11c1b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11c1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11c1b8: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x11c1b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x11c1bc: 0x2aa2000c  slti        $v0, $s5, 0xC
    ctx->pc = 0x11c1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x11c1c0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x11C1C0u;
    {
        const bool branch_taken_0x11c1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1C0u;
        // 0x11c1c4: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1c0) {
            ctx->pc = 0x11C158u;
            return;
        }
    }
    ctx->pc = 0x11C1C8u;
    // 0x11c1c8: 0x86e20c30  lh          $v0, 0xC30($s7)
    ctx->pc = 0x11c1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 3120)));
    // 0x11c1cc: 0x26e50c32  addiu       $a1, $s7, 0xC32
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3122));
    // 0x11c1d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1d4: 0xc04615e  jal         func_118578
    ctx->pc = 0x11C1D4u;
    SET_GPR_U32(ctx, 31, 0x11C1DCu);
    ctx->pc = 0x11C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1D4u;
    // 0x11c1d8: 0xa6820c30  sh          $v0, 0xC30($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 3120), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118578u, 0x11C1D4u, 0x11C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1DCu;
label_11c1dc:
    // 0x11c1dc: 0x8ee30fe8  lw          $v1, 0xFE8($s7)
    ctx->pc = 0x11c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4072)));
    // 0x11c1e0: 0x24050ff0  addiu       $a1, $zero, 0xFF0
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x11c1e4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x11c1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11c1e8: 0xae830fe8  sw          $v1, 0xFE8($s4)
    ctx->pc = 0x11c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4072), GPR_U32(ctx, 3));
    // 0x11c1ec: 0x8ee20fec  lw          $v0, 0xFEC($s7)
    ctx->pc = 0x11c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4076)));
    // 0x11c1f0: 0xae820fec  sw          $v0, 0xFEC($s4)
    ctx->pc = 0x11c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4076), GPR_U32(ctx, 2));
    // 0x11c1f4: 0x0  nop
    ctx->pc = 0x11c1f4u;
    // NOP
    ctx->pc = 0x11c1f8u;
}
