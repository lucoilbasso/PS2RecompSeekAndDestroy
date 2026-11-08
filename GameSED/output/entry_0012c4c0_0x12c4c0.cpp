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

// Function: entry_0012c4c0
// Address: 0x12c4c0 - 0x12c4e0
void entry_0012c4c0_0x12c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4c0_0x12c4c0");
#endif

    switch (ctx->pc) {
        case 0x12c4ccu: goto label_12c4cc;
        default: break;
    }

    ctx->pc = 0x12c4c0u;

    // 0x12c4c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c4c4: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C4C4u;
    SET_GPR_U32(ctx, 31, 0x12C4CCu);
    ctx->pc = 0x12C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4C4u;
    // 0x12c4c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C4C4u, 0x12C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4CCu;
label_12c4cc:
    // 0x12c4cc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x12c4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c4d0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x12c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c4d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c4dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x12c4e0u;
}
