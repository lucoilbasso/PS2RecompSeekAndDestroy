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

// Function: entry_0012c468
// Address: 0x12c468 - 0x12c484
void entry_0012c468_0x12c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c468_0x12c468");
#endif

    switch (ctx->pc) {
        case 0x12c474u: goto label_12c474;
        default: break;
    }

    ctx->pc = 0x12c468u;

    // 0x12c468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c46c: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C46Cu;
    SET_GPR_U32(ctx, 31, 0x12C474u);
    ctx->pc = 0x12C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C46Cu;
    // 0x12c470: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C46Cu, 0x12C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C474u;
label_12c474:
    // 0x12c474: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x12c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c478: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x12c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c480: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x12c484u;
}
