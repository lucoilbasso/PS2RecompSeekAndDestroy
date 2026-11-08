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

// Function: entry_0013b3f0
// Address: 0x13b3f0 - 0x13b418
void entry_0013b3f0_0x13b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b3f0_0x13b3f0");
#endif

    switch (ctx->pc) {
        case 0x13b3f8u: goto label_13b3f8;
        default: break;
    }

    ctx->pc = 0x13b3f0u;

    // 0x13b3f0: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13B3F0u;
    SET_GPR_U32(ctx, 31, 0x13B3F8u);
    ctx->pc = 0x13B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3F0u;
    // 0x13b3f4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13B3F0u, 0x13B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3F8u;
label_13b3f8:
    // 0x13b3f8: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x13b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13b3fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13b400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b404: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B404u;
    {
        const bool branch_taken_0x13b404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b404) {
            ctx->pc = 0x13B464u;
            return;
        }
    }
    ctx->pc = 0x13B40Cu;
    // 0x13b40c: 0x26b00080  addiu       $s0, $s5, 0x80
    ctx->pc = 0x13b40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x13b410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b414: 0x0  nop
    ctx->pc = 0x13b414u;
    // NOP
    ctx->pc = 0x13b418u;
}
