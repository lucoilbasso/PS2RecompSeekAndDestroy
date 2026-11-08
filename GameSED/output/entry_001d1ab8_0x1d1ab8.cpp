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

// Function: entry_001d1ab8
// Address: 0x1d1ab8 - 0x1d1ae4
void entry_001d1ab8_0x1d1ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1ab8_0x1d1ab8");
#endif

    switch (ctx->pc) {
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1adcu: goto label_1d1adc;
        default: break;
    }

    ctx->pc = 0x1d1ab8u;

    // 0x1d1ab8: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x1D1AB8u;
    SET_GPR_U32(ctx, 31, 0x1D1AC0u);
    ctx->pc = 0x1D1ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB8u;
    // 0x1d1abc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x1D1AB8u, 0x1D1AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC0u;
label_1d1ac0:
    // 0x1d1ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ac4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1d1ac4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1d1ac8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1acc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d1accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1ad0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d1ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1ad4: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x1D1AD4u;
    SET_GPR_U32(ctx, 31, 0x1D1ADCu);
    ctx->pc = 0x1D1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD4u;
    // 0x1d1ad8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x1D1AD4u, 0x1D1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ADCu;
label_1d1adc:
    // 0x1d1adc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    ctx->pc = 0x1d1ae4u;
}
