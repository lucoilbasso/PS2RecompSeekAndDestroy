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

// Function: entry_00153b90
// Address: 0x153b90 - 0x153ba4
void entry_00153b90_0x153b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153b90_0x153b90");
#endif

    switch (ctx->pc) {
        case 0x153ba0u: goto label_153ba0;
        default: break;
    }

    ctx->pc = 0x153b90u;

    // 0x153b90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x153b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x153b94: 0x92260575  lbu         $a2, 0x575($s1)
    ctx->pc = 0x153b94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1397)));
    // 0x153b98: 0xc04c288  jal         func_130A20
    ctx->pc = 0x153B98u;
    SET_GPR_U32(ctx, 31, 0x153BA0u);
    ctx->pc = 0x153B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B98u;
    // 0x153b9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B98u, 0x153BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153BA0u;
label_153ba0:
    // 0x153ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x153ba4u;
}
